#include "globals.h"

size_t g_globals[GLOBALS_SIZE][LANG_SIZE] = {
    /*[OPEN_ENGINE_ADDR] = */                       { 0x00538D00, 0x00520500 },
    /*[CALL_TO_OPEN_ENGINE_INSIDE_MAIN] = */        { 0x00545166, 0x0052b836 },
    /*[WIN_MESSAGE_LOOOP_ADDR] = */                 { 0x005356E0, 0x0051df40 },
    /*[CALL_TO_WIN_MESSAGE_LOOP_INSIDE_MASTER] = */ { 0x005373f7, 0x0051ed77 },
    /*[FIND_FREE_LINKED_LIST_NODE] = */             { 0x00502e00, 0x004ee190 },
    /*[GET_PRODUCTION_INFO] = */                    { 0x005b1aa0, 0x005964a0 },
    /*[FIND_BY_OBJECT_ID] = */                      { 0x005015e0, 0x004ecc20 },
    /*[G_OBJECTS_COUNT] = */                        { 0x00699364, 0x006438e4 },
    /*[G_OBJECTS_PROTOTYPES] = */                   { 0x0099EC10, 0x00946cb0 },
    /*[G_CHARACTERS] = */                           { 0x007f4ca0, 0x0079cd40 },
    /*[G_MARKET_PTR] = */                           { 0x00773D78, 0x0071d098 },
    /*[G_CURRENT_BUILDING_PTR] = */                 { 0x00774718, 0x0071d834 },
    /*[G_CURRENT_BUILDING_PTR_2] = */               { 0x007746c8, 0x0071d7e4 },
    /*[G_CURRENT_ROOM_PTR] = */                     { 0x007746cc, 0x0071d7e8 },
    /*[G_CHAR_580_1] = */                           { 0x014d0020, 0x01474f20 },
    /*[G_CHAR_580_2] = */                           { 0x01551f40, 0x014f6e60 },
};

LANG g_lang;
#define _G(key) g_globals[(key)][g_lang]

//----------------------------------------------------------------------------


typedef LinkedList *(*__FindFreeLinkedListNode)();
__FindFreeLinkedListNode FindFreeLinkedListNode;

typedef ProductionInfo *(*FN_get_production_info_005b1aa0)(BuildingInstance *);
FN_get_production_info_005b1aa0 GetProductionInfo;

// Returns: 0 - nothing found, 1 - building found, 2 - linked list found, 3 - character found
typedef int (*FN_find_by_object_id_005015e0)(BuildingInstance **param_1,LinkedList **param_2,Character **param_3,int object_id);
FN_find_by_object_id_005015e0 FindById;


//----------------------------------------------------------------------------


int *g_objects_count;
ObjectPrototype_65** g_objects_prototypes;
Character* g_characters;
BuildingInstance **g_market_ptr;
BuildingInstance** g_current_building_ptr;
BuildingInstance** g_current_building_ptr_2;
LinkedList** g_current_room_ptr;
Character_580* g_char_580_1;
Character_580* g_char_580_2;


//----------------------------------------------------------------------------

void InitGlobals() {
    if (*(size_t*)0x00401025 == 0x006624a0) {
        g_lang = LANG::RU;
    } else if (*(size_t*)0x00401025 == 0x006153c0) {
        g_lang = LANG::DE;
    } else {
        assert(false && "Unexpected executable");
    }

    FindFreeLinkedListNode = (__FindFreeLinkedListNode)_G(FIND_FREE_LINKED_LIST_NODE);
    GetProductionInfo = (FN_get_production_info_005b1aa0)_G(GET_PRODUCTION_INFO);
    FindById = (FN_find_by_object_id_005015e0)_G(FIND_BY_OBJECT_ID);

    g_objects_count = (int*)_G(G_OBJECTS_COUNT);
    g_objects_prototypes = (ObjectPrototype_65**)_G(G_OBJECTS_PROTOTYPES);
    g_characters = (Character*)_G(G_CHARACTERS);
    g_market_ptr = (BuildingInstance**)_G(G_MARKET_PTR);
    g_current_building_ptr = (BuildingInstance**)_G(G_CURRENT_BUILDING_PTR);
    g_current_building_ptr_2 = (BuildingInstance**)_G(G_CURRENT_BUILDING_PTR_2);
    g_current_room_ptr = (LinkedList**)_G(G_CURRENT_ROOM_PTR);
    g_char_580_1 = (Character_580*)_G(G_CHAR_580_1);
    g_char_580_2 = (Character_580*)_G(G_CHAR_580_2);
}
