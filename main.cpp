#include "windows.h"
#include "stdio.h"
#include <iostream>

#pragma comment(lib,"user32.lib")

#include "globals.h"

void gui_init();
void gui_loop_step();

extern "C" {

typedef int (*OpenEnginePtr)();
typedef void (*WinMessageLoopPtr)();

__declspec(dllexport)
int ShowMessage() {
    return MessageBoxA(NULL, "Hola", "o_O", MB_OK);
}

__declspec(dllexport)
void PrintMessage() {
    static size_t counter;
    std::cout << "Hola " << counter++ << std::endl;
}

void win_message_lopp_wrapper() {
    gui_loop_step();

    WinMessageLoopPtr f = (WinMessageLoopPtr)_G(WIN_MESSAGE_LOOOP_ADDR);
    f();
    //PrintMessage();
}

__declspec(dllexport)
int OpenEngineWrapper() {
    /*AllocConsole();
    freopen("CONOUT$", "w", stdout);
    PrintMessage();*/
    gui_init();

    OpenEnginePtr openEngine = (OpenEnginePtr)_G(OPEN_ENGINE_ADDR);
    return openEngine();
    /*void* fn_ptr = (void*)OPEN_ENGINE_ADDR;
    __asm {
        call [fn_ptr]
        leave
        ret
    }*/
}

}

#pragma pack(push, 1)
struct Call {
    unsigned char code;
    int offset;
};
#pragma pack(pop)

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpvReserved )  // reserved
{
    if (fdwReason == DLL_PROCESS_ATTACH) {
        InitGlobals();

        struct Functions {
            size_t originalFunctionPtr;
            void* localFunctionPtr;
            size_t callCommandPtr;
        } g_replacement_array[] = {
            {_G(OPEN_ENGINE_ADDR), OpenEngineWrapper, _G(CALL_TO_OPEN_ENGINE_INSIDE_MAIN)},
            {_G(WIN_MESSAGE_LOOOP_ADDR), win_message_lopp_wrapper, _G(CALL_TO_WIN_MESSAGE_LOOP_INSIDE_MASTER)},
        };

        Functions* ptr = g_replacement_array;
        Functions *end = g_replacement_array + sizeof(g_replacement_array)/sizeof(*g_replacement_array);
        for (; ptr < end; ++ptr) {
            Call* callInfo = (Call*)ptr->callCommandPtr;
            if (callInfo->code == 0xE8 /*call nearby*/) {
                if ((size_t)ptr->localFunctionPtr > (size_t)callInfo) {
                    int expectedFunctionAddr = (int)callInfo + callInfo->offset + 5;
                    if (expectedFunctionAddr == ptr->originalFunctionPtr) {
                        DWORD oldProtect;
                        VirtualProtect(callInfo, 5, PAGE_EXECUTE_READWRITE, &oldProtect);
                        callInfo->offset = (int)ptr->localFunctionPtr - (int)callInfo - 5;
                        VirtualProtect(callInfo, 5, oldProtect, NULL);
                    } else {
                        MessageBoxA(NULL, "Addr does not match.", "Error", MB_OK);
                    }
                } else {
                    MessageBoxA(NULL, "Didn't implement that.", "Error", MB_OK);
                }
            } else {
                MessageBoxA(NULL, "Unexpected command.", "Error", MB_OK);
            }
        }
    }
    return TRUE;
}
