typedef unsigned char   undefined;

/*
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    bool;
*/
typedef unsigned char    byte;
typedef unsigned int    dword;
/*
float10
*/
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned int    uint3;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
/*
typedef short    wchar_t;
*/
typedef unsigned short    word;
typedef struct __LinkedListTime __LinkedListTime, *P__LinkedListTime;

struct __LinkedListTime {
    byte time_1;
    byte time_2;
    ushort character_id_for_action;
};

typedef union __LinkedListUnion __LinkedListUnion, *P__LinkedListUnion;

union __LinkedListUnion {
    undefined4 building_id_or_kind;
    struct __LinkedListTime time;
};

typedef struct AhmInfo AhmInfo, *PAhmInfo;

typedef enum OBJECT_PROTOTYPE:short {
    OBJ_NULL=0,
    OBJ_KANALISATION=1,
    OBJ_BRENNESSELN=2,
    OBJ_EISENTUER=3,
    OBJ_OFFENES_FEUER=4,
    OBJ_KAMIN=5,
    OBJ_VERTAEFELUNG=6,
    OBJ_TAPETEN=7,
    OBJ_PORTAL=8,
    OBJ_SEKRETARIAT=9,
    OBJ_WINTERGARTEN=10,
    OBJ_PERSONALTRAKT=11,
    OBJ_EINFRIEDUNG=12,
    OBJ_RASEN=13,
    OBJ_HECKEN=14,
    OBJ_STATUEN=15,
    OBJ_SPRINGBRUNNEN=16,
    OBJ_PAVILLON=17,
    OBJ_WOHN_UND_SCHLAFRAUM=18,
    OBJ_ARBEITSZIMMER=19,
    OBJ_HINTERZIMMER=20,
    OBJ_BIBLIOTHEK=21,
    OBJ_WEINKELLER=22,
    OBJ_SALON=23,
    OBJ_MUSIKZIMMER=24,
    OBJ_STROHMATTE=25,
    OBJ_HOLZBETT=26,
    OBJ_SCHREIBPULT=27,
    OBJ_KERZE=28,
    OBJ_OELLAMPE=29,
    OBJ_SCRIPTORIUMSLEUCHTER=30,
    OBJ_LAGERHAUS_ARBEITSRAUM=31,
    OBJ_FLASCHENZUG=32,
    OBJ_PEITSCHE=33,
    OBJ_STOCK_MIT_KAROTTE=34,
    OBJ_DEICHSEL_EINSPAENNIG=35,
    OBJ_DEICHSEL_ZWEISPAENNIG=36,
    OBJ_DEICHSEL_VIERSPAENNIG=37,
    OBJ_AXTSTAENDER=38,
    OBJ_SAEGEWERK=39,
    OBJ_WURZELHACKE=40,
    OBJ_ZWEIMANNSAEGE=41,
    OBJ_LAGERFLAECHE=42,
    OBJ_PLANE=43,
    OBJ_ARBEITERHUETTE=44,
    OBJ_VORARBEITERHUETTE=45,
    OBJ_GELDSCHRANK=46,
    OBJ_STEINKARRE=47,
    OBJ_BAUGERUEST=48,
    OBJ_HEBEKRAN=49,
    OBJ_PERSONALBUCH=50,
    OBJ_SOELDNERHUETTE=51,
    OBJ_ZIELSCHEIBE=52,
    OBJ_STROHPUPPE=53,
    OBJ_GRUBENBELEUCHTUNG=54,
    OBJ_MINENSTOLLEN=55,
    OBJ_STUETZBALKEN=56,
    OBJ_GRUBENHUNDEKAEFIG=57,
    OBJ_LORE=58,
    OBJ_ZIEGELFORM=59,
    OBJ_ZIEGELBRENNOFEN=60,
    OBJ_KOELNISCHE_MARK=61,
    OBJ_TALER=62,
    OBJ_GULDEN=63,
    OBJ_DUKAT=64,
    OBJ_PFUND_PFENNIGE=65,
    OBJ_LIVRE_TOURNOIS=66,
    OBJ_FRANC=67,
    OBJ_MARK_LUEBISCH=68,
    OBJ_PFUND=69,
    OBJ_FLORINT=70,
    OBJ_SOVEREIGN=71,
    OBJ_UNITE=72,
    OBJ_GUINEE=73,
    OBJ_LIRA_GROSSORUM=74,
    OBJ_VENEZISCHER_DUKAT=75,
    OBJ_DOLLAR=76,
    OBJ_DIEBESGILDE_GANGSYSTEM=77,
    OBJ_ABSTUETZBALKEN=78,
    OBJ_VERMAUERUNG=79,
    OBJ_HORCHPOSTEN=80,
    OBJ_TAEUSCHUNGS_TRUHE=81,
    OBJ_ILLUSIONSWAND=82,
    OBJ_FALLE=83,
    OBJ_DIEBESGILDE_AUFENTHALTSRAUM=84,
    OBJ_WEINFASS=85,
    OBJ_LAGERFEUER=86,
    OBJ_VORHANG_FUER_CHEF=87,
    OBJ_MITARBEITER_DES_MONATS=88,
    OBJ_SEKRETAER_AUFSATZ=89,
    OBJ_DIEBES_BRIEFPAPIER=90,
    OBJ_INFORMATIONSPERGAMENT=91,
    OBJ_DIEBESGILDE_LAGERRAUM=92,
    OBJ_INNENRAUM_BRUNNEN=93,
    OBJ_HEILBRUNNEN=94,
    OBJ_SCHATZTRUHE=95,
    OBJ_DIEBESGILDE_TRAININGSRAUM=96,
    OBJ_KUGEL_UND_PULVER_SAECKCHEN=97,
    OBJ_PULVERFASS=98,
    OBJ_KOSTUEMTRUHE=99,
    OBJ_REGAL_GEDICHTBAENDE=100,
    OBJ_DIEBESGILDE_GEFAENGNIS=101,
    OBJ_PATRIZIERBETT=102,
    OBJ_WACHTISCH=103,
    OBJ_GITTER=104,
    OBJ_KETTENFESSEL=105,
    OBJ_FELDBETT=106,
    OBJ_WASCHSCHUESSEL=107,
    OBJ_FLUCHTGANG=108,
    OBJ_MEISTERBRIEF=109,
    OBJ_STROHLAGER=110,
    OBJ_SCHILD_DIEBESGILDE=111,
    OBJ_SCHILD_GEFAENGNIS=112,
    OBJ_SCHILD_LAGERHAUS=113,
    OBJ_SCHILD_STADTWACHE=114,
    OBJ_SCHILD_SCHMIEDE=115,
    OBJ_SCHMIEDE_ARBEITSRAUM=116,
    OBJ_AMBOSS=117,
    OBJ_SCHMIEDEHAMMER=118,
    OBJ_ESSE=119,
    OBJ_WASSERBOTTICH=120,
    OBJ_SCHUERZE=121,
    OBJ_ZANGE=122,
    OBJ_GUSSFORM=123,
    OBJ_GIESSKELLE=124,
    OBJ_ENTGRATER=125,
    OBJ_BESEN=126,
    OBJ_BLASEBALG=127,
    OBJ_SCHMIEDEOFEN=128,
    OBJ_EISENSCHWAMM=129,
    OBJ_EISENSCHNEIDER=130,
    OBJ_VERSIEGELER=131,
    OBJ_SCHILD_TISCHLER=132,
    OBJ_TISCHLEREI_ARBEITSRAUM=133,
    OBJ_MESSER=134,
    OBJ_TISCHLERHAMMER=135,
    OBJ_SAEGE=136,
    OBJ_HOBEL=137,
    OBJ_LEIMTOPF=138,
    OBJ_SCHRAUBZWINGE=139,
    OBJ_HOBELBANK=140,
    OBJ_ZOLLSTOCK=141,
    OBJ_LOT=142,
    OBJ_FEILE=143,
    OBJ_MECHANISCHE_SAEGE=144,
    OBJ_MARKTPLATZ_ARBEITSRAUM=145,
    OBJ_MARKTSTAND_TISCHLER_SCHMIEDE=146,
    OBJ_MARKTSTAND_STEINMETZ_WIRT=147,
    OBJ_MARKTSTAND_PARFUM_KRAEUTER=148,
    OBJ_MARKTSTAND_ROHSTOFFE=149,
    OBJ_MARKTSTAND_IMPORTEUR=150,
    OBJ_MARKTSTAND_KIRCHE=151,
    OBJ_SCHWARZES_BRETT=152,
    OBJ_TRIBUENE=153,
    OBJ_SCHILD_STEINMETZ=154,
    OBJ_STEINMETZ_ARBEITSRAUM=155,
    OBJ_HAMMER_UND_MEISSEL=156,
    OBJ_MAURERKELLE=157,
    OBJ_LEITER=158,
    OBJ_WASSEREIMER=159,
    OBJ_SCHUBKARRE=160,
    OBJ_EISENBUERSTE=161,
    OBJ_DRAHTSAEGE=162,
    OBJ_KUEHLZUFLUSS=163,
    OBJ_SCHILD_GELDLEIHE=164,
    OBJ_GELDLEIHE_ARBEITSRAUM=165,
    OBJ_FENSTERGITTER=166,
    OBJ_GARDINE=167,
    OBJ_BESUCHERSTUHL=168,
    OBJ_BESUCHERSESSEL=169,
    OBJ_WEINFLASCHE_UND_GLAESER=170,
    OBJ_KASSE=171,
    OBJ_EISENSCHRANK=172,
    OBJ_WANDGEMAELDE=173,
    OBJ_RICHTSCHWERT=174,
    OBJ_RICHTAXT=175,
    OBJ_GALGEN=176,
    OBJ_KREUZ=177,
    OBJ_SCHEITERHAUFEN=178,
    OBJ_EXEKUTIONSKANONE=179,
    OBJ_GUILLOTINE=180,
    OBJ_LOGE=181,
    OBJ_WAAGE=182,
    OBJ_GEFAENGNIS_WACHRAUM=183,
    OBJ_GEFANGENENLITERATUR=184,
    OBJ_KERKERPLAN=185,
    OBJ_GEFAENGNIS_ZELLE=186,
    OBJ_GEFAENGNIS_FOLTERKAMMER=187,
    OBJ_DAUMENSCHRAUBEN=188,
    OBJ_SPANISCHE_STIEFEL=189,
    OBJ_NEUNSCHWAENZIGE_PEITSCHE=190,
    OBJ_ESSE_UND_BRANDEISEN=191,
    OBJ_EISWASSERTROPFER=192,
    OBJ_HAENGENDER_KAEFIG=193,
    OBJ_STRECKBANK=194,
    OBJ_BRUNNENEIMER_NORMAL=195,
    OBJ_BRUNNENEIMER_EISEN=196,
    OBJ_SCHWEINEMAGEN=197,
    OBJ_KUHMAGEN=198,
    OBJ_BRUNNENSEIL=199,
    OBJ_BRUNNENKETTE=200,
    OBJ_HEILIGENFIGUR=201,
    OBJ_WEIHPLAKETTE_1=202,
    OBJ_WEIHPLAKETTE_2=203,
    OBJ_WEIHPLAKETTE_3=204,
    OBJ_WEIHPLAKETTE_4=205,
    OBJ_SCHILD_KRAEUTERLADEN=206,
    OBJ_KRAEUTERLADEN_ARBEITSRAUM=207,
    OBJ_KRAEUTERREGAL=208,
    OBJ_SCHWERER_VORHANG=209,
    OBJ_MEDIZINFAESSCHEN=210,
    OBJ_VITRINE=211,
    OBJ_TROCKENBUCH=212,
    OBJ_MOERSER_UND_STEMPEL=213,
    OBJ_KRAEUTERLADEN_LABOR=214,
    OBJ_GIFTFAESSCHEN=215,
    OBJ_SCHRAUBPRESSE=216,
    OBJ_SUDERHITZER=217,
    OBJ_CHEMIKALIENKASTEN=218,
    OBJ_DESTILLIERKOLBEN=219,
    OBJ_GEHEIMFACH=220,
    OBJ_KRAEUTERLADEN_MODRIGER_KELLER=221,
    OBJ_TEICH=222,
    OBJ_FLIEGENGLAS=223,
    OBJ_KLOAKENZUGANG=224,
    OBJ_PILZKULTUR=225,
    OBJ_DACHBALKEN=226,
    OBJ_TERRARIUM=227,
    OBJ_SCHILD_KIRCHE=228,
    OBJ_KIRCHE_ARBEITSRAUM=229,
    OBJ_KATHEDRALE_ARBEITSRAUM=230,
    OBJ_KIRCHENKREUZ=231,
    OBJ_SPENDENKAESTCHEN=232,
    OBJ_WEIHWASSERBECKEN=233,
    OBJ_HOLZBANK=234,
    OBJ_POLSTERBANK=235,
    OBJ_KANZEL=236,
    OBJ_ALTAR=237,
    OBJ_ORGEL=238,
    OBJ_LICHTGADEN=239,
    OBJ_KIRCHE_ALTARRAUM=240,
    OBJ_MARIENBILD=241,
    OBJ_KIRCHE_BEICHTSTUHLRAUM=242,
    OBJ_KIRCHE_GLOCKENTURMRAUM=243,
    OBJ_GLOCKE=244,
    OBJ_EISENAUFHAENGUNG=245,
    OBJ_GROSSE_GLOCKE=246,
    OBJ_KIRCHE_SCRIPTORIUM=247,
    OBJ_BUCHVITRINE=248,
    OBJ_FARBENKASTEN=249,
    OBJ_SETZKASTEN=250,
    OBJ_MUSTERBUCH=251,
    OBJ_DRUCKERPRESSE=252,
    OBJ_AUSSEN_RAUM=253,
    OBJ_ROHSTOFFVORKOMMEN=254,
    OBJ_POTENTIAL=255,
    OBJ_WILDSCHWEINSPIESS=256,
    OBJ_RUMFASS=257,
    OBJ_AUSGUCK=258,
    OBJ_TARNUNG_ABZWEIGUNG=259,
    OBJ_TARNUNG_TORBOGEN=260,
    OBJ_ABWEHRSTELLUNG=261,
    OBJ_AUSGUCK_UPGRADE=262,
    OBJ_CHEFZELT=263,
    OBJ_MASKE_DES_ZORRO=264,
    OBJ_RAEUBERZELT=265,
    OBJ_FLUCHTHUETTE=266,
    OBJ_FLUCHTSEIL=267,
    OBJ_SPROSSEN=268,
    OBJ_RUTSCHE=269,
    OBJ_RATHAUS_HALLE=270,
    OBJ_MARMORWAPPEN=271,
    OBJ_RATHAUS_SEKRETARIAT=272,
    OBJ_GESETZBUCH_STRAFRECHT=273,
    OBJ_GESETZBUCH_STEUERN=274,
    OBJ_GESETZBUCH_VERFASSUNG=275,
    OBJ_RATHAUS_SITZUNGSSAAL=276,
    OBJ_STADTKASSE=277,
    OBJ_LAGERFLAECHE_ALLGEMEIN=278,
    OBJ_SCHILD_PARFUMEUR=279,
    OBJ_PARFUMERIE_ARBEITSRAUM=280,
    OBJ_PARFUMREGAL=281,
    OBJ_MISCHGEFAESS=282,
    OBJ_MESSBECHER=283,
    OBJ_MOERSER=284,
    OBJ_SPATEL=285,
    OBJ_PIPETTE=286,
    OBJ_SCHILD_WIRTSHAUS=287,
    OBJ_WIRTSHAUS_ARBEITSRAUM=288,
    OBJ_URKUNDE_SCHANKRECHT=289,
    OBJ_URKUNDE_BRAURECHT=290,
    OBJ_URKUNDE_DESTILLIERRECHT=291,
    OBJ_LANGE_TISCHE=292,
    OBJ_EINZELTISCHE=293,
    OBJ_STUEHLE=294,
    OBJ_SCHOENE_STUEHLE=295,
    OBJ_HOLZGESCHIRR=296,
    OBJ_EISENGESCHIRR=297,
    OBJ_SILBERGESCHIRR=298,
    OBJ_SPIELTISCH=299,
    OBJ_DUNKLE_ECKE=300,
    OBJ_STAMMTISCH=301,
    OBJ_WIRTSHAUS_KELLER=302,
    OBJ_BIERFASS=303,
    OBJ_WEINREGAL=304,
    OBJ_SCHNAPPSFAESSCHEN=305,
    OBJ_BRAUANLAGE=306,
    OBJ_DESTILLIERANLAGE=307,
    OBJ_KARREN=308,
    OBJ_KARREN_MITTEL=309,
    OBJ_KARREN_GROSS=310,
    OBJ_ZUNFTHAUS_HALLE=311,
    OBJ_ZUNFTHAUS_SEKRETARIAT=312,
    OBJ_ZUNFTHAUS_SITZUNGSSAAL=313,
    OBJ_ZUNFTWAPPEN_PARFUMEURE=314,
    OBJ_ZUNFTWAPPEN_SCHMIEDE=315,
    OBJ_ZUNFTWAPPEN_STEINMETZ=316,
    OBJ_ZUNFTWAPPEN_TISCHLER=317,
    OBJ_ROTER_TEPPICH=318,
    OBJ_SAEULEN=319,
    OBJ_KARTENTISCH=320,
    OBJ_GESETZ=321,
    OBJ_ZUNFTKASSE=322,
    OBJ_ZUNFTVITRINE=323,
    OBJ_ZUNFTMEISTERBILD=324,
    OBJ_STADTWACHE_MANNSCHAFTSRAUM=325,
    OBJ_STADTWACHE_WACHZIMMER=326,
    OBJ_ZOLLKASSE=327,
    OBJ_ZOLLKASSE_MIT_GEHEIMFACH=328,
    OBJ_SCHLACHTENGEMAELDE=329,
    OBJ_WACHPLAN=330,
    OBJ_SCHNAPPSVORRAT=331,
    OBJ_STADTWACHE_WAFFENKAMMER=332,
    OBJ_SCHWERTERREGAL=333,
    OBJ_PISTOLENREGAL=334,
    OBJ_KUGELSAECKCHEN=335,
    OBJ_PULVERFASS_2=336,
    OBJ_KANONENKUGELKISTE=337,
    OBJ_KANONENHALTERUNG=338,
    OBJ_GITTERSTANGEN_FENSTER=339,
    OBJ_DOLCH=340,
    OBJ_SILBERRING=341,
    OBJ_RAPIER=342,
    OBJ_SILBERKETTE=343,
    OBJ_GROSSSCHWERT=344,
    OBJ_GOLDKETTE=345,
    OBJ_GUERTEL_DER_METAPHYSIK=346,
    OBJ_GEHSTOCK=347,
    OBJ_SCHUTZKREUZ=348,
    OBJ_KAMM=349,
    OBJ_PISTOLE=350,
    OBJ_STAB_DES_EDELMANNS=351,
    OBJ_ARMBRUST=352,
    OBJ_SCHLEIFSTEIN=353,
    OBJ_STEINKREISEL=354,
    OBJ_STEINSOLDAT=355,
    OBJ_SCHIEFERTAFEL=356,
    OBJ_DIAMANT=357,
    OBJ_GLUECKSSTEIN=358,
    OBJ_GEDICHT=359,
    OBJ_UEBER_TALENTE_I=360,
    OBJ_HASSTIRADE=361,
    OBJ_BRIEF_AUS_ROM=362,
    OBJ_LAGERPLAN=363,
    OBJ_UEBER_TALENTE_II=364,
    OBJ_BLUME_DER_ZWIETRACHT=365,
    OBJ_GIFTDOLCH=366,
    OBJ_DARTAGNANS_DUFT=367,
    OBJ_MOSCHUSDUFT=368,
    OBJ_HEILGENDUFT=369,
    OBJ_SCHATTENDOLCH=370,
    OBJ_AUSDAUERTRANK=371,
    OBJ_BOMBE=372,
    OBJ_LEBENSELEXIR=373,
    OBJ_TOPFGRANATE=374,
    OBJ_KROETENSCHLEIM=375,
    OBJ_UNKENDUNK=376,
    OBJ_KOERNERMAHZEIT=377,
    OBJ_DUENNBIER=378,
    OBJ_STARKBIER=379,
    OBJ_FAHNENBRAEU_PILSENER=380,
    OBJ_SCHAEDELBRAND=381,
    OBJ_KRAEUTERSCHNAPPS=382,
    OBJ_VERHANDELN_MUENZE=383,
    OBJ_VERHANDELN_MUENZSTAPEL=384,
    OBJ_VERHANDELN_LEDERBEUTEL=385,
    OBJ_VERHANDELN_DICKER_LEDERBEUTEL=386,
    OBJ_VERHANDELN_EINFACHE_SCHATULLE=387,
    OBJ_VERHANDELN_EDELSTEIN_SCHATULLE=388,
    OBJ_HANDWERK_EINFACHER_HAMMER=389,
    OBJ_HANDWERK_HOLZLINEAL=390,
    OBJ_HANDWERK_LOT=391,
    OBJ_HANDWERK_SCHOENE_WAAGE=392,
    OBJ_HANDWERK_EDLE_BAUSKIZZE=393,
    OBJ_HANDWERK_VERZIERTER_ZIRKEL=394,
    OBJ_BNUN_SONNENSCHEIN=395,
    OBJ_BNUN_NACHMITTAG=396,
    OBJ_BNUN_DAEMMERUNG=397,
    OBJ_BNUN_REGEN_DAEMMERUNG=398,
    OBJ_BNUN_NACHT=399,
    OBJ_BNUN_GEWITTER_NACHT=400,
    OBJ_KAMPF_ROSTIGES_MESSER=401,
    OBJ_KAMPF_DOLCH=402,
    OBJ_KAMPF_VERZIERTER_DOLCH=403,
    OBJ_KAMPF_EINFACHES_SCHWERT=404,
    OBJ_KAMPF_VERZIERTER_RAPIER=405,
    OBJ_KAMPF_RAPIER_EDELSTEIN=406,
    OBJ_RHETORIK_NIEMAND=407,
    OBJ_RHETORIK_EIN=408,
    OBJ_RHETORIK_DREI=409,
    OBJ_RHETORIK_EINIGE=410,
    OBJ_RHETORIK_VIELE=411,
    OBJ_RHETORIK_MASSEN=412,
    OBJ_TALENTBUCH_VERHANDELN_1=413,
    OBJ_TALENTBUCH_VERHANDELN_2=414,
    OBJ_TALENTBUCH_VERHANDELN_3=415,
    OBJ_TALENTBUCH_HANDWERK_1=416,
    OBJ_TALENTBUCH_HANDWERK_2=417,
    OBJ_TALENTBUCH_HANDWERK_3=418,
    OBJ_TALENTBUCH_BNUN_1=419,
    OBJ_TALENTBUCH_BNUN_2=420,
    OBJ_TALENTBUCH_BNUN_3=421,
    OBJ_TALENTBUCH_KAMPF_1=422,
    OBJ_TALENTBUCH_KAMPF_2=423,
    OBJ_TALENTBUCH_KAMPF_3=424,
    OBJ_TALENTBUCH_RHETORIK_1=425,
    OBJ_TALENTBUCH_RHETORIK_2=426,
    OBJ_TALENTBUCH_RHETORIK_3=427,
    OBJ_AMTSTRAEGER=428,
    OBJ_RAT=429,
    OBJ_GESETZ_AENDERN=430,
    OBJ_MITGLIED_ANKLAGEN=431,
    OBJ_MITGLIED_ABSETZEN=432,
    OBJ_AMT_NIEDERLEGEN=433,
    OBJ_AUSSCHUETTUNG_VORNEHMEN=434,
    OBJ_FREIES_AMT=435,
    OBJ_BEWERBUNG_AMT=436,
    OBJ_THEMA_PREDIGT=437,
    OBJ_MANUSKRIPT=438,
    OBJ_KIEFER=439,
    OBJ_BUCHE=440,
    OBJ_EICHE=441,
    OBJ_LEHM=442,
    OBJ_GRANIT_ROH=443,
    OBJ_SCHIEFER_ROH=444,
    OBJ_EISENERZ_ROH=445,
    OBJ_SILBERERZ_ROH=446,
    OBJ_GOLDERZ_ROH=447,
    OBJ_EDELSTEINE_ROH=448,
    OBJ_KROETENAUGE=449,
    OBJ_FLEDERMAUSBLUT=450,
    OBJ_SPINNENBEIN=451,
    OBJ_LAVENDEL=452,
    OBJ_JASMIN=453,
    OBJ_ROSE=454,
    OBJ_MOSCHUS=455,
    OBJ_GERSTE=456,
    OBJ_ROGGEN=457,
    OBJ_KIEFERNBRETT=458,
    OBJ_BUCHENBRETT=459,
    OBJ_EICHENBRETT=460,
    OBJ_ZIEGEL=461,
    OBJ_GRANIT=462,
    OBJ_SCHIEFER=463,
    OBJ_EISEN=464,
    OBJ_SILBER=465,
    OBJ_GOLD=466,
    OBJ_EDELSTEIN=467,
    OBJ_BESCHLAG=468,
    OBJ_ZAPFEN=469,
    OBJ_SCHLEIFPAPIER=470,
    OBJ_POLITUR=471,
    OBJ_FARBE=472,
    OBJ_WEINGEIST=473,
    OBJ_PAPIER=474,
    OBJ_IMPORTLAGER=475,
    OBJ_EXPORTLAGER=476,
    OBJ_LAGERFLAECHE_TRANSPORT=477,
    OBJ_STOLPERSEIL=478,
    OBJ_FENSTERLAEDEN=479,
    OBJ_DORNENHECKE=480,
    OBJ_ROSENSTRAUCH=481,
    OBJ_FALLGRUBE=482,
    OBJ_ROSTNAEGEL=483,
    OBJ_TUERRIEGEL=484,
    OBJ_VERGISSMICH_KRAUT=485,
    OBJ_DUFT_DER_WEITEN_WELT=486,
    OBJ_HELLEBARDE_UND_SCHEMEL=487,
    OBJ_HOLZSPLITTER=488,
    OBJ_INSTABILE_STEINHAUFEN=489,
    OBJ_SCHARFE_EISENTEILE=490,
    OBJ_KNOBLAUCHZEHEN=491,
    OBJ_GIFTSTRAUCH=492,
    OBJ_WACHHUND=493,
    OBJ_SCHWARZE_KATZE=494,
    OBJ_WACHHUNDTRAINING=495,
    OBJ_KATZENDRESSUR=496,
    OBJ_FINGER_DES_HERRN=497,
    OBJ_HANDWERKSSCHILD_FRIEDHOF=498,
    OBJ_GRAEBERFELD=499,
    OBJ_STEINKREIS=500,
    OBJ_LIEGEPLAN=501,
    OBJ_GRABHUEGEL=502,
    OBJ_FRIEDHOFSHECKEN=503,
    OBJ_KOMPOSTHAUFEN=504,
    OBJ_GRAEBER_KLEIN=505,
    OBJ_FRIEDHOFSTOR=506,
    OBJ_ENGELSSTATUE=507,
    OBJ_GARGOYLENKOPF=508,
    OBJ_GRAEBER_MITTEL=509,
    OBJ_FRIEDHOFSSTATUEN=510,
    OBJ_STEINKREIS_DRUDENFUSS=511,
    OBJ_KNORRIGER_BAUM=512,
    OBJ_GRUFT=513,
    OBJ_FRIEDHOFSBANK=514,
    OBJ_GEHILFENKONTROLLE=515,
    OBJ_RUINEN=516,
    OBJ_FRIEDHOFSKAPELLE=517,
    OBJ_FRIEDHOFSSCHAUFEL_UND_EIMER=518,
    OBJ_KNOCHENHAMMER=519,
    OBJ_SANDUHR=520,
    OBJ_SEZIERMESSER=521,
    OBJ_URNEN=522,
    OBJ_OPFERSTEIN=523,
    OBJ_IKONENSCHREIN=524,
    OBJ_KAPELLENALTAR=525,
    OBJ_ABGEHAENGTES_KREUZ=526,
    OBJ_SANDRELIEF=527,
    OBJ_FRIEDHOFSLEUCHTER=528,
    OBJ_NEKROMANTENTURM=529,
    OBJ_EXPERIMENTIERTISCH=530,
    OBJ_LEDERGURTE=531,
    OBJ_BILDNIS_DES_LEBENS=532,
    OBJ_GEWITTER_FOKUSSIERER=533,
    OBJ_BALSAMIERKIT=534,
    OBJ_LIEBESGESTIRNE=535,
    OBJ_OKULAR=536,
    OBJ_BLUME_IN_STEINMUND=537,
    OBJ_RABENFIGURINE=538,
    OBJ_KRYPTA=539,
    OBJ_SEANCEKREIS=540,
    OBJ_KOHLEBECKEN=541,
    OBJ_URNENREGAL=542,
    OBJ_SCHUTZZEICHEN=543,
    OBJ_SPINNENNETZ=544,
    OBJ_VERSTEINERTER_GEHILFE=545,
    OBJ_MECHANISCHER_GEIST=546,
    OBJ_BILDNIS_DES_VATERS=547,
    OBJ_GEHEIMES_GRAB=548,
    OBJ_KNOCHEN=549,
    OBJ_SCHAEDEL=550,
    OBJ_LEICHENHEMD=551,
    OBJ_ECTOPLASMA=552,
    OBJ_KNOCHENARMREIF=553,
    OBJ_SCHAEDELKERZE=554,
    OBJ_HEXERDOKUMENT_I=555,
    OBJ_DUNKLER_VERFALL=556,
    OBJ_HEXERDOKUMENT_II=557,
    OBJ_NEKROMANTENROBE=558,
    OBJ_STALLUNGEN=559,
    OBJ_EISENTUEREN=560,
    OBJ_SPIESSE=561,
    OBJ_REGENTONNE=562,
    OBJ_WACHHAUS=563,
    OBJ_EISENBAENDER=564,
    OBJ_HOFBRUNNEN=565,
    OBJ_SCHLOSSFALLEN=566,
    OBJ_FUNDAMENTVERSTAERKUNG=567,
    OBJ_ZISTERNE=568,
    OBJ_WEHRGANG=569,
    OBJ_MAUERVORBAUTEN=570,
    OBJ_SCHAUFELAUFZUG=571,
    OBJ_KONTOR=572,
    OBJ_KAMINSTELLE=573,
    OBJ_JOURNAL=574,
    OBJ_DER_KNOGGE=575,
    OBJ_STEINGEWICHTE_AM_BAND=576,
    OBJ_WANNENBAD=577,
    OBJ_ERFOLGSCHART=578,
    OBJ_WAPPENSAMMLUNG=579,
    OBJ_EISENGEWICHTESTANGE=580,
    OBJ_WANNENVORLEGER=581,
    OBJ_SCHIFFSMODELL_AUS_VENEDIG=582,
    OBJ_KAMPFMASCHINE=583,
    OBJ_WANDTEPPICHE=584,
    OBJ_INTRIGENABWEHR_I_BIS_IV=585,
    OBJ_DUFTOELZULEITUNG=586,
    OBJ_ALCHIMISTENKAMMER=587,
    OBJ_ALCHIMISTENVERTRAG=588,
    OBJ_OHRENSESSEL=589,
    OBJ_SCHUTZBRILLE=590,
    OBJ_SCHMUSEKATZE=591,
    OBJ_FUSSBANK=592,
    OBJ_VENTILKONSTRUKTION=593,
    OBJ_SUESSWERKKISTE=594,
    OBJ_WASSERPFEIFE=595,
    OBJ_RAUCHABZUG=596,
    OBJ_ZUBERSPUELUNG=597,
    OBJ_KANONENTURM=598,
    OBJ_STEINKUGEL=599,
    OBJ_EINFACHE_KANONE=600,
    OBJ_SCHWARZPULVERLADUNG=601,
    OBJ_EISENKUGEL=602,
    OBJ_LANGES_ROHR=603,
    OBJ_KIMME_UND_KORN=604,
    OBJ_KANLLGASBEHAELTER=605,
    OBJ_SCHRAPPNELL=606,
    OBJ_GEZOGENER_LAUF=607,
    OBJ_FADENKREUZ=608,
    OBJ_MELONITLADUNG=609,
    OBJ_HUNDERT_PFUENDER=610,
    OBJ_DOPPELKANONE=611,
    OBJ_KARTAESCHE=612,
    OBJ_DREIFACHKANONE=613,
    OBJ_GEHEIMKABINETT=614,
    OBJ_TANZBAERENKAEFIG=615,
    OBJ_WEINVORRAT=616,
    OBJ_LEIER=617,
    OBJ_TANZBAER=618,
    OBJ_SCHLINGENFALLE=619,
    OBJ_LAGERFEUER_DER_ZIGEUNER=620,
    OBJ_GEDICHTLESUNG_TRIBUENE=621,
    OBJ_HUNDEZWINGER=622,
    OBJ_INNEREIENFASS=623,
    OBJ_HOCHSEIL=624,
    OBJ_TRAUMFAENGER=625,
    OBJ_NETZFALLE=626,
    OBJ_BALDACHIN=627,
    OBJ_STEIN_DER_STRAFE=628,
    OBJ_FRATZENGESICHTER=629,
    OBJ_AELTESTENWAGEN=630,
    OBJ_ZIGEUNERSCHATULLE=631,
    OBJ_SIPPENTEPPICH=632,
    OBJ_BLUTDOLCH=633,
    OBJ_SIPPENBILDNIS=634,
    OBJ_SIPPENCHRONIK=635,
    OBJ_AELTESTENHAUT=636,
    OBJ_GLASAUGE_AUF_PODEST=637,
    OBJ_SPUCKNAPF=638,
    OBJ_ZIRKUSZELT=639,
    OBJ_ZELTBUEHNE=640,
    OBJ_SCHMINKTOEPFE=641,
    OBJ_POKERTISCH=642,
    OBJ_JONGLIERBAELLE=643,
    OBJ_MANUSKRIPTSAMMLUNG=644,
    OBJ_ZIGEUNER_SCHEMEL=645,
    OBJ_TASCHENSPIELERKASTEN=646,
    OBJ_KOSTUEMFUNDUS=647,
    OBJ_LIEGEKISSEN=648,
    OBJ_BUECHERSTAPEL=649,
    OBJ_WAHRSAGERWAGEN=650,
    OBJ_FEUERSTELLE=651,
    OBJ_AUSGESTOPFTER_BAER=652,
    OBJ_GLASKUGEL=653,
    OBJ_FAULIGES_GEBISS=654,
    OBJ_STERNENKARTE=655,
    OBJ_KRISTALLKUGEL=656,
    OBJ_KNOCHENFEUER=657,
    OBJ_GIFTDOLCHSAMMLUNG=658,
    OBJ_WEIDENHOLZ=659,
    OBJ_HASE=660,
    OBJ_VOGELBEERE=661,
    OBJ_LEDER=662,
    OBJ_FLOETE=663,
    OBJ_WEIDENRUTE=664,
    OBJ_HYPNOSEPENDEL=665,
    OBJ_DORNROESCHENSPINDEL=666,
    OBJ_KRISTALLKUGEL_OBJEKT=667,
    OBJ_VOODOOPUPPE=668,
    OBJ_SCHILD_SCHNEIDER=669,
    OBJ_SCHNEIDEREI_ARBEITSRAUM=670,
    OBJ_KLEIDERSCHRANK=671,
    OBJ_SICHEL=672,
    OBJ_SCHNITTMUSTERKATALOG=673,
    OBJ_FINGERHUT=674,
    OBJ_SITZECKE=675,
    OBJ_ZUTATENREGAL=676,
    OBJ_WALKTROMMEL=677,
    OBJ_NADELKISSEN=678,
    OBJ_UMKLEIDEKABINE=679,
    OBJ_WEBSTUHL=680,
    OBJ_NAEHMASCHINE=681,
    OBJ_CATWALK=682,
    OBJ_ANZIEHPUPPE=683,
    OBJ_WEINREGAL_SCHNEIDER=684,
    OBJ_SPIEGEL=685,
    OBJ_WOLLE=686,
    OBJ_FLACHS=687,
    OBJ_PFLANZENFARBSTOFF=688,
    OBJ_TUCH=689,
    OBJ_WARME_SOCKEN=690,
    OBJ_WOLLUMHANG=691,
    OBJ_LEDERWAMS=692,
    OBJ_WAFFENROCK=693,
    OBJ_GOLDGEWIRKTE_SCHAERPE=694,
    OBJ_ZAUBERHUT=695,
    OBJ_TRAUMGIFT=696,
    OBJ_WAFFENGIFT=697,
    OBJ_TRUNK_DER_ARBEITSFREUDE=698,
    OBJ_BRODEM_DER_VERGESSLICHKEIT=699,
    OBJ_BRODEM_DER_BERSERKERWUT=700,
    OBJ_BRODEM_DER_FAEULNIS=701,
    OBJ_DUFT_DER_WILLFAEHRIGKEIT=702,
    OBJ_DUFT_DER_BLINDEN_EIFERSUCHT=703,
    OBJ_DUFT_DER_MANIPULATION=704,
    OBJ_SCHLAFTRUNK=705,
    OBJ_LAEHMUNGSGIFT=706,
    OBJ_ANGSTGIFT=707,
    OBJ_ANTIDOT=708,
    OBJ_MAGISCHE_TINTE=709,
    OBJ_TRUNK_DES_7_SINNS=710,
    OBJ_HOLZSPLITTER_VOM_KREUZ_JESU=711,
    OBJ_SIEBENMEILENSTIEFEL=712,
    OBJ_RING_DER_NIBELUNGEN=713,
    OBJ_SCHWURDOLCH_HERZOG_WIDUKINDS=714,
    OBJ_SPEER_DES_HAGEN_VON_TRONJE=715,
    OBJ_SIEGEL_DER_TEMPELHERREN=716,
    OBJ_BUCH_DER_WEISHEITEN=717,
    OBJ_EISENHANDSCHUH_DES_SHERIFFS=718,
    OBJ_KRISTALLKUGEL_DER_HELLSICHT=719,
    OBJ_KRIEGSBANNER_KARLS_DES_GROSSEN=720,
    OBJ_DUELLPISTOLE_DES_HL_ZURRIO=721,
    OBJ_AMULET_DER_INTUITION=722,
    OBJ_CHARISMA_AMULET=723,
    OBJ_BALMUNG_SIEGFRIEDS_SCHWERT=724,
    OBJ_RECHENSCHIEBER_VON_JACOB_FUGGER=725,
    OBJ_TARNKAPPE_DER_NIBELUNGEN=726,
    OBJ_REISSBRETT_DES_LEONARDO_DA_VINCI=727,
    OBJ_AMULET_DES_GLUECKS=728,
    OBJ_ROBE_DES_LEONARDO_DA_VINCI=729,
    OBJ_STERN_VON_BETHLEHEM=730,
    OBJ_MARKTSTAND_OKKULT=731
} OBJECT_PROTOTYPE;

struct AhmInfo { /* Whatever it is */
    int character_id;
    float some_float;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    enum OBJECT_PROTOTYPE object_prot_index;
    undefined field7_0xe;
    undefined field8_0xf;
    undefined field9_0x10;
    undefined field10_0x11;
    undefined field11_0x12;
    undefined field12_0x13;
    undefined field13_0x14;
    undefined field14_0x15;
    undefined field15_0x16;
    undefined field16_0x17;
    undefined field17_0x18;
    undefined field18_0x19;
    undefined field19_0x1a;
    undefined field20_0x1b;
    undefined field21_0x1c;
    undefined field22_0x1d;
    undefined field23_0x1e;
    undefined field24_0x1f;
    undefined field25_0x20;
    undefined field26_0x21;
    undefined field27_0x22;
    undefined field28_0x23;
    undefined field29_0x24;
    undefined field30_0x25;
    undefined field31_0x26;
    undefined field32_0x27;
    undefined field33_0x28;
    undefined field34_0x29;
    undefined field35_0x2a;
    undefined field36_0x2b;
    undefined field37_0x2c;
    undefined field38_0x2d;
    undefined field39_0x2e;
    undefined field40_0x2f;
    undefined field41_0x30;
    undefined field42_0x31;
    undefined field43_0x32;
    undefined field44_0x33;
    undefined field45_0x34;
    undefined field46_0x35;
    undefined field47_0x36;
    undefined field48_0x37;
    undefined field49_0x38;
    undefined field50_0x39;
    undefined field51_0x3a;
    undefined field52_0x3b;
};

typedef enum Animal {
    DOG=0,
    CAT=1,
    ANIMAL_UNKNOWN_2=2,
    COW=3,
    SHEEP=4,
    ANIMAL_UNKNOWN_5=5,
    PIG=6,
    HORSE=7
} Animal;

typedef struct BuildingInstance BuildingInstance, *PBuildingInstance;

typedef enum BUILDING_PROTOTYPE:char {
    GEB_NULL=0,
    GEB_ARBEITERUNTERKUNFT=1,
    GEB_ARBEITERUNTERKUNFT_MITTEL=2,
    GEB_ARBEITERUNTERKUNFT_GROSS=3,
    GEB_HAUS=4,
    GEB_BUERGERHAUS=5,
    GEB_VILLA=6,
    GEB_PALAZZO=7,
    GEB_SCHOEPFSTELLE=8,
    GEB_BRUNNEN=9,
    GEB_HEBEBRUNNEN=10,
    GEB_SCHMUGGLERLOCH=11,
    GEB_UNTERSCHLUPF=12,
    GEB_DIEBESGILDE=13,
    GEB_WECHSELSTUBE=14,
    GEB_GELDLEIHE=15,
    GEB_BANKHAUS=16,
    GEB_GEFAENGNIS=17,
    GEB_SCHULDTURM=18,
    GEB_KERKER=19,
    GEB_KIRCHE=20,
    GEB_DOM=21,
    GEB_KATHEDRALE=22,
    GEB_TINKTUREI=23,
    GEB_KRAEUTERLADEN=24,
    GEB_ALCHIMISTENSTUBE=25,
    GEB_LAGERSCHUPPEN=26,
    GEB_LAGERHAUS=27,
    GEB_LAGERHALLE=28,
    GEB_MARKTPLATZ=29,
    GEB_WALDSTUECK=30,
    GEB_STEINBRUCH=31,
    GEB_MINE=32,
    GEB_SIEDEREI=33,
    GEB_DUFTWERKSTATT=34,
    GEB_PARFUMERIE=35,
    GEB_VERWALTUNGSHAUS=36,
    GEB_RATSSITZ=37,
    GEB_RATHAUS=38,
    GEB_RAUBRITTERFESTE=39,
    GEB_GALGENBERG=40,
    GEB_GIESSEREI=41,
    GEB_SCHMIEDE=42,
    GEB_GOLDSCHMIEDE=43,
    GEB_STADTWACHE_KLEIN=44,
    GEB_STADTWACHE_MITTEL=45,
    GEB_STADTWACHE_GROSS=46,
    GEB_MAUREREI=47,
    GEB_STEINSCHNEIDEREI=48,
    GEB_STEINMETZHUETTE=49,
    GEB_TISCHLEREI=50,
    GEB_DRECHSLEREI=51,
    GEB_SAEGEWERK=52,
    GEB_SCHAENKE=53,
    GEB_WIRTSHAUS=54,
    GEB_GASTHAUS=55,
    GEB_HANDWERKSHAUS_PARFUMEURE=56,
    GEB_ZUNFTHAUS_PARFUMEURE=57,
    GEB_GILDENSITZ_PARFUMEURE=58,
    GEB_HANDWERKSHAUS_SCHMIEDE=59,
    GEB_ZUNFTHAUS_SCHMIEDE=60,
    GEB_GILDENSITZ_SCHMIEDE=61,
    GEB_HANDWERKSHAUS_STEINMETZ=62,
    GEB_ZUNFTHAUS_STEINMETZ=63,
    GEB_GILDENSITZ_STEINMETZ=64,
    GEB_HANDWERKSHAUS_TISCHLER=65,
    GEB_ZUNFTHAUS_TISCHLER=66,
    GEB_GILDENSITZ_TISCHLER=67,
    GEB_TRANSPORT_STADT=68,
    GEB_TRANSPORT_UMLAND=69,
    GEB_TRANSPORT_FERN=70,
    GEB_KONTOR=71,
    GEB_TOTENFELD=72,
    GEB_GOTTESACKER=73,
    GEB_FRIEDHOF=74,
    GEB_DOMIZIL=75,
    GEB_BURG=76,
    GEB_SCHLOSS=77,
    GEB_VAGABUNDENLAGER=78,
    GEB_ZIGEUNERLAGER=79,
    GEB_LAGER_DER_FAHRENSLEUTE=80,
    GEB_NAEHSTUBE=81,
    GEB_SCHNEIDEREI=82,
    GEB_GEWANDSCHNEIDEREI=83,
    GEB_STATUE_KLEIN=84,
    GEB_STATUE_MITTEL=85,
    GEB_STATUE_GROSS=86,
    GEB_MARKTFLECK=87
} BUILDING_PROTOTYPE;

typedef struct LinkedList LinkedList, *PLinkedList;

typedef struct SomethingAboutBuilding SomethingAboutBuilding, *PSomethingAboutBuilding;

typedef struct UnknownLinkedList64 UnknownLinkedList64, *PUnknownLinkedList64;

typedef struct Character_580 Character_580, *PCharacter_580;

typedef struct ObjectAnimation ObjectAnimation, *PObjectAnimation;

typedef struct LightInfo LightInfo, *PLightInfo;

typedef struct ObjectDrawData ObjectDrawData, *PObjectDrawData;

typedef struct QueueEntry QueueEntry, *PQueueEntry;

typedef struct ObjectAnimationFrameData ObjectAnimationFrameData, *PObjectAnimationFrameData;

struct UnknownLinkedList64 {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    struct UnknownLinkedList64 * next;
};

struct BuildingInstance {
    enum BUILDING_PROTOTYPE building_prot_index;
    int object_id;
    char building_name[32]; /* Created by retype action */
    ushort character_index_1;
    short character_index_2; /* Maybe a mistake */
    enum OBJECT_PROTOTYPE current_room_prot_index;
    undefined4 field6_0x2b;
    undefined field7_0x2f;
    undefined4 field8_0x30;
    undefined field9_0x34;
    undefined field10_0x35;
    undefined field11_0x36;
    undefined field12_0x37;
    undefined field13_0x38;
    undefined4 field14_0x39;
    undefined4 field15_0x3d;
    undefined4 field16_0x41;
    undefined4 field17_0x45;
    float field18_0x49;
    undefined field19_0x4d;
    undefined field20_0x4e;
    undefined field21_0x4f;
    undefined field22_0x50;
    undefined field23_0x51;
    undefined field24_0x52;
    undefined field25_0x53;
    undefined field26_0x54;
    undefined field27_0x55;
    undefined field28_0x56;
    undefined field29_0x57;
    undefined field30_0x58;
    undefined field31_0x59;
    undefined field32_0x5a;
    undefined field33_0x5b;
    undefined field34_0x5c;
    struct LinkedList * building_content;
    struct SomethingAboutBuilding * building_something;
    undefined * additional_ptr_of_different_size; /* AhmInfo or Graveyard stuff or ... */
    undefined4 field38_0x69; /* Maybe 2 fields by 2 bytes */
    undefined4 field39_0x6d;
    undefined * f3g_PlantMap_ptr;
    undefined2 field41_0x75;
    undefined field42_0x77;
    undefined field43_0x78;
    undefined field44_0x79;
    undefined field45_0x7a;
    undefined field46_0x7b;
    undefined field47_0x7c;
    undefined field48_0x7d;
    undefined field49_0x7e;
    undefined field50_0x7f;
    undefined field51_0x80;
    undefined field52_0x81;
    undefined field53_0x82;
    undefined field54_0x83;
    undefined field55_0x84;
    undefined field56_0x85;
    undefined field57_0x86;
    undefined field58_0x87;
    undefined field59_0x88;
    undefined field60_0x89;
    undefined field61_0x8a;
    undefined field62_0x8b;
    undefined field63_0x8c;
    undefined field64_0x8d;
    undefined field65_0x8e;
    undefined field66_0x8f;
    undefined field67_0x90;
    undefined field68_0x91;
    undefined field69_0x92;
    undefined field70_0x93;
    undefined field71_0x94;
    int script_id_or_index;
    undefined field73_0x99;
    undefined field74_0x9a;
    undefined field75_0x9b;
    undefined field76_0x9c;
    undefined4 field77_0x9d;
    undefined4 field78_0xa1;
    undefined4 field79_0xa5;
};

struct Character_580 {
    undefined4 field0_0x0;
    undefined4 field1_0x4;
    char name[32];
    int field3_0x28;
    int field4_0x2c;
    int field5_0x30;
    struct SomethingAboutBuilding * ptr_0;
    undefined field7_0x38;
    undefined field8_0x39;
    undefined field9_0x3a;
    undefined field10_0x3b;
    undefined field11_0x3c;
    undefined field12_0x3d;
    undefined field13_0x3e;
    undefined field14_0x3f;
    undefined field15_0x40;
    undefined field16_0x41;
    undefined field17_0x42;
    undefined field18_0x43;
    undefined field19_0x44;
    undefined field20_0x45;
    undefined field21_0x46;
    undefined field22_0x47;
    undefined field23_0x48;
    undefined field24_0x49;
    undefined field25_0x4a;
    undefined field26_0x4b;
    undefined field27_0x4c;
    undefined field28_0x4d;
    undefined field29_0x4e;
    undefined field30_0x4f;
    undefined field31_0x50;
    undefined field32_0x51;
    undefined field33_0x52;
    undefined field34_0x53;
    float three_floats[3];
    undefined field36_0x60;
    undefined field37_0x61;
    undefined field38_0x62;
    undefined field39_0x63;
    undefined field40_0x64;
    undefined field41_0x65;
    undefined field42_0x66;
    undefined field43_0x67;
    undefined field44_0x68;
    undefined field45_0x69;
    undefined field46_0x6a;
    undefined field47_0x6b;
    undefined field48_0x6c;
    undefined field49_0x6d;
    undefined field50_0x6e;
    undefined field51_0x6f;
    undefined field52_0x70;
    undefined field53_0x71;
    undefined field54_0x72;
    undefined field55_0x73;
    undefined field56_0x74;
    undefined field57_0x75;
    undefined field58_0x76;
    undefined field59_0x77;
    undefined field60_0x78;
    undefined field61_0x79;
    undefined field62_0x7a;
    undefined field63_0x7b;
    undefined field64_0x7c;
    undefined field65_0x7d;
    undefined field66_0x7e;
    undefined field67_0x7f;
    undefined field68_0x80;
    undefined field69_0x81;
    undefined field70_0x82;
    undefined field71_0x83;
    undefined field72_0x84;
    undefined field73_0x85;
    undefined field74_0x86;
    undefined field75_0x87;
    struct SomethingAboutBuilding * ptr_1;
    undefined field77_0x8c;
    undefined field78_0x8d;
    undefined field79_0x8e;
    undefined field80_0x8f;
    undefined field81_0x90;
    undefined field82_0x91;
    undefined field83_0x92;
    undefined field84_0x93;
    undefined field85_0x94;
    undefined field86_0x95;
    undefined field87_0x96;
    undefined field88_0x97;
    undefined field89_0x98;
    undefined field90_0x99;
    undefined field91_0x9a;
    undefined field92_0x9b;
    undefined field93_0x9c;
    undefined field94_0x9d;
    undefined field95_0x9e;
    undefined field96_0x9f;
    undefined field97_0xa0;
    undefined field98_0xa1;
    undefined field99_0xa2;
    undefined field100_0xa3;
    undefined field101_0xa4;
    undefined field102_0xa5;
    undefined field103_0xa6;
    undefined field104_0xa7;
    undefined field105_0xa8;
    undefined field106_0xa9;
    undefined field107_0xaa;
    undefined field108_0xab;
    undefined field109_0xac;
    undefined field110_0xad;
    undefined field111_0xae;
    undefined field112_0xaf;
    undefined field113_0xb0;
    undefined field114_0xb1;
    undefined field115_0xb2;
    undefined field116_0xb3;
    undefined field117_0xb4;
    undefined field118_0xb5;
    undefined field119_0xb6;
    undefined field120_0xb7;
    undefined field121_0xb8;
    undefined field122_0xb9;
    undefined field123_0xba;
    undefined field124_0xbb;
    undefined field125_0xbc;
    undefined field126_0xbd;
    undefined field127_0xbe;
    undefined field128_0xbf;
    undefined field129_0xc0;
    undefined field130_0xc1;
    undefined field131_0xc2;
    undefined field132_0xc3;
    undefined field133_0xc4;
    undefined field134_0xc5;
    undefined field135_0xc6;
    undefined field136_0xc7;
    undefined field137_0xc8;
    undefined field138_0xc9;
    undefined field139_0xca;
    undefined field140_0xcb;
    undefined field141_0xcc;
    undefined field142_0xcd;
    undefined field143_0xce;
    undefined field144_0xcf;
    undefined field145_0xd0;
    undefined field146_0xd1;
    undefined field147_0xd2;
    undefined field148_0xd3;
    undefined field149_0xd4;
    undefined field150_0xd5;
    undefined field151_0xd6;
    undefined field152_0xd7;
    undefined field153_0xd8;
    undefined field154_0xd9;
    undefined field155_0xda;
    undefined field156_0xdb;
    undefined field157_0xdc;
    undefined field158_0xdd;
    undefined field159_0xde;
    undefined field160_0xdf;
    undefined field161_0xe0;
    undefined field162_0xe1;
    undefined field163_0xe2;
    undefined field164_0xe3;
    undefined field165_0xe4;
    undefined field166_0xe5;
    undefined field167_0xe6;
    undefined field168_0xe7;
    undefined field169_0xe8;
    undefined field170_0xe9;
    undefined field171_0xea;
    undefined field172_0xeb;
    undefined field173_0xec;
    undefined field174_0xed;
    undefined field175_0xee;
    undefined field176_0xef;
    undefined field177_0xf0;
    undefined field178_0xf1;
    undefined field179_0xf2;
    undefined field180_0xf3;
    undefined field181_0xf4;
    undefined field182_0xf5;
    undefined field183_0xf6;
    undefined field184_0xf7;
    undefined field185_0xf8;
    undefined field186_0xf9;
    undefined field187_0xfa;
    undefined field188_0xfb;
    undefined field189_0xfc;
    undefined field190_0xfd;
    undefined field191_0xfe;
    undefined field192_0xff;
    undefined field193_0x100;
    undefined field194_0x101;
    undefined field195_0x102;
    undefined field196_0x103;
    undefined field197_0x104;
    undefined field198_0x105;
    undefined field199_0x106;
    undefined field200_0x107;
    undefined field201_0x108;
    undefined field202_0x109;
    undefined field203_0x10a;
    undefined field204_0x10b;
    undefined field205_0x10c;
    undefined field206_0x10d;
    undefined field207_0x10e;
    undefined field208_0x10f;
    undefined field209_0x110;
    undefined field210_0x111;
    undefined field211_0x112;
    undefined field212_0x113;
    undefined field213_0x114;
    undefined field214_0x115;
    undefined field215_0x116;
    undefined field216_0x117;
    undefined field217_0x118;
    undefined field218_0x119;
    undefined field219_0x11a;
    undefined field220_0x11b;
    undefined field221_0x11c;
    undefined field222_0x11d;
    undefined field223_0x11e;
    undefined field224_0x11f;
    undefined field225_0x120;
    undefined field226_0x121;
    undefined field227_0x122;
    undefined field228_0x123;
    struct SomethingAboutBuilding * * ptr_2;
    struct QueueEntry * queue_entry_ptr;
    undefined * instance_of_any_type_ptr;
    undefined field232_0x130;
    undefined field233_0x131;
    undefined field234_0x132;
    undefined field235_0x133;
    undefined field236_0x134;
    undefined field237_0x135;
    undefined field238_0x136;
    undefined field239_0x137;
    undefined field240_0x138;
    undefined field241_0x139;
    undefined field242_0x13a;
    undefined field243_0x13b;
    undefined field244_0x13c;
    undefined field245_0x13d;
    undefined field246_0x13e;
    undefined field247_0x13f;
    undefined field248_0x140;
    undefined field249_0x141;
    undefined field250_0x142;
    undefined field251_0x143;
    undefined field252_0x144;
    undefined field253_0x145;
    undefined field254_0x146;
    undefined field255_0x147;
    undefined field256_0x148;
    undefined field257_0x149;
    undefined field258_0x14a;
    undefined field259_0x14b;
    undefined field260_0x14c;
    undefined field261_0x14d;
    undefined field262_0x14e;
    undefined field263_0x14f;
    undefined field264_0x150;
    undefined field265_0x151;
    undefined field266_0x152;
    undefined field267_0x153;
    undefined field268_0x154;
    undefined field269_0x155;
    undefined field270_0x156;
    undefined field271_0x157;
    undefined field272_0x158;
    undefined field273_0x159;
    undefined field274_0x15a;
    undefined field275_0x15b;
    undefined field276_0x15c;
    undefined field277_0x15d;
    undefined field278_0x15e;
    undefined field279_0x15f;
    undefined field280_0x160;
    undefined field281_0x161;
    undefined field282_0x162;
    undefined field283_0x163;
    undefined field284_0x164;
    undefined field285_0x165;
    undefined field286_0x166;
    undefined field287_0x167;
    undefined field288_0x168;
    undefined field289_0x169;
    undefined field290_0x16a;
    undefined field291_0x16b;
    undefined field292_0x16c;
    undefined field293_0x16d;
    undefined field294_0x16e;
    undefined field295_0x16f;
    undefined field296_0x170;
    undefined field297_0x171;
    undefined field298_0x172;
    undefined field299_0x173;
    undefined field300_0x174;
    undefined field301_0x175;
    undefined field302_0x176;
    undefined field303_0x177;
    undefined field304_0x178;
    undefined field305_0x179;
    undefined field306_0x17a;
    undefined field307_0x17b;
    undefined field308_0x17c;
    undefined field309_0x17d;
    undefined field310_0x17e;
    undefined field311_0x17f;
    undefined field312_0x180;
    undefined field313_0x181;
    undefined field314_0x182;
    undefined field315_0x183;
    undefined field316_0x184;
    undefined field317_0x185;
    undefined field318_0x186;
    undefined field319_0x187;
    undefined field320_0x188;
    undefined field321_0x189;
    undefined field322_0x18a;
    undefined field323_0x18b;
    undefined field324_0x18c;
    undefined field325_0x18d;
    undefined field326_0x18e;
    undefined field327_0x18f;
    undefined field328_0x190;
    undefined field329_0x191;
    undefined field330_0x192;
    undefined field331_0x193;
    undefined field332_0x194;
    undefined field333_0x195;
    undefined field334_0x196;
    undefined field335_0x197;
    undefined field336_0x198;
    undefined field337_0x199;
    undefined field338_0x19a;
    undefined field339_0x19b;
    undefined field340_0x19c;
    undefined field341_0x19d;
    undefined field342_0x19e;
    undefined field343_0x19f;
    float field344_0x1a0;
    undefined field345_0x1a4;
    undefined field346_0x1a5;
    undefined field347_0x1a6;
    undefined field348_0x1a7;
    undefined field349_0x1a8;
    undefined field350_0x1a9;
    undefined field351_0x1aa;
    undefined field352_0x1ab;
    undefined field353_0x1ac;
    undefined field354_0x1ad;
    undefined field355_0x1ae;
    undefined field356_0x1af;
    undefined field357_0x1b0;
    undefined field358_0x1b1;
    undefined field359_0x1b2;
    undefined field360_0x1b3;
    undefined field361_0x1b4;
    undefined field362_0x1b5;
    undefined field363_0x1b6;
    undefined field364_0x1b7;
    undefined field365_0x1b8;
    undefined field366_0x1b9;
    undefined field367_0x1ba;
    undefined field368_0x1bb;
    undefined field369_0x1bc;
    undefined field370_0x1bd;
    undefined field371_0x1be;
    undefined field372_0x1bf;
    undefined field373_0x1c0;
    undefined field374_0x1c1;
    undefined field375_0x1c2;
    undefined field376_0x1c3;
    undefined field377_0x1c4;
    undefined field378_0x1c5;
    undefined field379_0x1c6;
    undefined field380_0x1c7;
    undefined field381_0x1c8;
    undefined field382_0x1c9;
    undefined field383_0x1ca;
    undefined field384_0x1cb;
    undefined field385_0x1cc;
    undefined field386_0x1cd;
    undefined field387_0x1ce;
    undefined field388_0x1cf;
    undefined field389_0x1d0;
    undefined field390_0x1d1;
    undefined field391_0x1d2;
    undefined field392_0x1d3;
    undefined field393_0x1d4;
    undefined field394_0x1d5;
    undefined field395_0x1d6;
    undefined field396_0x1d7;
    undefined field397_0x1d8;
    undefined field398_0x1d9;
    undefined field399_0x1da;
    undefined field400_0x1db;
    undefined field401_0x1dc;
    undefined field402_0x1dd;
    undefined field403_0x1de;
    undefined field404_0x1df;
    undefined field405_0x1e0;
    undefined field406_0x1e1;
    undefined field407_0x1e2;
    undefined field408_0x1e3;
    undefined field409_0x1e4;
    undefined field410_0x1e5;
    undefined field411_0x1e6;
    undefined field412_0x1e7;
    undefined field413_0x1e8;
    undefined field414_0x1e9;
    undefined field415_0x1ea;
    undefined field416_0x1eb;
    undefined field417_0x1ec;
    undefined field418_0x1ed;
    undefined field419_0x1ee;
    undefined field420_0x1ef;
    undefined field421_0x1f0;
    undefined field422_0x1f1;
    undefined field423_0x1f2;
    undefined field424_0x1f3;
    undefined field425_0x1f4;
    undefined field426_0x1f5;
    undefined field427_0x1f6;
    undefined field428_0x1f7;
    undefined field429_0x1f8;
    undefined field430_0x1f9;
    undefined field431_0x1fa;
    undefined field432_0x1fb;
    undefined field433_0x1fc;
    undefined field434_0x1fd;
    undefined field435_0x1fe;
    undefined field436_0x1ff;
    undefined field437_0x200;
    undefined field438_0x201;
    undefined field439_0x202;
    undefined field440_0x203;
    undefined field441_0x204;
    undefined field442_0x205;
    undefined field443_0x206;
    undefined field444_0x207;
    undefined field445_0x208;
    undefined field446_0x209;
    undefined field447_0x20a;
    undefined field448_0x20b;
    undefined field449_0x20c;
    undefined field450_0x20d;
    undefined field451_0x20e;
    undefined field452_0x20f;
    undefined field453_0x210;
    undefined field454_0x211;
    undefined field455_0x212;
    undefined field456_0x213;
    undefined field457_0x214;
    undefined field458_0x215;
    undefined field459_0x216;
    undefined field460_0x217;
    undefined field461_0x218;
    undefined field462_0x219;
    undefined field463_0x21a;
    undefined field464_0x21b;
    undefined field465_0x21c;
    undefined field466_0x21d;
    undefined field467_0x21e;
    undefined field468_0x21f;
    undefined field469_0x220;
    undefined field470_0x221;
    undefined field471_0x222;
    undefined field472_0x223;
    undefined field473_0x224;
    undefined field474_0x225;
    undefined field475_0x226;
    undefined field476_0x227;
    undefined field477_0x228;
    undefined field478_0x229;
    undefined field479_0x22a;
    undefined field480_0x22b;
    struct SomethingAboutBuilding * ptr_3;
    undefined field482_0x230;
    undefined field483_0x231;
    undefined field484_0x232;
    undefined field485_0x233;
    undefined field486_0x234;
    undefined field487_0x235;
    undefined field488_0x236;
    undefined field489_0x237;
    undefined field490_0x238;
    undefined field491_0x239;
    undefined field492_0x23a;
    undefined field493_0x23b;
    int field494_0x23c;
    undefined field495_0x240;
    undefined field496_0x241;
    undefined field497_0x242;
    undefined field498_0x243;
};

struct ObjectDrawData {
    undefined * func;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    undefined field21_0x18;
    undefined field22_0x19;
    undefined field23_0x1a;
    undefined field24_0x1b;
    undefined field25_0x1c;
    undefined field26_0x1d;
    undefined field27_0x1e;
    undefined field28_0x1f;
    undefined field29_0x20;
    undefined field30_0x21;
    undefined field31_0x22;
    undefined field32_0x23;
    undefined field33_0x24;
    undefined field34_0x25;
    undefined field35_0x26;
    undefined field36_0x27;
    undefined field37_0x28;
    undefined field38_0x29;
    undefined field39_0x2a;
    undefined field40_0x2b;
    undefined field41_0x2c;
    undefined field42_0x2d;
    undefined field43_0x2e;
    undefined field44_0x2f;
    undefined field45_0x30;
    undefined field46_0x31;
    undefined field47_0x32;
    undefined field48_0x33;
    undefined field49_0x34;
    undefined field50_0x35;
    undefined field51_0x36;
    undefined field52_0x37;
    undefined field53_0x38;
    undefined field54_0x39;
    undefined field55_0x3a;
    undefined field56_0x3b;
    undefined field57_0x3c;
    undefined field58_0x3d;
    undefined field59_0x3e;
    undefined field60_0x3f;
    undefined field61_0x40;
    undefined field62_0x41;
    undefined field63_0x42;
    undefined field64_0x43;
    undefined field65_0x44;
    undefined field66_0x45;
    undefined field67_0x46;
    undefined field68_0x47;
    undefined field69_0x48;
    undefined field70_0x49;
    undefined field71_0x4a;
    undefined field72_0x4b;
    undefined field73_0x4c;
    undefined field74_0x4d;
    undefined field75_0x4e;
    undefined field76_0x4f;
    undefined field77_0x50;
    undefined field78_0x51;
    undefined field79_0x52;
    undefined field80_0x53;
    undefined field81_0x54;
    undefined field82_0x55;
    undefined field83_0x56;
    undefined field84_0x57;
    undefined field85_0x58;
    undefined field86_0x59;
    undefined field87_0x5a;
    undefined field88_0x5b;
    undefined field89_0x5c;
    undefined field90_0x5d;
    undefined field91_0x5e;
    undefined field92_0x5f;
    undefined field93_0x60;
    undefined field94_0x61;
    undefined field95_0x62;
    undefined field96_0x63;
    undefined field97_0x64;
    undefined field98_0x65;
    undefined field99_0x66;
    undefined field100_0x67;
    undefined field101_0x68;
    undefined field102_0x69;
    undefined field103_0x6a;
    undefined field104_0x6b;
    undefined field105_0x6c;
    undefined field106_0x6d;
    undefined field107_0x6e;
    undefined field108_0x6f;
    undefined field109_0x70;
    undefined field110_0x71;
    undefined field111_0x72;
    undefined field112_0x73;
    undefined field113_0x74;
    undefined field114_0x75;
    undefined field115_0x76;
    undefined field116_0x77;
    undefined field117_0x78;
    undefined field118_0x79;
    undefined field119_0x7a;
    undefined field120_0x7b;
    undefined field121_0x7c;
    undefined field122_0x7d;
    undefined field123_0x7e;
    undefined field124_0x7f;
    undefined field125_0x80;
    undefined field126_0x81;
    undefined field127_0x82;
    undefined field128_0x83;
    undefined field129_0x84;
    undefined field130_0x85;
    undefined field131_0x86;
    undefined field132_0x87;
    undefined field133_0x88;
    undefined field134_0x89;
    undefined field135_0x8a;
    undefined field136_0x8b;
    undefined field137_0x8c;
    undefined field138_0x8d;
    undefined field139_0x8e;
    undefined field140_0x8f;
    undefined field141_0x90;
    undefined field142_0x91;
    undefined field143_0x92;
    undefined field144_0x93;
    undefined field145_0x94;
    undefined field146_0x95;
    undefined field147_0x96;
    undefined field148_0x97;
    undefined field149_0x98;
    undefined field150_0x99;
    undefined field151_0x9a;
    undefined field152_0x9b;
    undefined field153_0x9c;
    undefined field154_0x9d;
    undefined field155_0x9e;
    undefined field156_0x9f;
    undefined field157_0xa0;
    undefined field158_0xa1;
    undefined field159_0xa2;
    undefined field160_0xa3;
    undefined field161_0xa4;
    undefined field162_0xa5;
    undefined field163_0xa6;
    undefined field164_0xa7;
    undefined field165_0xa8;
    undefined field166_0xa9;
    undefined field167_0xaa;
    undefined field168_0xab;
    undefined field169_0xac;
    undefined field170_0xad;
    undefined field171_0xae;
    undefined field172_0xaf;
    int field173_0xb0;
    undefined field174_0xb4;
    undefined field175_0xb5;
    undefined field176_0xb6;
    undefined field177_0xb7;
    undefined field178_0xb8;
    undefined field179_0xb9;
    undefined field180_0xba;
    undefined field181_0xbb;
    undefined field182_0xbc;
    undefined field183_0xbd;
    undefined field184_0xbe;
    undefined field185_0xbf;
    undefined field186_0xc0;
    undefined field187_0xc1;
    undefined field188_0xc2;
    undefined field189_0xc3;
    undefined field190_0xc4;
    undefined field191_0xc5;
    undefined field192_0xc6;
    undefined field193_0xc7;
    undefined field194_0xc8;
    undefined field195_0xc9;
    undefined field196_0xca;
    undefined field197_0xcb;
    undefined field198_0xcc;
    undefined field199_0xcd;
    undefined field200_0xce;
    undefined field201_0xcf;
    undefined field202_0xd0;
    undefined field203_0xd1;
    undefined field204_0xd2;
    undefined field205_0xd3;
    undefined field206_0xd4;
    undefined field207_0xd5;
    undefined field208_0xd6;
    undefined field209_0xd7;
    undefined field210_0xd8;
    undefined field211_0xd9;
    undefined field212_0xda;
    undefined field213_0xdb;
    undefined field214_0xdc;
    undefined field215_0xdd;
    undefined field216_0xde;
    undefined field217_0xdf;
    undefined field218_0xe0;
    undefined field219_0xe1;
    undefined field220_0xe2;
    undefined field221_0xe3;
    undefined field222_0xe4;
    undefined field223_0xe5;
    undefined field224_0xe6;
    undefined field225_0xe7;
    undefined field226_0xe8;
    undefined field227_0xe9;
    undefined field228_0xea;
    undefined field229_0xeb;
    undefined field230_0xec;
    undefined field231_0xed;
    undefined field232_0xee;
    undefined field233_0xef;
    undefined field234_0xf0;
    undefined field235_0xf1;
    undefined field236_0xf2;
    undefined field237_0xf3;
    undefined field238_0xf4;
    undefined field239_0xf5;
    undefined field240_0xf6;
    undefined field241_0xf7;
    undefined field242_0xf8;
    undefined field243_0xf9;
    undefined field244_0xfa;
    undefined field245_0xfb;
    undefined field246_0xfc;
    undefined field247_0xfd;
    undefined field248_0xfe;
    undefined field249_0xff;
    undefined field250_0x100;
    undefined field251_0x101;
    undefined field252_0x102;
    undefined field253_0x103;
    undefined field254_0x104;
    undefined field255_0x105;
    undefined field256_0x106;
    undefined field257_0x107;
    undefined field258_0x108;
    undefined field259_0x109;
    undefined field260_0x10a;
    undefined field261_0x10b;
    undefined field262_0x10c;
    undefined field263_0x10d;
    undefined field264_0x10e;
    undefined field265_0x10f;
    undefined field266_0x110;
    undefined field267_0x111;
    undefined field268_0x112;
    undefined field269_0x113;
    undefined field270_0x114;
    undefined field271_0x115;
    undefined field272_0x116;
    undefined field273_0x117;
    undefined field274_0x118;
    undefined field275_0x119;
    undefined field276_0x11a;
    undefined field277_0x11b;
    undefined field278_0x11c;
    undefined field279_0x11d;
    undefined field280_0x11e;
    undefined field281_0x11f;
    undefined field282_0x120;
    undefined field283_0x121;
    undefined field284_0x122;
    undefined field285_0x123;
    undefined field286_0x124;
    undefined field287_0x125;
    undefined field288_0x126;
    undefined field289_0x127;
    undefined field290_0x128;
    undefined field291_0x129;
    undefined field292_0x12a;
    undefined field293_0x12b;
    undefined field294_0x12c;
    undefined field295_0x12d;
    undefined field296_0x12e;
    undefined field297_0x12f;
    undefined field298_0x130;
    undefined field299_0x131;
    undefined field300_0x132;
    undefined field301_0x133;
    undefined field302_0x134;
    undefined field303_0x135;
    undefined field304_0x136;
    undefined field305_0x137;
    undefined field306_0x138;
    undefined field307_0x139;
    undefined field308_0x13a;
    undefined field309_0x13b;
    undefined field310_0x13c;
    undefined field311_0x13d;
    undefined field312_0x13e;
    undefined field313_0x13f;
    undefined field314_0x140;
    undefined field315_0x141;
    undefined field316_0x142;
    undefined field317_0x143;
    undefined field318_0x144;
    undefined field319_0x145;
    undefined field320_0x146;
    undefined field321_0x147;
    undefined field322_0x148;
    undefined field323_0x149;
    undefined field324_0x14a;
    undefined field325_0x14b;
    undefined field326_0x14c;
    undefined field327_0x14d;
    undefined field328_0x14e;
    undefined field329_0x14f;
    undefined field330_0x150;
    undefined field331_0x151;
    undefined field332_0x152;
    undefined field333_0x153;
    undefined field334_0x154;
    undefined field335_0x155;
    undefined field336_0x156;
    undefined field337_0x157;
    undefined field338_0x158;
    undefined field339_0x159;
    undefined field340_0x15a;
    undefined field341_0x15b;
    undefined field342_0x15c;
    undefined field343_0x15d;
    undefined field344_0x15e;
    undefined field345_0x15f;
    undefined field346_0x160;
    undefined field347_0x161;
    undefined field348_0x162;
    undefined field349_0x163;
    undefined field350_0x164;
    undefined field351_0x165;
    undefined field352_0x166;
    undefined field353_0x167;
    undefined field354_0x168;
    undefined field355_0x169;
    undefined field356_0x16a;
    undefined field357_0x16b;
    undefined field358_0x16c;
    undefined field359_0x16d;
    undefined field360_0x16e;
    undefined field361_0x16f;
    undefined field362_0x170;
    undefined field363_0x171;
    undefined field364_0x172;
    undefined field365_0x173;
    undefined field366_0x174;
    undefined field367_0x175;
    undefined field368_0x176;
    undefined field369_0x177;
    undefined field370_0x178;
    undefined field371_0x179;
    undefined field372_0x17a;
    undefined field373_0x17b;
    undefined field374_0x17c;
    undefined field375_0x17d;
    undefined field376_0x17e;
    undefined field377_0x17f;
    undefined field378_0x180;
    undefined field379_0x181;
    undefined field380_0x182;
    undefined field381_0x183;
    undefined field382_0x184;
    undefined field383_0x185;
    undefined field384_0x186;
    undefined field385_0x187;
    undefined field386_0x188;
    undefined field387_0x189;
    undefined field388_0x18a;
    undefined field389_0x18b;
    undefined field390_0x18c;
    undefined field391_0x18d;
    undefined field392_0x18e;
    undefined field393_0x18f;
    undefined field394_0x190;
    undefined field395_0x191;
    undefined field396_0x192;
    undefined field397_0x193;
    undefined field398_0x194;
    undefined field399_0x195;
    undefined field400_0x196;
    undefined field401_0x197;
    undefined field402_0x198;
    undefined field403_0x199;
    undefined field404_0x19a;
    undefined field405_0x19b;
    undefined field406_0x19c;
    undefined field407_0x19d;
    undefined field408_0x19e;
    undefined field409_0x19f;
    undefined field410_0x1a0;
    undefined field411_0x1a1;
    undefined field412_0x1a2;
    undefined field413_0x1a3;
    undefined field414_0x1a4;
    undefined field415_0x1a5;
    undefined field416_0x1a6;
    undefined field417_0x1a7;
    undefined field418_0x1a8;
    undefined field419_0x1a9;
    undefined field420_0x1aa;
    undefined field421_0x1ab;
    undefined field422_0x1ac;
    undefined field423_0x1ad;
    undefined field424_0x1ae;
    undefined field425_0x1af;
    undefined field426_0x1b0;
    undefined field427_0x1b1;
    undefined field428_0x1b2;
    undefined field429_0x1b3;
    undefined field430_0x1b4;
    undefined field431_0x1b5;
    undefined field432_0x1b6;
    undefined field433_0x1b7;
    undefined field434_0x1b8;
    undefined field435_0x1b9;
    undefined field436_0x1ba;
    undefined field437_0x1bb;
    undefined field438_0x1bc;
    undefined field439_0x1bd;
    undefined field440_0x1be;
    undefined field441_0x1bf;
    undefined field442_0x1c0;
    undefined field443_0x1c1;
    undefined field444_0x1c2;
    undefined field445_0x1c3;
    undefined field446_0x1c4;
    undefined field447_0x1c5;
    undefined field448_0x1c6;
    undefined field449_0x1c7;
    undefined field450_0x1c8;
    undefined field451_0x1c9;
    undefined field452_0x1ca;
    undefined field453_0x1cb;
    undefined field454_0x1cc;
    undefined field455_0x1cd;
    undefined field456_0x1ce;
    undefined field457_0x1cf;
    undefined field458_0x1d0;
    undefined field459_0x1d1;
    undefined field460_0x1d2;
    undefined field461_0x1d3;
    undefined field462_0x1d4;
    undefined field463_0x1d5;
    undefined field464_0x1d6;
    undefined field465_0x1d7;
    undefined field466_0x1d8;
    undefined field467_0x1d9;
    undefined field468_0x1da;
    undefined field469_0x1db;
    undefined field470_0x1dc;
    undefined field471_0x1dd;
    undefined field472_0x1de;
    undefined field473_0x1df;
    undefined field474_0x1e0;
    undefined field475_0x1e1;
    undefined field476_0x1e2;
    undefined field477_0x1e3;
    undefined field478_0x1e4;
    undefined field479_0x1e5;
    undefined field480_0x1e6;
    undefined field481_0x1e7;
    undefined field482_0x1e8;
    undefined field483_0x1e9;
    undefined field484_0x1ea;
    undefined field485_0x1eb;
    undefined field486_0x1ec;
    undefined field487_0x1ed;
    undefined field488_0x1ee;
    undefined field489_0x1ef;
    undefined field490_0x1f0;
    undefined field491_0x1f1;
    undefined field492_0x1f2;
    undefined field493_0x1f3;
    undefined field494_0x1f4;
    undefined field495_0x1f5;
    undefined field496_0x1f6;
    undefined field497_0x1f7;
    undefined field498_0x1f8;
    undefined field499_0x1f9;
    undefined field500_0x1fa;
    undefined field501_0x1fb;
    undefined field502_0x1fc;
    undefined field503_0x1fd;
    undefined field504_0x1fe;
    undefined field505_0x1ff;
    undefined field506_0x200;
    undefined field507_0x201;
    undefined field508_0x202;
    undefined field509_0x203;
    undefined field510_0x204;
    undefined field511_0x205;
    undefined field512_0x206;
    undefined field513_0x207;
    undefined field514_0x208;
    undefined field515_0x209;
    undefined field516_0x20a;
    undefined field517_0x20b;
    undefined field518_0x20c;
    undefined field519_0x20d;
    undefined field520_0x20e;
    undefined field521_0x20f;
    undefined field522_0x210;
    undefined field523_0x211;
    undefined field524_0x212;
    undefined field525_0x213;
    undefined field526_0x214;
    undefined field527_0x215;
    undefined field528_0x216;
    undefined field529_0x217;
    undefined field530_0x218;
    undefined field531_0x219;
    undefined field532_0x21a;
    undefined field533_0x21b;
    undefined field534_0x21c;
    undefined field535_0x21d;
    undefined field536_0x21e;
    undefined field537_0x21f;
    undefined field538_0x220;
    undefined field539_0x221;
    undefined field540_0x222;
    undefined field541_0x223;
    undefined field542_0x224;
    undefined field543_0x225;
    undefined field544_0x226;
    undefined field545_0x227;
    undefined field546_0x228;
    undefined field547_0x229;
    undefined field548_0x22a;
    undefined field549_0x22b;
    undefined field550_0x22c;
    undefined field551_0x22d;
    undefined field552_0x22e;
    undefined field553_0x22f;
    undefined field554_0x230;
    undefined field555_0x231;
    undefined field556_0x232;
    undefined field557_0x233;
    undefined field558_0x234;
    undefined field559_0x235;
    undefined field560_0x236;
    undefined field561_0x237;
    undefined field562_0x238;
    undefined field563_0x239;
    undefined field564_0x23a;
    undefined field565_0x23b;
    undefined field566_0x23c;
    undefined field567_0x23d;
    undefined field568_0x23e;
    undefined field569_0x23f;
    undefined field570_0x240;
    undefined field571_0x241;
    undefined field572_0x242;
    undefined field573_0x243;
    undefined field574_0x244;
    undefined field575_0x245;
    undefined field576_0x246;
    undefined field577_0x247;
    undefined field578_0x248;
    undefined field579_0x249;
    undefined field580_0x24a;
    undefined field581_0x24b;
    undefined field582_0x24c;
    undefined field583_0x24d;
    undefined field584_0x24e;
    undefined field585_0x24f;
    undefined field586_0x250;
    undefined field587_0x251;
    undefined field588_0x252;
    undefined field589_0x253;
    undefined field590_0x254;
    undefined field591_0x255;
    undefined field592_0x256;
    undefined field593_0x257;
    undefined field594_0x258;
    undefined field595_0x259;
    undefined field596_0x25a;
    undefined field597_0x25b;
    undefined field598_0x25c;
    undefined field599_0x25d;
    undefined field600_0x25e;
    undefined field601_0x25f;
    undefined field602_0x260;
    undefined field603_0x261;
    undefined field604_0x262;
    undefined field605_0x263;
    undefined field606_0x264;
    undefined field607_0x265;
    undefined field608_0x266;
    undefined field609_0x267;
    undefined field610_0x268;
    undefined field611_0x269;
    undefined field612_0x26a;
    undefined field613_0x26b;
    undefined field614_0x26c;
    undefined field615_0x26d;
    undefined field616_0x26e;
    undefined field617_0x26f;
    undefined field618_0x270;
    undefined field619_0x271;
    undefined field620_0x272;
    undefined field621_0x273;
    undefined field622_0x274;
    undefined field623_0x275;
    undefined field624_0x276;
    undefined field625_0x277;
    undefined field626_0x278;
    undefined field627_0x279;
    undefined field628_0x27a;
    undefined field629_0x27b;
    undefined field630_0x27c;
    undefined field631_0x27d;
    undefined field632_0x27e;
    undefined field633_0x27f;
    undefined field634_0x280;
    undefined field635_0x281;
    undefined field636_0x282;
    undefined field637_0x283;
    undefined field638_0x284;
    undefined field639_0x285;
    undefined field640_0x286;
    undefined field641_0x287;
    undefined field642_0x288;
    undefined field643_0x289;
    undefined field644_0x28a;
    undefined field645_0x28b;
    undefined field646_0x28c;
    undefined field647_0x28d;
    undefined field648_0x28e;
    undefined field649_0x28f;
    undefined field650_0x290;
    undefined field651_0x291;
    undefined field652_0x292;
    undefined field653_0x293;
    undefined field654_0x294;
    undefined field655_0x295;
    undefined field656_0x296;
    undefined field657_0x297;
    undefined field658_0x298;
    undefined field659_0x299;
    undefined field660_0x29a;
    undefined field661_0x29b;
    undefined field662_0x29c;
    undefined field663_0x29d;
    undefined field664_0x29e;
    undefined field665_0x29f;
    undefined field666_0x2a0;
    undefined field667_0x2a1;
    undefined field668_0x2a2;
    undefined field669_0x2a3;
    undefined field670_0x2a4;
    undefined field671_0x2a5;
    undefined field672_0x2a6;
    undefined field673_0x2a7;
    undefined field674_0x2a8;
    undefined field675_0x2a9;
    undefined field676_0x2aa;
    undefined field677_0x2ab;
    undefined field678_0x2ac;
    undefined field679_0x2ad;
    undefined field680_0x2ae;
    undefined field681_0x2af;
    undefined field682_0x2b0;
    undefined field683_0x2b1;
    undefined field684_0x2b2;
    undefined field685_0x2b3;
    undefined field686_0x2b4;
    undefined field687_0x2b5;
    undefined field688_0x2b6;
    undefined field689_0x2b7;
    undefined field690_0x2b8;
    undefined field691_0x2b9;
    undefined field692_0x2ba;
    undefined field693_0x2bb;
    undefined field694_0x2bc;
    undefined field695_0x2bd;
    undefined field696_0x2be;
    undefined field697_0x2bf;
    undefined field698_0x2c0;
    undefined field699_0x2c1;
    undefined field700_0x2c2;
    undefined field701_0x2c3;
    undefined field702_0x2c4;
    undefined field703_0x2c5;
    undefined field704_0x2c6;
    undefined field705_0x2c7;
    undefined field706_0x2c8;
    undefined field707_0x2c9;
    undefined field708_0x2ca;
    undefined field709_0x2cb;
    undefined field710_0x2cc;
    undefined field711_0x2cd;
    undefined field712_0x2ce;
    undefined field713_0x2cf;
    undefined field714_0x2d0;
    undefined field715_0x2d1;
    undefined field716_0x2d2;
    undefined field717_0x2d3;
    undefined field718_0x2d4;
    undefined field719_0x2d5;
    undefined field720_0x2d6;
    undefined field721_0x2d7;
    undefined field722_0x2d8;
    undefined field723_0x2d9;
    undefined field724_0x2da;
    undefined field725_0x2db;
    undefined field726_0x2dc;
    undefined field727_0x2dd;
    undefined field728_0x2de;
    undefined field729_0x2df;
    undefined field730_0x2e0;
    undefined field731_0x2e1;
    undefined field732_0x2e2;
    undefined field733_0x2e3;
    undefined field734_0x2e4;
    undefined field735_0x2e5;
    undefined field736_0x2e6;
    undefined field737_0x2e7;
    undefined field738_0x2e8;
    undefined field739_0x2e9;
    undefined field740_0x2ea;
    undefined field741_0x2eb;
    undefined field742_0x2ec;
    undefined field743_0x2ed;
    undefined field744_0x2ee;
    undefined field745_0x2ef;
    undefined field746_0x2f0;
    undefined field747_0x2f1;
    undefined field748_0x2f2;
    undefined field749_0x2f3;
    undefined field750_0x2f4;
    undefined field751_0x2f5;
    undefined field752_0x2f6;
    undefined field753_0x2f7;
    undefined field754_0x2f8;
    undefined field755_0x2f9;
    undefined field756_0x2fa;
    undefined field757_0x2fb;
    undefined field758_0x2fc;
    undefined field759_0x2fd;
    undefined field760_0x2fe;
    undefined field761_0x2ff;
    undefined field762_0x300;
    undefined field763_0x301;
    undefined field764_0x302;
    undefined field765_0x303;
    undefined field766_0x304;
    undefined field767_0x305;
    undefined field768_0x306;
    undefined field769_0x307;
    undefined field770_0x308;
    undefined field771_0x309;
    undefined field772_0x30a;
    undefined field773_0x30b;
    undefined field774_0x30c;
    undefined field775_0x30d;
    undefined field776_0x30e;
    undefined field777_0x30f;
    undefined field778_0x310;
    undefined field779_0x311;
    undefined field780_0x312;
    undefined field781_0x313;
    undefined field782_0x314;
    undefined field783_0x315;
    undefined field784_0x316;
    undefined field785_0x317;
    undefined field786_0x318;
    undefined field787_0x319;
    undefined field788_0x31a;
    undefined field789_0x31b;
    undefined field790_0x31c;
    undefined field791_0x31d;
    undefined field792_0x31e;
    undefined field793_0x31f;
    undefined field794_0x320;
    undefined field795_0x321;
    undefined field796_0x322;
    undefined field797_0x323;
    undefined field798_0x324;
    undefined field799_0x325;
    undefined field800_0x326;
    undefined field801_0x327;
    undefined field802_0x328;
    undefined field803_0x329;
    undefined field804_0x32a;
    undefined field805_0x32b;
    undefined field806_0x32c;
    undefined field807_0x32d;
    undefined field808_0x32e;
    undefined field809_0x32f;
    undefined field810_0x330;
    undefined field811_0x331;
    undefined field812_0x332;
    undefined field813_0x333;
    undefined field814_0x334;
    undefined field815_0x335;
    undefined field816_0x336;
    undefined field817_0x337;
    undefined field818_0x338;
    undefined field819_0x339;
    undefined field820_0x33a;
    undefined field821_0x33b;
    undefined field822_0x33c;
    undefined field823_0x33d;
    undefined field824_0x33e;
    undefined field825_0x33f;
    undefined field826_0x340;
    undefined field827_0x341;
    undefined field828_0x342;
    undefined field829_0x343;
    undefined field830_0x344;
    undefined field831_0x345;
    undefined field832_0x346;
    undefined field833_0x347;
    undefined field834_0x348;
    undefined field835_0x349;
    undefined field836_0x34a;
    undefined field837_0x34b;
    undefined field838_0x34c;
    undefined field839_0x34d;
    undefined field840_0x34e;
    undefined field841_0x34f;
    undefined field842_0x350;
    undefined field843_0x351;
    undefined field844_0x352;
    undefined field845_0x353;
    undefined field846_0x354;
    undefined field847_0x355;
    undefined field848_0x356;
    undefined field849_0x357;
    undefined field850_0x358;
    undefined field851_0x359;
    undefined field852_0x35a;
    undefined field853_0x35b;
    undefined field854_0x35c;
    undefined field855_0x35d;
    undefined field856_0x35e;
    undefined field857_0x35f;
    undefined field858_0x360;
    undefined field859_0x361;
    undefined field860_0x362;
    undefined field861_0x363;
    undefined field862_0x364;
    undefined field863_0x365;
    undefined field864_0x366;
    undefined field865_0x367;
    undefined field866_0x368;
    undefined field867_0x369;
    undefined field868_0x36a;
    undefined field869_0x36b;
    undefined field870_0x36c;
    undefined field871_0x36d;
    undefined field872_0x36e;
    undefined field873_0x36f;
    undefined field874_0x370;
    undefined field875_0x371;
    undefined field876_0x372;
    undefined field877_0x373;
    undefined field878_0x374;
    undefined field879_0x375;
    undefined field880_0x376;
    undefined field881_0x377;
    undefined field882_0x378;
    undefined field883_0x379;
    undefined field884_0x37a;
    undefined field885_0x37b;
    undefined field886_0x37c;
    undefined field887_0x37d;
    undefined field888_0x37e;
    undefined field889_0x37f;
    undefined field890_0x380;
    undefined field891_0x381;
    undefined field892_0x382;
    undefined field893_0x383;
    undefined field894_0x384;
    undefined field895_0x385;
    undefined field896_0x386;
    undefined field897_0x387;
    undefined field898_0x388;
    undefined field899_0x389;
    undefined field900_0x38a;
    undefined field901_0x38b;
    undefined field902_0x38c;
    undefined field903_0x38d;
    undefined field904_0x38e;
    undefined field905_0x38f;
    undefined field906_0x390;
    undefined field907_0x391;
    undefined field908_0x392;
    undefined field909_0x393;
    undefined field910_0x394;
    undefined field911_0x395;
    undefined field912_0x396;
    undefined field913_0x397;
    undefined field914_0x398;
    undefined field915_0x399;
    undefined field916_0x39a;
    undefined field917_0x39b;
    undefined field918_0x39c;
    undefined field919_0x39d;
    undefined field920_0x39e;
    undefined field921_0x39f;
    undefined field922_0x3a0;
    undefined field923_0x3a1;
    undefined field924_0x3a2;
    undefined field925_0x3a3;
    undefined field926_0x3a4;
    undefined field927_0x3a5;
    undefined field928_0x3a6;
    undefined field929_0x3a7;
    undefined field930_0x3a8;
    undefined field931_0x3a9;
    undefined field932_0x3aa;
    undefined field933_0x3ab;
    undefined field934_0x3ac;
    undefined field935_0x3ad;
    undefined field936_0x3ae;
    undefined field937_0x3af;
    undefined field938_0x3b0;
    undefined field939_0x3b1;
    undefined field940_0x3b2;
    undefined field941_0x3b3;
    undefined field942_0x3b4;
    undefined field943_0x3b5;
    undefined field944_0x3b6;
    undefined field945_0x3b7;
    undefined field946_0x3b8;
    undefined field947_0x3b9;
    undefined field948_0x3ba;
    undefined field949_0x3bb;
    undefined field950_0x3bc;
    undefined field951_0x3bd;
    undefined field952_0x3be;
    undefined field953_0x3bf;
    undefined field954_0x3c0;
    undefined field955_0x3c1;
    undefined field956_0x3c2;
    undefined field957_0x3c3;
    undefined field958_0x3c4;
    undefined field959_0x3c5;
    undefined field960_0x3c6;
    undefined field961_0x3c7;
    undefined field962_0x3c8;
    undefined field963_0x3c9;
    undefined field964_0x3ca;
    undefined field965_0x3cb;
    undefined field966_0x3cc;
    undefined field967_0x3cd;
    undefined field968_0x3ce;
    undefined field969_0x3cf;
    undefined field970_0x3d0;
    undefined field971_0x3d1;
    undefined field972_0x3d2;
    undefined field973_0x3d3;
    undefined field974_0x3d4;
    undefined field975_0x3d5;
    undefined field976_0x3d6;
    undefined field977_0x3d7;
    undefined field978_0x3d8;
    undefined field979_0x3d9;
    undefined field980_0x3da;
    undefined field981_0x3db;
    undefined field982_0x3dc;
    undefined field983_0x3dd;
    undefined field984_0x3de;
    undefined field985_0x3df;
    undefined field986_0x3e0;
    undefined field987_0x3e1;
    undefined field988_0x3e2;
    undefined field989_0x3e3;
    undefined field990_0x3e4;
    undefined field991_0x3e5;
    undefined field992_0x3e6;
    undefined field993_0x3e7;
    undefined field994_0x3e8;
    undefined field995_0x3e9;
    undefined field996_0x3ea;
    undefined field997_0x3eb;
    undefined field998_0x3ec;
    undefined field999_0x3ed;
    undefined field1000_0x3ee;
    undefined field1001_0x3ef;
    undefined field1002_0x3f0;
    undefined field1003_0x3f1;
    undefined field1004_0x3f2;
    undefined field1005_0x3f3;
    undefined field1006_0x3f4;
    undefined field1007_0x3f5;
    undefined field1008_0x3f6;
    undefined field1009_0x3f7;
    undefined field1010_0x3f8;
    undefined field1011_0x3f9;
    undefined field1012_0x3fa;
    undefined field1013_0x3fb;
    undefined field1014_0x3fc;
    undefined field1015_0x3fd;
    undefined field1016_0x3fe;
    undefined field1017_0x3ff;
    undefined field1018_0x400;
    undefined field1019_0x401;
    undefined field1020_0x402;
    undefined field1021_0x403;
    undefined field1022_0x404;
    undefined field1023_0x405;
    undefined field1024_0x406;
    undefined field1025_0x407;
    undefined field1026_0x408;
    undefined field1027_0x409;
    undefined field1028_0x40a;
    undefined field1029_0x40b;
    undefined field1030_0x40c;
    undefined field1031_0x40d;
    undefined field1032_0x40e;
    undefined field1033_0x40f;
    undefined field1034_0x410;
    undefined field1035_0x411;
    undefined field1036_0x412;
    undefined field1037_0x413;
    undefined field1038_0x414;
    undefined field1039_0x415;
    undefined field1040_0x416;
    undefined field1041_0x417;
    undefined field1042_0x418;
    undefined field1043_0x419;
    undefined field1044_0x41a;
    undefined field1045_0x41b;
    undefined field1046_0x41c;
    undefined field1047_0x41d;
    undefined field1048_0x41e;
    undefined field1049_0x41f;
    undefined field1050_0x420;
    undefined field1051_0x421;
    undefined field1052_0x422;
    undefined field1053_0x423;
    undefined field1054_0x424;
    undefined field1055_0x425;
    undefined field1056_0x426;
    undefined field1057_0x427;
    undefined field1058_0x428;
    undefined field1059_0x429;
    undefined field1060_0x42a;
    undefined field1061_0x42b;
    undefined field1062_0x42c;
    undefined field1063_0x42d;
    undefined field1064_0x42e;
    undefined field1065_0x42f;
    undefined field1066_0x430;
    undefined field1067_0x431;
    undefined field1068_0x432;
    undefined field1069_0x433;
    undefined field1070_0x434;
    undefined field1071_0x435;
    undefined field1072_0x436;
    undefined field1073_0x437;
    undefined field1074_0x438;
    undefined field1075_0x439;
    undefined field1076_0x43a;
    undefined field1077_0x43b;
    undefined field1078_0x43c;
    undefined field1079_0x43d;
    undefined field1080_0x43e;
    undefined field1081_0x43f;
    undefined field1082_0x440;
    undefined field1083_0x441;
    undefined field1084_0x442;
    undefined field1085_0x443;
    undefined field1086_0x444;
    undefined field1087_0x445;
    undefined field1088_0x446;
    undefined field1089_0x447;
    undefined field1090_0x448;
    undefined field1091_0x449;
    undefined field1092_0x44a;
    undefined field1093_0x44b;
    undefined field1094_0x44c;
    undefined field1095_0x44d;
    undefined field1096_0x44e;
    undefined field1097_0x44f;
    undefined field1098_0x450;
    undefined field1099_0x451;
    undefined field1100_0x452;
    undefined field1101_0x453;
    undefined field1102_0x454;
    undefined field1103_0x455;
    undefined field1104_0x456;
    undefined field1105_0x457;
    undefined field1106_0x458;
    undefined field1107_0x459;
    undefined field1108_0x45a;
    undefined field1109_0x45b;
    undefined field1110_0x45c;
    undefined field1111_0x45d;
    undefined field1112_0x45e;
    undefined field1113_0x45f;
    undefined field1114_0x460;
    undefined field1115_0x461;
    undefined field1116_0x462;
    undefined field1117_0x463;
    undefined field1118_0x464;
    undefined field1119_0x465;
    undefined field1120_0x466;
    undefined field1121_0x467;
    undefined field1122_0x468;
    undefined field1123_0x469;
    undefined field1124_0x46a;
    undefined field1125_0x46b;
    undefined field1126_0x46c;
    undefined field1127_0x46d;
    undefined field1128_0x46e;
    undefined field1129_0x46f;
    undefined field1130_0x470;
    undefined field1131_0x471;
    undefined field1132_0x472;
    undefined field1133_0x473;
    undefined field1134_0x474;
    undefined field1135_0x475;
    undefined field1136_0x476;
    undefined field1137_0x477;
    undefined field1138_0x478;
    undefined field1139_0x479;
    undefined field1140_0x47a;
    undefined field1141_0x47b;
    undefined field1142_0x47c;
    undefined field1143_0x47d;
    undefined field1144_0x47e;
    undefined field1145_0x47f;
    undefined field1146_0x480;
    undefined field1147_0x481;
    undefined field1148_0x482;
    undefined field1149_0x483;
    undefined field1150_0x484;
    undefined field1151_0x485;
    undefined field1152_0x486;
    undefined field1153_0x487;
    undefined field1154_0x488;
    undefined field1155_0x489;
    undefined field1156_0x48a;
    undefined field1157_0x48b;
    undefined field1158_0x48c;
    undefined field1159_0x48d;
    undefined field1160_0x48e;
    undefined field1161_0x48f;
    undefined field1162_0x490;
    undefined field1163_0x491;
    undefined field1164_0x492;
    undefined field1165_0x493;
    undefined field1166_0x494;
    undefined field1167_0x495;
    undefined field1168_0x496;
    undefined field1169_0x497;
    undefined field1170_0x498;
    undefined field1171_0x499;
    undefined field1172_0x49a;
    undefined field1173_0x49b;
    undefined field1174_0x49c;
    undefined field1175_0x49d;
    undefined field1176_0x49e;
    undefined field1177_0x49f;
    undefined field1178_0x4a0;
    undefined field1179_0x4a1;
    undefined field1180_0x4a2;
    undefined field1181_0x4a3;
    undefined field1182_0x4a4;
    undefined field1183_0x4a5;
    undefined field1184_0x4a6;
    undefined field1185_0x4a7;
    undefined field1186_0x4a8;
    undefined field1187_0x4a9;
    undefined field1188_0x4aa;
    undefined field1189_0x4ab;
    undefined field1190_0x4ac;
    undefined field1191_0x4ad;
    undefined field1192_0x4ae;
    undefined field1193_0x4af;
    undefined field1194_0x4b0;
    undefined field1195_0x4b1;
    undefined field1196_0x4b2;
    undefined field1197_0x4b3;
    undefined field1198_0x4b4;
    undefined field1199_0x4b5;
    undefined field1200_0x4b6;
    undefined field1201_0x4b7;
    undefined field1202_0x4b8;
    undefined field1203_0x4b9;
    undefined field1204_0x4ba;
    undefined field1205_0x4bb;
    undefined field1206_0x4bc;
    undefined field1207_0x4bd;
    undefined field1208_0x4be;
    undefined field1209_0x4bf;
    undefined field1210_0x4c0;
    undefined field1211_0x4c1;
    undefined field1212_0x4c2;
    undefined field1213_0x4c3;
    undefined field1214_0x4c4;
    undefined field1215_0x4c5;
    undefined field1216_0x4c6;
    undefined field1217_0x4c7;
    undefined field1218_0x4c8;
    undefined field1219_0x4c9;
    undefined field1220_0x4ca;
    undefined field1221_0x4cb;
    undefined field1222_0x4cc;
    undefined field1223_0x4cd;
    undefined field1224_0x4ce;
    undefined field1225_0x4cf;
    undefined field1226_0x4d0;
    undefined field1227_0x4d1;
    undefined field1228_0x4d2;
    undefined field1229_0x4d3;
    undefined field1230_0x4d4;
    undefined field1231_0x4d5;
    undefined field1232_0x4d6;
    undefined field1233_0x4d7;
    undefined field1234_0x4d8;
    undefined field1235_0x4d9;
    undefined field1236_0x4da;
    undefined field1237_0x4db;
    undefined field1238_0x4dc;
    undefined field1239_0x4dd;
    undefined field1240_0x4de;
    undefined field1241_0x4df;
    undefined field1242_0x4e0;
    undefined field1243_0x4e1;
    undefined field1244_0x4e2;
    undefined field1245_0x4e3;
    undefined field1246_0x4e4;
    undefined field1247_0x4e5;
    undefined field1248_0x4e6;
    undefined field1249_0x4e7;
    undefined field1250_0x4e8;
    undefined field1251_0x4e9;
    undefined field1252_0x4ea;
    undefined field1253_0x4eb;
    undefined field1254_0x4ec;
    undefined field1255_0x4ed;
    undefined field1256_0x4ee;
    undefined field1257_0x4ef;
    undefined field1258_0x4f0;
    undefined field1259_0x4f1;
    undefined field1260_0x4f2;
    undefined field1261_0x4f3;
    undefined field1262_0x4f4;
    undefined field1263_0x4f5;
    undefined field1264_0x4f6;
    undefined field1265_0x4f7;
    undefined field1266_0x4f8;
    undefined field1267_0x4f9;
    undefined field1268_0x4fa;
    undefined field1269_0x4fb;
    undefined field1270_0x4fc;
    undefined field1271_0x4fd;
    undefined field1272_0x4fe;
    undefined field1273_0x4ff;
    undefined field1274_0x500;
    undefined field1275_0x501;
    undefined field1276_0x502;
    undefined field1277_0x503;
    undefined field1278_0x504;
    undefined field1279_0x505;
    undefined field1280_0x506;
    undefined field1281_0x507;
    undefined field1282_0x508;
    undefined field1283_0x509;
    undefined field1284_0x50a;
    undefined field1285_0x50b;
    undefined field1286_0x50c;
    undefined field1287_0x50d;
    undefined field1288_0x50e;
    undefined field1289_0x50f;
    undefined field1290_0x510;
    undefined field1291_0x511;
    undefined field1292_0x512;
    undefined field1293_0x513;
    undefined field1294_0x514;
    undefined field1295_0x515;
    undefined field1296_0x516;
    undefined field1297_0x517;
    undefined field1298_0x518;
    undefined field1299_0x519;
    undefined field1300_0x51a;
    undefined field1301_0x51b;
    undefined field1302_0x51c;
    undefined field1303_0x51d;
    undefined field1304_0x51e;
    undefined field1305_0x51f;
    undefined field1306_0x520;
    undefined field1307_0x521;
    undefined field1308_0x522;
    undefined field1309_0x523;
    undefined field1310_0x524;
    undefined field1311_0x525;
    undefined field1312_0x526;
    undefined field1313_0x527;
    undefined field1314_0x528;
    undefined field1315_0x529;
    undefined field1316_0x52a;
    undefined field1317_0x52b;
    undefined field1318_0x52c;
    undefined field1319_0x52d;
    undefined field1320_0x52e;
    undefined field1321_0x52f;
    undefined field1322_0x530;
    undefined field1323_0x531;
    undefined field1324_0x532;
    undefined field1325_0x533;
    undefined field1326_0x534;
    undefined field1327_0x535;
    undefined field1328_0x536;
    undefined field1329_0x537;
    undefined field1330_0x538;
    undefined field1331_0x539;
    undefined field1332_0x53a;
    undefined field1333_0x53b;
    undefined field1334_0x53c;
    undefined field1335_0x53d;
    undefined field1336_0x53e;
    undefined field1337_0x53f;
    undefined field1338_0x540;
    undefined field1339_0x541;
    undefined field1340_0x542;
    undefined field1341_0x543;
    undefined field1342_0x544;
    undefined field1343_0x545;
    undefined field1344_0x546;
    undefined field1345_0x547;
    undefined field1346_0x548;
    undefined field1347_0x549;
    undefined field1348_0x54a;
    undefined field1349_0x54b;
    undefined field1350_0x54c;
    undefined field1351_0x54d;
    undefined field1352_0x54e;
    undefined field1353_0x54f;
    undefined field1354_0x550;
    undefined field1355_0x551;
    undefined field1356_0x552;
    undefined field1357_0x553;
    undefined field1358_0x554;
    undefined field1359_0x555;
    undefined field1360_0x556;
    undefined field1361_0x557;
    undefined field1362_0x558;
    undefined field1363_0x559;
    undefined field1364_0x55a;
    undefined field1365_0x55b;
    undefined field1366_0x55c;
    undefined field1367_0x55d;
    undefined field1368_0x55e;
    undefined field1369_0x55f;
    undefined field1370_0x560;
    undefined field1371_0x561;
    undefined field1372_0x562;
    undefined field1373_0x563;
    undefined field1374_0x564;
    undefined field1375_0x565;
    undefined field1376_0x566;
    undefined field1377_0x567;
    undefined field1378_0x568;
    undefined field1379_0x569;
    undefined field1380_0x56a;
    undefined field1381_0x56b;
    undefined field1382_0x56c;
    undefined field1383_0x56d;
    undefined field1384_0x56e;
    undefined field1385_0x56f;
    undefined field1386_0x570;
    undefined field1387_0x571;
    undefined field1388_0x572;
    undefined field1389_0x573;
    undefined field1390_0x574;
    undefined field1391_0x575;
    undefined field1392_0x576;
    undefined field1393_0x577;
    undefined field1394_0x578;
    undefined field1395_0x579;
    undefined field1396_0x57a;
    undefined field1397_0x57b;
    undefined field1398_0x57c;
    undefined field1399_0x57d;
    undefined field1400_0x57e;
    undefined field1401_0x57f;
    undefined field1402_0x580;
    undefined field1403_0x581;
    undefined field1404_0x582;
    undefined field1405_0x583;
    undefined field1406_0x584;
    undefined field1407_0x585;
    undefined field1408_0x586;
    undefined field1409_0x587;
    undefined field1410_0x588;
    undefined field1411_0x589;
    undefined field1412_0x58a;
    undefined field1413_0x58b;
    undefined field1414_0x58c;
    undefined field1415_0x58d;
    undefined field1416_0x58e;
    undefined field1417_0x58f;
    undefined field1418_0x590;
    undefined field1419_0x591;
    undefined field1420_0x592;
    undefined field1421_0x593;
    undefined field1422_0x594;
    undefined field1423_0x595;
    undefined field1424_0x596;
    undefined field1425_0x597;
    undefined field1426_0x598;
    undefined field1427_0x599;
    undefined field1428_0x59a;
    undefined field1429_0x59b;
    undefined field1430_0x59c;
    undefined field1431_0x59d;
    undefined field1432_0x59e;
    undefined field1433_0x59f;
    undefined field1434_0x5a0;
    undefined field1435_0x5a1;
    undefined field1436_0x5a2;
    undefined field1437_0x5a3;
    undefined field1438_0x5a4;
    undefined field1439_0x5a5;
    undefined field1440_0x5a6;
    undefined field1441_0x5a7;
    undefined field1442_0x5a8;
    undefined field1443_0x5a9;
    undefined field1444_0x5aa;
    undefined field1445_0x5ab;
    undefined field1446_0x5ac;
    undefined field1447_0x5ad;
    undefined field1448_0x5ae;
    undefined field1449_0x5af;
    undefined field1450_0x5b0;
    undefined field1451_0x5b1;
    undefined field1452_0x5b2;
    undefined field1453_0x5b3;
    undefined field1454_0x5b4;
    undefined field1455_0x5b5;
    undefined field1456_0x5b6;
    undefined field1457_0x5b7;
    undefined field1458_0x5b8;
    undefined field1459_0x5b9;
    undefined field1460_0x5ba;
    undefined field1461_0x5bb;
    undefined field1462_0x5bc;
    undefined field1463_0x5bd;
    undefined field1464_0x5be;
    undefined field1465_0x5bf;
    undefined field1466_0x5c0;
    undefined field1467_0x5c1;
    undefined field1468_0x5c2;
    undefined field1469_0x5c3;
    undefined field1470_0x5c4;
    undefined field1471_0x5c5;
    undefined field1472_0x5c6;
    undefined field1473_0x5c7;
    undefined field1474_0x5c8;
    undefined field1475_0x5c9;
    undefined field1476_0x5ca;
    undefined field1477_0x5cb;
    undefined field1478_0x5cc;
    undefined field1479_0x5cd;
    undefined field1480_0x5ce;
    undefined field1481_0x5cf;
    undefined field1482_0x5d0;
    undefined field1483_0x5d1;
    undefined field1484_0x5d2;
    undefined field1485_0x5d3;
    undefined field1486_0x5d4;
    undefined field1487_0x5d5;
    undefined field1488_0x5d6;
    undefined field1489_0x5d7;
    undefined field1490_0x5d8;
    undefined field1491_0x5d9;
    undefined field1492_0x5da;
    undefined field1493_0x5db;
    undefined field1494_0x5dc;
    undefined field1495_0x5dd;
    undefined field1496_0x5de;
    undefined field1497_0x5df;
    undefined field1498_0x5e0;
    undefined field1499_0x5e1;
    undefined field1500_0x5e2;
    undefined field1501_0x5e3;
    undefined field1502_0x5e4;
    undefined field1503_0x5e5;
    undefined field1504_0x5e6;
    undefined field1505_0x5e7;
    undefined field1506_0x5e8;
    undefined field1507_0x5e9;
    undefined field1508_0x5ea;
    undefined field1509_0x5eb;
    undefined field1510_0x5ec;
    undefined field1511_0x5ed;
    undefined field1512_0x5ee;
    undefined field1513_0x5ef;
    undefined field1514_0x5f0;
    undefined field1515_0x5f1;
    undefined field1516_0x5f2;
    undefined field1517_0x5f3;
    undefined field1518_0x5f4;
    undefined field1519_0x5f5;
    undefined field1520_0x5f6;
    undefined field1521_0x5f7;
    undefined field1522_0x5f8;
    undefined field1523_0x5f9;
    undefined field1524_0x5fa;
    undefined field1525_0x5fb;
    undefined field1526_0x5fc;
    undefined field1527_0x5fd;
    undefined field1528_0x5fe;
    undefined field1529_0x5ff;
    undefined field1530_0x600;
    undefined field1531_0x601;
    undefined field1532_0x602;
    undefined field1533_0x603;
    undefined field1534_0x604;
    undefined field1535_0x605;
    undefined field1536_0x606;
    undefined field1537_0x607;
    undefined field1538_0x608;
    undefined field1539_0x609;
    undefined field1540_0x60a;
    undefined field1541_0x60b;
    undefined field1542_0x60c;
    undefined field1543_0x60d;
    undefined field1544_0x60e;
    undefined field1545_0x60f;
    undefined field1546_0x610;
    undefined field1547_0x611;
    undefined field1548_0x612;
    undefined field1549_0x613;
    undefined field1550_0x614;
    undefined field1551_0x615;
    undefined field1552_0x616;
    undefined field1553_0x617;
    undefined field1554_0x618;
    undefined field1555_0x619;
    undefined field1556_0x61a;
    undefined field1557_0x61b;
    undefined field1558_0x61c;
    undefined field1559_0x61d;
    undefined field1560_0x61e;
    undefined field1561_0x61f;
    undefined field1562_0x620;
    undefined field1563_0x621;
    undefined field1564_0x622;
    undefined field1565_0x623;
    undefined field1566_0x624;
    undefined field1567_0x625;
    undefined field1568_0x626;
    undefined field1569_0x627;
    undefined field1570_0x628;
    undefined field1571_0x629;
    undefined field1572_0x62a;
    undefined field1573_0x62b;
    undefined field1574_0x62c;
    undefined field1575_0x62d;
    undefined field1576_0x62e;
    undefined field1577_0x62f;
    undefined field1578_0x630;
    undefined field1579_0x631;
    undefined field1580_0x632;
    undefined field1581_0x633;
    undefined field1582_0x634;
    undefined field1583_0x635;
    undefined field1584_0x636;
    undefined field1585_0x637;
    undefined field1586_0x638;
    undefined field1587_0x639;
    undefined field1588_0x63a;
    undefined field1589_0x63b;
    undefined field1590_0x63c;
    undefined field1591_0x63d;
    undefined field1592_0x63e;
    undefined field1593_0x63f;
    undefined field1594_0x640;
    undefined field1595_0x641;
    undefined field1596_0x642;
    undefined field1597_0x643;
    undefined field1598_0x644;
    undefined field1599_0x645;
    undefined field1600_0x646;
    undefined field1601_0x647;
    undefined field1602_0x648;
    undefined field1603_0x649;
    undefined field1604_0x64a;
    undefined field1605_0x64b;
    undefined field1606_0x64c;
    undefined field1607_0x64d;
    undefined field1608_0x64e;
    undefined field1609_0x64f;
    undefined field1610_0x650;
    undefined field1611_0x651;
    undefined field1612_0x652;
    undefined field1613_0x653;
    undefined field1614_0x654;
    undefined field1615_0x655;
    undefined field1616_0x656;
    undefined field1617_0x657;
    undefined field1618_0x658;
    undefined field1619_0x659;
    undefined field1620_0x65a;
    undefined field1621_0x65b;
    undefined field1622_0x65c;
    undefined field1623_0x65d;
    undefined field1624_0x65e;
    undefined field1625_0x65f;
    undefined field1626_0x660;
    undefined field1627_0x661;
    undefined field1628_0x662;
    undefined field1629_0x663;
    undefined field1630_0x664;
    undefined field1631_0x665;
    undefined field1632_0x666;
    undefined field1633_0x667;
    undefined field1634_0x668;
    undefined field1635_0x669;
    undefined field1636_0x66a;
    undefined field1637_0x66b;
    undefined field1638_0x66c;
    undefined field1639_0x66d;
    undefined field1640_0x66e;
    undefined field1641_0x66f;
    undefined field1642_0x670;
    undefined field1643_0x671;
    undefined field1644_0x672;
    undefined field1645_0x673;
    undefined field1646_0x674;
    undefined field1647_0x675;
    undefined field1648_0x676;
    undefined field1649_0x677;
    undefined field1650_0x678;
    undefined field1651_0x679;
    undefined field1652_0x67a;
    undefined field1653_0x67b;
    undefined field1654_0x67c;
    undefined field1655_0x67d;
    undefined field1656_0x67e;
    undefined field1657_0x67f;
    undefined field1658_0x680;
    undefined field1659_0x681;
    undefined field1660_0x682;
    undefined field1661_0x683;
    undefined field1662_0x684;
    undefined field1663_0x685;
    undefined field1664_0x686;
    undefined field1665_0x687;
    undefined field1666_0x688;
    undefined field1667_0x689;
    undefined field1668_0x68a;
    undefined field1669_0x68b;
    undefined field1670_0x68c;
    undefined field1671_0x68d;
    undefined field1672_0x68e;
    undefined field1673_0x68f;
    undefined field1674_0x690;
    undefined field1675_0x691;
    undefined field1676_0x692;
    undefined field1677_0x693;
    undefined field1678_0x694;
    undefined field1679_0x695;
    undefined field1680_0x696;
    undefined field1681_0x697;
    undefined field1682_0x698;
    undefined field1683_0x699;
    undefined field1684_0x69a;
    undefined field1685_0x69b;
    undefined field1686_0x69c;
    undefined field1687_0x69d;
    undefined field1688_0x69e;
    undefined field1689_0x69f;
    undefined field1690_0x6a0;
    undefined field1691_0x6a1;
    undefined field1692_0x6a2;
    undefined field1693_0x6a3;
    undefined field1694_0x6a4;
    undefined field1695_0x6a5;
    undefined field1696_0x6a6;
    undefined field1697_0x6a7;
    undefined field1698_0x6a8;
    undefined field1699_0x6a9;
    undefined field1700_0x6aa;
    undefined field1701_0x6ab;
    undefined field1702_0x6ac;
    undefined field1703_0x6ad;
    undefined field1704_0x6ae;
    undefined field1705_0x6af;
    undefined field1706_0x6b0;
    undefined field1707_0x6b1;
    undefined field1708_0x6b2;
    undefined field1709_0x6b3;
    undefined field1710_0x6b4;
    undefined field1711_0x6b5;
    undefined field1712_0x6b6;
    undefined field1713_0x6b7;
    undefined field1714_0x6b8;
    undefined field1715_0x6b9;
    undefined field1716_0x6ba;
    undefined field1717_0x6bb;
    undefined field1718_0x6bc;
    undefined field1719_0x6bd;
    undefined field1720_0x6be;
    undefined field1721_0x6bf;
    undefined field1722_0x6c0;
    undefined field1723_0x6c1;
    undefined field1724_0x6c2;
    undefined field1725_0x6c3;
    undefined field1726_0x6c4;
    undefined field1727_0x6c5;
    undefined field1728_0x6c6;
    undefined field1729_0x6c7;
    undefined field1730_0x6c8;
    undefined field1731_0x6c9;
    undefined field1732_0x6ca;
    undefined field1733_0x6cb;
    undefined field1734_0x6cc;
    undefined field1735_0x6cd;
    undefined field1736_0x6ce;
    undefined field1737_0x6cf;
    undefined field1738_0x6d0;
    undefined field1739_0x6d1;
    undefined field1740_0x6d2;
    undefined field1741_0x6d3;
    undefined field1742_0x6d4;
    undefined field1743_0x6d5;
    undefined field1744_0x6d6;
    undefined field1745_0x6d7;
    undefined field1746_0x6d8;
    undefined field1747_0x6d9;
    undefined field1748_0x6da;
    undefined field1749_0x6db;
    undefined field1750_0x6dc;
    undefined field1751_0x6dd;
    undefined field1752_0x6de;
    undefined field1753_0x6df;
    undefined field1754_0x6e0;
    undefined field1755_0x6e1;
    undefined field1756_0x6e2;
    undefined field1757_0x6e3;
    undefined field1758_0x6e4;
    undefined field1759_0x6e5;
    undefined field1760_0x6e6;
    undefined field1761_0x6e7;
    undefined field1762_0x6e8;
    undefined field1763_0x6e9;
    undefined field1764_0x6ea;
    undefined field1765_0x6eb;
    undefined field1766_0x6ec;
    undefined field1767_0x6ed;
    undefined field1768_0x6ee;
    undefined field1769_0x6ef;
    undefined field1770_0x6f0;
    undefined field1771_0x6f1;
    undefined field1772_0x6f2;
    undefined field1773_0x6f3;
    undefined field1774_0x6f4;
    undefined field1775_0x6f5;
    undefined field1776_0x6f6;
    undefined field1777_0x6f7;
    undefined field1778_0x6f8;
    undefined field1779_0x6f9;
    undefined field1780_0x6fa;
    undefined field1781_0x6fb;
    undefined field1782_0x6fc;
    undefined field1783_0x6fd;
    undefined field1784_0x6fe;
    undefined field1785_0x6ff;
    undefined field1786_0x700;
    undefined field1787_0x701;
    undefined field1788_0x702;
    undefined field1789_0x703;
    undefined field1790_0x704;
    undefined field1791_0x705;
    undefined field1792_0x706;
    undefined field1793_0x707;
    undefined field1794_0x708;
    undefined field1795_0x709;
    undefined field1796_0x70a;
    undefined field1797_0x70b;
    undefined field1798_0x70c;
    undefined field1799_0x70d;
    undefined field1800_0x70e;
    undefined field1801_0x70f;
    undefined field1802_0x710;
    undefined field1803_0x711;
    undefined field1804_0x712;
    undefined field1805_0x713;
    undefined field1806_0x714;
    undefined field1807_0x715;
    undefined field1808_0x716;
    undefined field1809_0x717;
    undefined field1810_0x718;
    undefined field1811_0x719;
    undefined field1812_0x71a;
    undefined field1813_0x71b;
    undefined field1814_0x71c;
    undefined field1815_0x71d;
    undefined field1816_0x71e;
    undefined field1817_0x71f;
    undefined field1818_0x720;
    undefined field1819_0x721;
    undefined field1820_0x722;
    undefined field1821_0x723;
    undefined field1822_0x724;
    undefined field1823_0x725;
    undefined field1824_0x726;
    undefined field1825_0x727;
    undefined field1826_0x728;
    undefined field1827_0x729;
    undefined field1828_0x72a;
    undefined field1829_0x72b;
    undefined field1830_0x72c;
    undefined field1831_0x72d;
    undefined field1832_0x72e;
    undefined field1833_0x72f;
    undefined field1834_0x730;
    undefined field1835_0x731;
    undefined field1836_0x732;
    undefined field1837_0x733;
    undefined field1838_0x734;
    undefined field1839_0x735;
    undefined field1840_0x736;
    undefined field1841_0x737;
    undefined field1842_0x738;
    undefined field1843_0x739;
    undefined field1844_0x73a;
    undefined field1845_0x73b;
    undefined field1846_0x73c;
    undefined field1847_0x73d;
    undefined field1848_0x73e;
    undefined field1849_0x73f;
    undefined field1850_0x740;
    undefined field1851_0x741;
    undefined field1852_0x742;
    undefined field1853_0x743;
    undefined field1854_0x744;
    undefined field1855_0x745;
    undefined field1856_0x746;
    undefined field1857_0x747;
    undefined field1858_0x748;
    undefined field1859_0x749;
    undefined field1860_0x74a;
    undefined field1861_0x74b;
    undefined field1862_0x74c;
    undefined field1863_0x74d;
    undefined field1864_0x74e;
    undefined field1865_0x74f;
    undefined field1866_0x750;
    undefined field1867_0x751;
    undefined field1868_0x752;
    undefined field1869_0x753;
    undefined field1870_0x754;
    undefined field1871_0x755;
    undefined field1872_0x756;
    undefined field1873_0x757;
    undefined field1874_0x758;
    undefined field1875_0x759;
    undefined field1876_0x75a;
    undefined field1877_0x75b;
    undefined field1878_0x75c;
    undefined field1879_0x75d;
    undefined field1880_0x75e;
    undefined field1881_0x75f;
    undefined field1882_0x760;
    undefined field1883_0x761;
    undefined field1884_0x762;
    undefined field1885_0x763;
    undefined field1886_0x764;
    undefined field1887_0x765;
    undefined field1888_0x766;
    undefined field1889_0x767;
    undefined field1890_0x768;
    undefined field1891_0x769;
    undefined field1892_0x76a;
    undefined field1893_0x76b;
    undefined field1894_0x76c;
    undefined field1895_0x76d;
    undefined field1896_0x76e;
    undefined field1897_0x76f;
    undefined field1898_0x770;
    undefined field1899_0x771;
    undefined field1900_0x772;
    undefined field1901_0x773;
    undefined field1902_0x774;
    undefined field1903_0x775;
    undefined field1904_0x776;
    undefined field1905_0x777;
    undefined field1906_0x778;
    undefined field1907_0x779;
    undefined field1908_0x77a;
    undefined field1909_0x77b;
    undefined field1910_0x77c;
    undefined field1911_0x77d;
    undefined field1912_0x77e;
    undefined field1913_0x77f;
    undefined field1914_0x780;
    undefined field1915_0x781;
    undefined field1916_0x782;
    undefined field1917_0x783;
    undefined field1918_0x784;
    undefined field1919_0x785;
    undefined field1920_0x786;
    undefined field1921_0x787;
    undefined field1922_0x788;
    undefined field1923_0x789;
    undefined field1924_0x78a;
    undefined field1925_0x78b;
    undefined field1926_0x78c;
    undefined field1927_0x78d;
    undefined field1928_0x78e;
    undefined field1929_0x78f;
    undefined field1930_0x790;
    undefined field1931_0x791;
    undefined field1932_0x792;
    undefined field1933_0x793;
    undefined field1934_0x794;
    undefined field1935_0x795;
    undefined field1936_0x796;
    undefined field1937_0x797;
    undefined field1938_0x798;
    undefined field1939_0x799;
    undefined field1940_0x79a;
    undefined field1941_0x79b;
    undefined field1942_0x79c;
    undefined field1943_0x79d;
    undefined field1944_0x79e;
    undefined field1945_0x79f;
    undefined field1946_0x7a0;
    undefined field1947_0x7a1;
    undefined field1948_0x7a2;
    undefined field1949_0x7a3;
    undefined field1950_0x7a4;
    undefined field1951_0x7a5;
    undefined field1952_0x7a6;
    undefined field1953_0x7a7;
    undefined field1954_0x7a8;
    undefined field1955_0x7a9;
    undefined field1956_0x7aa;
    undefined field1957_0x7ab;
    undefined field1958_0x7ac;
    undefined field1959_0x7ad;
    undefined field1960_0x7ae;
    undefined field1961_0x7af;
    undefined field1962_0x7b0;
    undefined field1963_0x7b1;
    undefined field1964_0x7b2;
    undefined field1965_0x7b3;
    undefined field1966_0x7b4;
    undefined field1967_0x7b5;
    undefined field1968_0x7b6;
    undefined field1969_0x7b7;
    undefined field1970_0x7b8;
    undefined field1971_0x7b9;
    undefined field1972_0x7ba;
    undefined field1973_0x7bb;
    undefined field1974_0x7bc;
    undefined field1975_0x7bd;
    undefined field1976_0x7be;
    undefined field1977_0x7bf;
    undefined field1978_0x7c0;
    undefined field1979_0x7c1;
    undefined field1980_0x7c2;
    undefined field1981_0x7c3;
    undefined field1982_0x7c4;
    undefined field1983_0x7c5;
    undefined field1984_0x7c6;
    undefined field1985_0x7c7;
    undefined field1986_0x7c8;
    undefined field1987_0x7c9;
    undefined field1988_0x7ca;
    undefined field1989_0x7cb;
    undefined field1990_0x7cc;
    undefined field1991_0x7cd;
    undefined field1992_0x7ce;
    undefined field1993_0x7cf;
    undefined field1994_0x7d0;
    undefined field1995_0x7d1;
    undefined field1996_0x7d2;
    undefined field1997_0x7d3;
    undefined field1998_0x7d4;
    undefined field1999_0x7d5;
    undefined field2000_0x7d6;
    undefined field2001_0x7d7;
    undefined field2002_0x7d8;
    undefined field2003_0x7d9;
    undefined field2004_0x7da;
    undefined field2005_0x7db;
    undefined field2006_0x7dc;
    undefined field2007_0x7dd;
    undefined field2008_0x7de;
    undefined field2009_0x7df;
    undefined field2010_0x7e0;
    undefined field2011_0x7e1;
    undefined field2012_0x7e2;
    undefined field2013_0x7e3;
    undefined field2014_0x7e4;
    undefined field2015_0x7e5;
    undefined field2016_0x7e6;
    undefined field2017_0x7e7;
    undefined field2018_0x7e8;
    undefined field2019_0x7e9;
    undefined field2020_0x7ea;
    undefined field2021_0x7eb;
    undefined field2022_0x7ec;
    undefined field2023_0x7ed;
    undefined field2024_0x7ee;
    undefined field2025_0x7ef;
    undefined field2026_0x7f0;
    undefined field2027_0x7f1;
    undefined field2028_0x7f2;
    undefined field2029_0x7f3;
    undefined field2030_0x7f4;
    undefined field2031_0x7f5;
    undefined field2032_0x7f6;
    undefined field2033_0x7f7;
    undefined field2034_0x7f8;
    undefined field2035_0x7f9;
    undefined field2036_0x7fa;
    undefined field2037_0x7fb;
    undefined field2038_0x7fc;
    undefined field2039_0x7fd;
    undefined field2040_0x7fe;
    undefined field2041_0x7ff;
    undefined field2042_0x800;
    undefined field2043_0x801;
    undefined field2044_0x802;
    undefined field2045_0x803;
    undefined field2046_0x804;
    undefined field2047_0x805;
    undefined field2048_0x806;
    undefined field2049_0x807;
    undefined field2050_0x808;
    undefined field2051_0x809;
    undefined field2052_0x80a;
    undefined field2053_0x80b;
    undefined field2054_0x80c;
    undefined field2055_0x80d;
    undefined field2056_0x80e;
    undefined field2057_0x80f;
    undefined field2058_0x810;
    undefined field2059_0x811;
    undefined field2060_0x812;
    undefined field2061_0x813;
    undefined field2062_0x814;
    undefined field2063_0x815;
    undefined field2064_0x816;
    undefined field2065_0x817;
    undefined field2066_0x818;
    undefined field2067_0x819;
    undefined field2068_0x81a;
    undefined field2069_0x81b;
    undefined field2070_0x81c;
    undefined field2071_0x81d;
    undefined field2072_0x81e;
    undefined field2073_0x81f;
    undefined field2074_0x820;
    undefined field2075_0x821;
    undefined field2076_0x822;
    undefined field2077_0x823;
    undefined field2078_0x824;
    undefined field2079_0x825;
    undefined field2080_0x826;
    undefined field2081_0x827;
    undefined field2082_0x828;
    undefined field2083_0x829;
    undefined field2084_0x82a;
    undefined field2085_0x82b;
    undefined field2086_0x82c;
    undefined field2087_0x82d;
    undefined field2088_0x82e;
    undefined field2089_0x82f;
    undefined field2090_0x830;
    undefined field2091_0x831;
    undefined field2092_0x832;
    undefined field2093_0x833;
    undefined field2094_0x834;
    undefined field2095_0x835;
    undefined field2096_0x836;
    undefined field2097_0x837;
    undefined field2098_0x838;
    undefined field2099_0x839;
    undefined field2100_0x83a;
    undefined field2101_0x83b;
    undefined field2102_0x83c;
    undefined field2103_0x83d;
    undefined field2104_0x83e;
    undefined field2105_0x83f;
    undefined field2106_0x840;
    undefined field2107_0x841;
    undefined field2108_0x842;
    undefined field2109_0x843;
    undefined field2110_0x844;
    undefined field2111_0x845;
    undefined field2112_0x846;
    undefined field2113_0x847;
    undefined field2114_0x848;
    undefined field2115_0x849;
    undefined field2116_0x84a;
    undefined field2117_0x84b;
    undefined field2118_0x84c;
    undefined field2119_0x84d;
    undefined field2120_0x84e;
    undefined field2121_0x84f;
    undefined field2122_0x850;
    undefined field2123_0x851;
    undefined field2124_0x852;
    undefined field2125_0x853;
    undefined field2126_0x854;
    undefined field2127_0x855;
    undefined field2128_0x856;
    undefined field2129_0x857;
    undefined field2130_0x858;
    undefined field2131_0x859;
    undefined field2132_0x85a;
    undefined field2133_0x85b;
    undefined field2134_0x85c;
    undefined field2135_0x85d;
    undefined field2136_0x85e;
    undefined field2137_0x85f;
    undefined field2138_0x860;
    undefined field2139_0x861;
    undefined field2140_0x862;
    undefined field2141_0x863;
    undefined field2142_0x864;
    undefined field2143_0x865;
    undefined field2144_0x866;
    undefined field2145_0x867;
    undefined field2146_0x868;
    undefined field2147_0x869;
    undefined field2148_0x86a;
    undefined field2149_0x86b;
    undefined field2150_0x86c;
    undefined field2151_0x86d;
    undefined field2152_0x86e;
    undefined field2153_0x86f;
    undefined field2154_0x870;
    undefined field2155_0x871;
    undefined field2156_0x872;
    undefined field2157_0x873;
    undefined field2158_0x874;
    undefined field2159_0x875;
    undefined field2160_0x876;
    undefined field2161_0x877;
    undefined field2162_0x878;
    undefined field2163_0x879;
    undefined field2164_0x87a;
    undefined field2165_0x87b;
    undefined field2166_0x87c;
    undefined field2167_0x87d;
    undefined field2168_0x87e;
    undefined field2169_0x87f;
    undefined field2170_0x880;
    undefined field2171_0x881;
    undefined field2172_0x882;
    undefined field2173_0x883;
    undefined field2174_0x884;
    undefined field2175_0x885;
    undefined field2176_0x886;
    undefined field2177_0x887;
    undefined field2178_0x888;
    undefined field2179_0x889;
    undefined field2180_0x88a;
    undefined field2181_0x88b;
    undefined field2182_0x88c;
    undefined field2183_0x88d;
    undefined field2184_0x88e;
    undefined field2185_0x88f;
    undefined field2186_0x890;
    undefined field2187_0x891;
    undefined field2188_0x892;
    undefined field2189_0x893;
    undefined field2190_0x894;
    undefined field2191_0x895;
    undefined field2192_0x896;
    undefined field2193_0x897;
    undefined field2194_0x898;
    undefined field2195_0x899;
    undefined field2196_0x89a;
    undefined field2197_0x89b;
    undefined field2198_0x89c;
    undefined field2199_0x89d;
    undefined field2200_0x89e;
    undefined field2201_0x89f;
    undefined field2202_0x8a0;
    undefined field2203_0x8a1;
    undefined field2204_0x8a2;
    undefined field2205_0x8a3;
    undefined field2206_0x8a4;
    undefined field2207_0x8a5;
    undefined field2208_0x8a6;
    undefined field2209_0x8a7;
    undefined field2210_0x8a8;
    undefined field2211_0x8a9;
    undefined field2212_0x8aa;
    undefined field2213_0x8ab;
    undefined field2214_0x8ac;
    undefined field2215_0x8ad;
    undefined field2216_0x8ae;
    undefined field2217_0x8af;
    undefined field2218_0x8b0;
    undefined field2219_0x8b1;
    undefined field2220_0x8b2;
    undefined field2221_0x8b3;
    undefined field2222_0x8b4;
    undefined field2223_0x8b5;
    undefined field2224_0x8b6;
    undefined field2225_0x8b7;
    undefined field2226_0x8b8;
    undefined field2227_0x8b9;
    undefined field2228_0x8ba;
    undefined field2229_0x8bb;
    undefined field2230_0x8bc;
    undefined field2231_0x8bd;
    undefined field2232_0x8be;
    undefined field2233_0x8bf;
    undefined field2234_0x8c0;
    undefined field2235_0x8c1;
    undefined field2236_0x8c2;
    undefined field2237_0x8c3;
    undefined field2238_0x8c4;
    undefined field2239_0x8c5;
    undefined field2240_0x8c6;
    undefined field2241_0x8c7;
    undefined field2242_0x8c8;
    undefined field2243_0x8c9;
    undefined field2244_0x8ca;
    undefined field2245_0x8cb;
    undefined field2246_0x8cc;
    undefined field2247_0x8cd;
    undefined field2248_0x8ce;
    undefined field2249_0x8cf;
    undefined field2250_0x8d0;
    undefined field2251_0x8d1;
    undefined field2252_0x8d2;
    undefined field2253_0x8d3;
    undefined field2254_0x8d4;
    undefined field2255_0x8d5;
    undefined field2256_0x8d6;
    undefined field2257_0x8d7;
    undefined field2258_0x8d8;
    undefined field2259_0x8d9;
    undefined field2260_0x8da;
    undefined field2261_0x8db;
    undefined field2262_0x8dc;
    undefined field2263_0x8dd;
    undefined field2264_0x8de;
    undefined field2265_0x8df;
    undefined field2266_0x8e0;
    undefined field2267_0x8e1;
    undefined field2268_0x8e2;
    undefined field2269_0x8e3;
    undefined field2270_0x8e4;
    undefined field2271_0x8e5;
    undefined field2272_0x8e6;
    undefined field2273_0x8e7;
    undefined field2274_0x8e8;
    undefined field2275_0x8e9;
    undefined field2276_0x8ea;
    undefined field2277_0x8eb;
    undefined field2278_0x8ec;
    undefined field2279_0x8ed;
    undefined field2280_0x8ee;
    undefined field2281_0x8ef;
    undefined field2282_0x8f0;
    undefined field2283_0x8f1;
    undefined field2284_0x8f2;
    undefined field2285_0x8f3;
    undefined field2286_0x8f4;
    undefined field2287_0x8f5;
    undefined field2288_0x8f6;
    undefined field2289_0x8f7;
    undefined field2290_0x8f8;
    undefined field2291_0x8f9;
    undefined field2292_0x8fa;
    undefined field2293_0x8fb;
    undefined field2294_0x8fc;
    undefined field2295_0x8fd;
    undefined field2296_0x8fe;
    undefined field2297_0x8ff;
    undefined field2298_0x900;
    undefined field2299_0x901;
    undefined field2300_0x902;
    undefined field2301_0x903;
    undefined field2302_0x904;
    undefined field2303_0x905;
    undefined field2304_0x906;
    undefined field2305_0x907;
    undefined field2306_0x908;
    undefined field2307_0x909;
    undefined field2308_0x90a;
    undefined field2309_0x90b;
    undefined field2310_0x90c;
    undefined field2311_0x90d;
    undefined field2312_0x90e;
    undefined field2313_0x90f;
    undefined field2314_0x910;
    undefined field2315_0x911;
    undefined field2316_0x912;
    undefined field2317_0x913;
    undefined field2318_0x914;
    undefined field2319_0x915;
    undefined field2320_0x916;
    undefined field2321_0x917;
    undefined field2322_0x918;
    undefined field2323_0x919;
    undefined field2324_0x91a;
    undefined field2325_0x91b;
    undefined field2326_0x91c;
    undefined field2327_0x91d;
    undefined field2328_0x91e;
    undefined field2329_0x91f;
    undefined field2330_0x920;
    undefined field2331_0x921;
    undefined field2332_0x922;
    undefined field2333_0x923;
    undefined field2334_0x924;
    undefined field2335_0x925;
    undefined field2336_0x926;
    undefined field2337_0x927;
    undefined field2338_0x928;
    undefined field2339_0x929;
    undefined field2340_0x92a;
    undefined field2341_0x92b;
    undefined field2342_0x92c;
    undefined field2343_0x92d;
    undefined field2344_0x92e;
    undefined field2345_0x92f;
    undefined field2346_0x930;
    undefined field2347_0x931;
    undefined field2348_0x932;
    undefined field2349_0x933;
    undefined field2350_0x934;
    undefined field2351_0x935;
    undefined field2352_0x936;
    undefined field2353_0x937;
    undefined field2354_0x938;
    undefined field2355_0x939;
    undefined field2356_0x93a;
    undefined field2357_0x93b;
    undefined field2358_0x93c;
    undefined field2359_0x93d;
    undefined field2360_0x93e;
    undefined field2361_0x93f;
    undefined field2362_0x940;
    undefined field2363_0x941;
    undefined field2364_0x942;
    undefined field2365_0x943;
    undefined field2366_0x944;
    undefined field2367_0x945;
    undefined field2368_0x946;
    undefined field2369_0x947;
    undefined field2370_0x948;
    undefined field2371_0x949;
    undefined field2372_0x94a;
    undefined field2373_0x94b;
    undefined field2374_0x94c;
    undefined field2375_0x94d;
    undefined field2376_0x94e;
    undefined field2377_0x94f;
    undefined field2378_0x950;
    undefined field2379_0x951;
    undefined field2380_0x952;
    undefined field2381_0x953;
    undefined field2382_0x954;
    undefined field2383_0x955;
    undefined field2384_0x956;
    undefined field2385_0x957;
    undefined field2386_0x958;
    undefined field2387_0x959;
    undefined field2388_0x95a;
    undefined field2389_0x95b;
    undefined field2390_0x95c;
    undefined field2391_0x95d;
    undefined field2392_0x95e;
    undefined field2393_0x95f;
    undefined field2394_0x960;
    undefined field2395_0x961;
    undefined field2396_0x962;
    undefined field2397_0x963;
    undefined field2398_0x964;
    undefined field2399_0x965;
    undefined field2400_0x966;
    undefined field2401_0x967;
    undefined field2402_0x968;
    undefined field2403_0x969;
    undefined field2404_0x96a;
    undefined field2405_0x96b;
    undefined field2406_0x96c;
    undefined field2407_0x96d;
    undefined field2408_0x96e;
    undefined field2409_0x96f;
    undefined field2410_0x970;
    undefined field2411_0x971;
    undefined field2412_0x972;
    undefined field2413_0x973;
    undefined field2414_0x974;
    undefined field2415_0x975;
    undefined field2416_0x976;
    undefined field2417_0x977;
    undefined field2418_0x978;
    undefined field2419_0x979;
    undefined field2420_0x97a;
    undefined field2421_0x97b;
    undefined field2422_0x97c;
    undefined field2423_0x97d;
    undefined field2424_0x97e;
    undefined field2425_0x97f;
    undefined field2426_0x980;
    undefined field2427_0x981;
    undefined field2428_0x982;
    undefined field2429_0x983;
    undefined field2430_0x984;
    undefined field2431_0x985;
    undefined field2432_0x986;
    undefined field2433_0x987;
    undefined field2434_0x988;
    undefined field2435_0x989;
    undefined field2436_0x98a;
    undefined field2437_0x98b;
    undefined field2438_0x98c;
    undefined field2439_0x98d;
    undefined field2440_0x98e;
    undefined field2441_0x98f;
    undefined field2442_0x990;
    undefined field2443_0x991;
    undefined field2444_0x992;
    undefined field2445_0x993;
    undefined field2446_0x994;
    undefined field2447_0x995;
    undefined field2448_0x996;
    undefined field2449_0x997;
    undefined field2450_0x998;
    undefined field2451_0x999;
    undefined field2452_0x99a;
    undefined field2453_0x99b;
    undefined field2454_0x99c;
    undefined field2455_0x99d;
    undefined field2456_0x99e;
    undefined field2457_0x99f;
    undefined field2458_0x9a0;
    undefined field2459_0x9a1;
    undefined field2460_0x9a2;
    undefined field2461_0x9a3;
    undefined field2462_0x9a4;
    undefined field2463_0x9a5;
    undefined field2464_0x9a6;
    undefined field2465_0x9a7;
    undefined field2466_0x9a8;
    undefined field2467_0x9a9;
    undefined field2468_0x9aa;
    undefined field2469_0x9ab;
    undefined field2470_0x9ac;
    undefined field2471_0x9ad;
    undefined field2472_0x9ae;
    undefined field2473_0x9af;
    undefined field2474_0x9b0;
    undefined field2475_0x9b1;
    undefined field2476_0x9b2;
    undefined field2477_0x9b3;
    undefined field2478_0x9b4;
    undefined field2479_0x9b5;
    undefined field2480_0x9b6;
    undefined field2481_0x9b7;
    undefined field2482_0x9b8;
    undefined field2483_0x9b9;
    undefined field2484_0x9ba;
    undefined field2485_0x9bb;
    undefined field2486_0x9bc;
    undefined field2487_0x9bd;
    undefined field2488_0x9be;
    undefined field2489_0x9bf;
    undefined field2490_0x9c0;
    undefined field2491_0x9c1;
    undefined field2492_0x9c2;
    undefined field2493_0x9c3;
    undefined field2494_0x9c4;
    undefined field2495_0x9c5;
    undefined field2496_0x9c6;
    undefined field2497_0x9c7;
    undefined field2498_0x9c8;
    undefined field2499_0x9c9;
    undefined field2500_0x9ca;
    undefined field2501_0x9cb;
    undefined field2502_0x9cc;
    undefined field2503_0x9cd;
    undefined field2504_0x9ce;
    undefined field2505_0x9cf;
    undefined field2506_0x9d0;
    undefined field2507_0x9d1;
    undefined field2508_0x9d2;
    undefined field2509_0x9d3;
    undefined field2510_0x9d4;
    undefined field2511_0x9d5;
    undefined field2512_0x9d6;
    undefined field2513_0x9d7;
    undefined field2514_0x9d8;
    undefined field2515_0x9d9;
    undefined field2516_0x9da;
    undefined field2517_0x9db;
    undefined field2518_0x9dc;
    undefined field2519_0x9dd;
    undefined field2520_0x9de;
    undefined field2521_0x9df;
    undefined field2522_0x9e0;
    undefined field2523_0x9e1;
    undefined field2524_0x9e2;
    undefined field2525_0x9e3;
    undefined field2526_0x9e4;
    undefined field2527_0x9e5;
    undefined field2528_0x9e6;
    undefined field2529_0x9e7;
    undefined field2530_0x9e8;
    undefined field2531_0x9e9;
    undefined field2532_0x9ea;
    undefined field2533_0x9eb;
    undefined field2534_0x9ec;
    undefined field2535_0x9ed;
    undefined field2536_0x9ee;
    undefined field2537_0x9ef;
    undefined field2538_0x9f0;
    undefined field2539_0x9f1;
    undefined field2540_0x9f2;
    undefined field2541_0x9f3;
    undefined field2542_0x9f4;
    undefined field2543_0x9f5;
    undefined field2544_0x9f6;
    undefined field2545_0x9f7;
    undefined field2546_0x9f8;
    undefined field2547_0x9f9;
    undefined field2548_0x9fa;
    undefined field2549_0x9fb;
    undefined field2550_0x9fc;
    undefined field2551_0x9fd;
    undefined field2552_0x9fe;
    undefined field2553_0x9ff;
    undefined field2554_0xa00;
    undefined field2555_0xa01;
    undefined field2556_0xa02;
    undefined field2557_0xa03;
    undefined field2558_0xa04;
    undefined field2559_0xa05;
    undefined field2560_0xa06;
    undefined field2561_0xa07;
    undefined field2562_0xa08;
    undefined field2563_0xa09;
    undefined field2564_0xa0a;
    undefined field2565_0xa0b;
    undefined field2566_0xa0c;
    undefined field2567_0xa0d;
    undefined field2568_0xa0e;
    undefined field2569_0xa0f;
    undefined field2570_0xa10;
    undefined field2571_0xa11;
    undefined field2572_0xa12;
    undefined field2573_0xa13;
    undefined field2574_0xa14;
    undefined field2575_0xa15;
    undefined field2576_0xa16;
    undefined field2577_0xa17;
    undefined field2578_0xa18;
    undefined field2579_0xa19;
    undefined field2580_0xa1a;
    undefined field2581_0xa1b;
    undefined field2582_0xa1c;
    undefined field2583_0xa1d;
    undefined field2584_0xa1e;
    undefined field2585_0xa1f;
    undefined field2586_0xa20;
    undefined field2587_0xa21;
    undefined field2588_0xa22;
    undefined field2589_0xa23;
    undefined field2590_0xa24;
    undefined field2591_0xa25;
    undefined field2592_0xa26;
    undefined field2593_0xa27;
    undefined field2594_0xa28;
    undefined field2595_0xa29;
    undefined field2596_0xa2a;
    undefined field2597_0xa2b;
    undefined field2598_0xa2c;
    undefined field2599_0xa2d;
    undefined field2600_0xa2e;
    undefined field2601_0xa2f;
    undefined field2602_0xa30;
    undefined field2603_0xa31;
    undefined field2604_0xa32;
    undefined field2605_0xa33;
    undefined field2606_0xa34;
    undefined field2607_0xa35;
    undefined field2608_0xa36;
    undefined field2609_0xa37;
    undefined field2610_0xa38;
    undefined field2611_0xa39;
    undefined field2612_0xa3a;
    undefined field2613_0xa3b;
    undefined field2614_0xa3c;
    undefined field2615_0xa3d;
    undefined field2616_0xa3e;
    undefined field2617_0xa3f;
    undefined field2618_0xa40;
    undefined field2619_0xa41;
    undefined field2620_0xa42;
    undefined field2621_0xa43;
    undefined field2622_0xa44;
    undefined field2623_0xa45;
    undefined field2624_0xa46;
    undefined field2625_0xa47;
    undefined field2626_0xa48;
    undefined field2627_0xa49;
    undefined field2628_0xa4a;
    undefined field2629_0xa4b;
    undefined field2630_0xa4c;
    undefined field2631_0xa4d;
    undefined field2632_0xa4e;
    undefined field2633_0xa4f;
    undefined field2634_0xa50;
    undefined field2635_0xa51;
    undefined field2636_0xa52;
    undefined field2637_0xa53;
    undefined field2638_0xa54;
    undefined field2639_0xa55;
    undefined field2640_0xa56;
    undefined field2641_0xa57;
    undefined field2642_0xa58;
    undefined field2643_0xa59;
    undefined field2644_0xa5a;
    undefined field2645_0xa5b;
    undefined field2646_0xa5c;
    undefined field2647_0xa5d;
    undefined field2648_0xa5e;
    undefined field2649_0xa5f;
    undefined field2650_0xa60;
    undefined field2651_0xa61;
    undefined field2652_0xa62;
    undefined field2653_0xa63;
    undefined field2654_0xa64;
    undefined field2655_0xa65;
    undefined field2656_0xa66;
    undefined field2657_0xa67;
    undefined field2658_0xa68;
    undefined field2659_0xa69;
    undefined field2660_0xa6a;
    undefined field2661_0xa6b;
    undefined field2662_0xa6c;
    undefined field2663_0xa6d;
    undefined field2664_0xa6e;
    undefined field2665_0xa6f;
    undefined field2666_0xa70;
    undefined field2667_0xa71;
    undefined field2668_0xa72;
    undefined field2669_0xa73;
    undefined field2670_0xa74;
    undefined field2671_0xa75;
    undefined field2672_0xa76;
    undefined field2673_0xa77;
    undefined field2674_0xa78;
    undefined field2675_0xa79;
    undefined field2676_0xa7a;
    undefined field2677_0xa7b;
    undefined field2678_0xa7c;
    undefined field2679_0xa7d;
    undefined field2680_0xa7e;
    undefined field2681_0xa7f;
    undefined field2682_0xa80;
    undefined field2683_0xa81;
    undefined field2684_0xa82;
    undefined field2685_0xa83;
    undefined field2686_0xa84;
    undefined field2687_0xa85;
    undefined field2688_0xa86;
    undefined field2689_0xa87;
    undefined field2690_0xa88;
    undefined field2691_0xa89;
    undefined field2692_0xa8a;
    undefined field2693_0xa8b;
    undefined field2694_0xa8c;
    undefined field2695_0xa8d;
    undefined field2696_0xa8e;
    undefined field2697_0xa8f;
    undefined field2698_0xa90;
    undefined field2699_0xa91;
    undefined field2700_0xa92;
    undefined field2701_0xa93;
    undefined field2702_0xa94;
    undefined field2703_0xa95;
    undefined field2704_0xa96;
    undefined field2705_0xa97;
    undefined field2706_0xa98;
    undefined field2707_0xa99;
    undefined field2708_0xa9a;
    undefined field2709_0xa9b;
    undefined field2710_0xa9c;
    undefined field2711_0xa9d;
    undefined field2712_0xa9e;
    undefined field2713_0xa9f;
    undefined field2714_0xaa0;
    undefined field2715_0xaa1;
    undefined field2716_0xaa2;
    undefined field2717_0xaa3;
    undefined field2718_0xaa4;
    undefined field2719_0xaa5;
    undefined field2720_0xaa6;
    undefined field2721_0xaa7;
    undefined field2722_0xaa8;
    undefined field2723_0xaa9;
    undefined field2724_0xaaa;
    undefined field2725_0xaab;
    undefined field2726_0xaac;
    undefined field2727_0xaad;
    undefined field2728_0xaae;
    undefined field2729_0xaaf;
    undefined field2730_0xab0;
    undefined field2731_0xab1;
    undefined field2732_0xab2;
    undefined field2733_0xab3;
    undefined field2734_0xab4;
    undefined field2735_0xab5;
    undefined field2736_0xab6;
    undefined field2737_0xab7;
    undefined field2738_0xab8;
    undefined field2739_0xab9;
    undefined field2740_0xaba;
    undefined field2741_0xabb;
    undefined field2742_0xabc;
    undefined field2743_0xabd;
    undefined field2744_0xabe;
    undefined field2745_0xabf;
    undefined field2746_0xac0;
    undefined field2747_0xac1;
    undefined field2748_0xac2;
    undefined field2749_0xac3;
    undefined field2750_0xac4;
    undefined field2751_0xac5;
    undefined field2752_0xac6;
    undefined field2753_0xac7;
    undefined field2754_0xac8;
    undefined field2755_0xac9;
    undefined field2756_0xaca;
    undefined field2757_0xacb;
    undefined field2758_0xacc;
    undefined field2759_0xacd;
    undefined field2760_0xace;
    undefined field2761_0xacf;
    undefined field2762_0xad0;
    undefined field2763_0xad1;
    undefined field2764_0xad2;
    undefined field2765_0xad3;
    undefined field2766_0xad4;
    undefined field2767_0xad5;
    undefined field2768_0xad6;
    undefined field2769_0xad7;
    undefined field2770_0xad8;
    undefined field2771_0xad9;
    undefined field2772_0xada;
    undefined field2773_0xadb;
    undefined field2774_0xadc;
    undefined field2775_0xadd;
    undefined field2776_0xade;
    undefined field2777_0xadf;
    undefined field2778_0xae0;
    undefined field2779_0xae1;
    undefined field2780_0xae2;
    undefined field2781_0xae3;
    undefined field2782_0xae4;
    undefined field2783_0xae5;
    undefined field2784_0xae6;
    undefined field2785_0xae7;
    undefined field2786_0xae8;
    undefined field2787_0xae9;
    undefined field2788_0xaea;
    undefined field2789_0xaeb;
    undefined field2790_0xaec;
    undefined field2791_0xaed;
    undefined field2792_0xaee;
    undefined field2793_0xaef;
    undefined field2794_0xaf0;
    undefined field2795_0xaf1;
    undefined field2796_0xaf2;
    undefined field2797_0xaf3;
    undefined field2798_0xaf4;
    undefined field2799_0xaf5;
    undefined field2800_0xaf6;
    undefined field2801_0xaf7;
    undefined field2802_0xaf8;
    undefined field2803_0xaf9;
    undefined field2804_0xafa;
    undefined field2805_0xafb;
    undefined field2806_0xafc;
    undefined field2807_0xafd;
    undefined field2808_0xafe;
    undefined field2809_0xaff;
    undefined field2810_0xb00;
    undefined field2811_0xb01;
    undefined field2812_0xb02;
    undefined field2813_0xb03;
    undefined field2814_0xb04;
    undefined field2815_0xb05;
    undefined field2816_0xb06;
    undefined field2817_0xb07;
    undefined field2818_0xb08;
    undefined field2819_0xb09;
    undefined field2820_0xb0a;
    undefined field2821_0xb0b;
    undefined field2822_0xb0c;
    undefined field2823_0xb0d;
    undefined field2824_0xb0e;
    undefined field2825_0xb0f;
    undefined field2826_0xb10;
    undefined field2827_0xb11;
    undefined field2828_0xb12;
    undefined field2829_0xb13;
    undefined field2830_0xb14;
    undefined field2831_0xb15;
    undefined field2832_0xb16;
    undefined field2833_0xb17;
    undefined field2834_0xb18;
    undefined field2835_0xb19;
    undefined field2836_0xb1a;
    undefined field2837_0xb1b;
    undefined field2838_0xb1c;
    undefined field2839_0xb1d;
    undefined field2840_0xb1e;
    undefined field2841_0xb1f;
    undefined field2842_0xb20;
    undefined field2843_0xb21;
    undefined field2844_0xb22;
    undefined field2845_0xb23;
    undefined field2846_0xb24;
    undefined field2847_0xb25;
    undefined field2848_0xb26;
    undefined field2849_0xb27;
    undefined field2850_0xb28;
    undefined field2851_0xb29;
    undefined field2852_0xb2a;
    undefined field2853_0xb2b;
    undefined field2854_0xb2c;
    undefined field2855_0xb2d;
    undefined field2856_0xb2e;
    undefined field2857_0xb2f;
    undefined field2858_0xb30;
    undefined field2859_0xb31;
    undefined field2860_0xb32;
    undefined field2861_0xb33;
    undefined field2862_0xb34;
    undefined field2863_0xb35;
    undefined field2864_0xb36;
    undefined field2865_0xb37;
    undefined field2866_0xb38;
    undefined field2867_0xb39;
    undefined field2868_0xb3a;
    undefined field2869_0xb3b;
    undefined field2870_0xb3c;
    undefined field2871_0xb3d;
    undefined field2872_0xb3e;
    undefined field2873_0xb3f;
    undefined field2874_0xb40;
    undefined field2875_0xb41;
    undefined field2876_0xb42;
    undefined field2877_0xb43;
    undefined field2878_0xb44;
    undefined field2879_0xb45;
    undefined field2880_0xb46;
    undefined field2881_0xb47;
    undefined field2882_0xb48;
    undefined field2883_0xb49;
    undefined field2884_0xb4a;
    undefined field2885_0xb4b;
    undefined field2886_0xb4c;
    undefined field2887_0xb4d;
    undefined field2888_0xb4e;
    undefined field2889_0xb4f;
    undefined field2890_0xb50;
    undefined field2891_0xb51;
    undefined field2892_0xb52;
    undefined field2893_0xb53;
    undefined field2894_0xb54;
    undefined field2895_0xb55;
    undefined field2896_0xb56;
    undefined field2897_0xb57;
    undefined field2898_0xb58;
    undefined field2899_0xb59;
    undefined field2900_0xb5a;
    undefined field2901_0xb5b;
    undefined field2902_0xb5c;
    undefined field2903_0xb5d;
    undefined field2904_0xb5e;
    undefined field2905_0xb5f;
    undefined field2906_0xb60;
    undefined field2907_0xb61;
    undefined field2908_0xb62;
    undefined field2909_0xb63;
    undefined field2910_0xb64;
    undefined field2911_0xb65;
    undefined field2912_0xb66;
    undefined field2913_0xb67;
    undefined field2914_0xb68;
    undefined field2915_0xb69;
    undefined field2916_0xb6a;
    undefined field2917_0xb6b;
    undefined field2918_0xb6c;
    undefined field2919_0xb6d;
    undefined field2920_0xb6e;
    undefined field2921_0xb6f;
    undefined field2922_0xb70;
    undefined field2923_0xb71;
    undefined field2924_0xb72;
    undefined field2925_0xb73;
    undefined field2926_0xb74;
    undefined field2927_0xb75;
    undefined field2928_0xb76;
    undefined field2929_0xb77;
    undefined field2930_0xb78;
    undefined field2931_0xb79;
    undefined field2932_0xb7a;
    undefined field2933_0xb7b;
    undefined field2934_0xb7c;
    undefined field2935_0xb7d;
    undefined field2936_0xb7e;
    undefined field2937_0xb7f;
    undefined field2938_0xb80;
    undefined field2939_0xb81;
    undefined field2940_0xb82;
    undefined field2941_0xb83;
    undefined field2942_0xb84;
    undefined field2943_0xb85;
    undefined field2944_0xb86;
    undefined field2945_0xb87;
    undefined field2946_0xb88;
    undefined field2947_0xb89;
    undefined field2948_0xb8a;
    undefined field2949_0xb8b;
    undefined field2950_0xb8c;
    undefined field2951_0xb8d;
    undefined field2952_0xb8e;
    undefined field2953_0xb8f;
    undefined field2954_0xb90;
    undefined field2955_0xb91;
    undefined field2956_0xb92;
    undefined field2957_0xb93;
    undefined field2958_0xb94;
    undefined field2959_0xb95;
    undefined field2960_0xb96;
    undefined field2961_0xb97;
    undefined field2962_0xb98;
    undefined field2963_0xb99;
    undefined field2964_0xb9a;
    undefined field2965_0xb9b;
    undefined field2966_0xb9c;
    undefined field2967_0xb9d;
    undefined field2968_0xb9e;
    undefined field2969_0xb9f;
    undefined field2970_0xba0;
    undefined field2971_0xba1;
    undefined field2972_0xba2;
    undefined field2973_0xba3;
    undefined field2974_0xba4;
    undefined field2975_0xba5;
    undefined field2976_0xba6;
    undefined field2977_0xba7;
    undefined field2978_0xba8;
    undefined field2979_0xba9;
    undefined field2980_0xbaa;
    undefined field2981_0xbab;
    undefined field2982_0xbac;
    undefined field2983_0xbad;
    undefined field2984_0xbae;
    undefined field2985_0xbaf;
    undefined field2986_0xbb0;
    undefined field2987_0xbb1;
    undefined field2988_0xbb2;
    undefined field2989_0xbb3;
    undefined field2990_0xbb4;
    undefined field2991_0xbb5;
    undefined field2992_0xbb6;
    undefined field2993_0xbb7;
    undefined field2994_0xbb8;
    undefined field2995_0xbb9;
    undefined field2996_0xbba;
    undefined field2997_0xbbb;
    undefined field2998_0xbbc;
    undefined field2999_0xbbd;
    undefined field3000_0xbbe;
    undefined field3001_0xbbf;
    undefined field3002_0xbc0;
    undefined field3003_0xbc1;
    undefined field3004_0xbc2;
    undefined field3005_0xbc3;
    undefined field3006_0xbc4;
    undefined field3007_0xbc5;
    undefined field3008_0xbc6;
    undefined field3009_0xbc7;
    undefined field3010_0xbc8;
    undefined field3011_0xbc9;
    undefined field3012_0xbca;
    undefined field3013_0xbcb;
    undefined field3014_0xbcc;
    undefined field3015_0xbcd;
    undefined field3016_0xbce;
    undefined field3017_0xbcf;
    undefined field3018_0xbd0;
    undefined field3019_0xbd1;
    undefined field3020_0xbd2;
    undefined field3021_0xbd3;
    undefined field3022_0xbd4;
    undefined field3023_0xbd5;
    undefined field3024_0xbd6;
    undefined field3025_0xbd7;
    undefined field3026_0xbd8;
    undefined field3027_0xbd9;
    undefined field3028_0xbda;
    undefined field3029_0xbdb;
    undefined field3030_0xbdc;
    undefined field3031_0xbdd;
    undefined field3032_0xbde;
    undefined field3033_0xbdf;
    undefined field3034_0xbe0;
    undefined field3035_0xbe1;
    undefined field3036_0xbe2;
    undefined field3037_0xbe3;
    undefined field3038_0xbe4;
    undefined field3039_0xbe5;
    undefined field3040_0xbe6;
    undefined field3041_0xbe7;
    undefined field3042_0xbe8;
    undefined field3043_0xbe9;
    undefined field3044_0xbea;
    undefined field3045_0xbeb;
    undefined field3046_0xbec;
    undefined field3047_0xbed;
    undefined field3048_0xbee;
    undefined field3049_0xbef;
    undefined field3050_0xbf0;
    undefined field3051_0xbf1;
    undefined field3052_0xbf2;
    undefined field3053_0xbf3;
    undefined field3054_0xbf4;
    undefined field3055_0xbf5;
    undefined field3056_0xbf6;
    undefined field3057_0xbf7;
    undefined field3058_0xbf8;
    undefined field3059_0xbf9;
    undefined field3060_0xbfa;
    undefined field3061_0xbfb;
    undefined field3062_0xbfc;
    undefined field3063_0xbfd;
    undefined field3064_0xbfe;
    undefined field3065_0xbff;
    undefined field3066_0xc00;
    undefined field3067_0xc01;
    undefined field3068_0xc02;
    undefined field3069_0xc03;
    undefined field3070_0xc04;
    undefined field3071_0xc05;
    undefined field3072_0xc06;
    undefined field3073_0xc07;
    undefined field3074_0xc08;
    undefined field3075_0xc09;
    undefined field3076_0xc0a;
    undefined field3077_0xc0b;
    undefined field3078_0xc0c;
    undefined field3079_0xc0d;
    undefined field3080_0xc0e;
    undefined field3081_0xc0f;
    undefined field3082_0xc10;
    undefined field3083_0xc11;
    undefined field3084_0xc12;
    undefined field3085_0xc13;
    undefined field3086_0xc14;
    undefined field3087_0xc15;
    undefined field3088_0xc16;
    undefined field3089_0xc17;
    undefined field3090_0xc18;
    undefined field3091_0xc19;
    undefined field3092_0xc1a;
    undefined field3093_0xc1b;
    undefined field3094_0xc1c;
    undefined field3095_0xc1d;
    undefined field3096_0xc1e;
    undefined field3097_0xc1f;
    undefined field3098_0xc20;
    undefined field3099_0xc21;
    undefined field3100_0xc22;
    undefined field3101_0xc23;
    undefined field3102_0xc24;
    undefined field3103_0xc25;
    undefined field3104_0xc26;
    undefined field3105_0xc27;
    undefined field3106_0xc28;
    undefined field3107_0xc29;
    undefined field3108_0xc2a;
    undefined field3109_0xc2b;
    undefined field3110_0xc2c;
    undefined field3111_0xc2d;
    undefined field3112_0xc2e;
    undefined field3113_0xc2f;
    undefined field3114_0xc30;
    undefined field3115_0xc31;
    undefined field3116_0xc32;
    undefined field3117_0xc33;
    undefined field3118_0xc34;
    undefined field3119_0xc35;
    undefined field3120_0xc36;
    undefined field3121_0xc37;
    undefined field3122_0xc38;
    undefined field3123_0xc39;
    undefined field3124_0xc3a;
    undefined field3125_0xc3b;
    undefined field3126_0xc3c;
    undefined field3127_0xc3d;
    undefined field3128_0xc3e;
    undefined field3129_0xc3f;
    undefined field3130_0xc40;
    undefined field3131_0xc41;
    undefined field3132_0xc42;
    undefined field3133_0xc43;
    undefined field3134_0xc44;
    undefined field3135_0xc45;
    undefined field3136_0xc46;
    undefined field3137_0xc47;
    undefined field3138_0xc48;
    undefined field3139_0xc49;
    undefined field3140_0xc4a;
    undefined field3141_0xc4b;
    undefined field3142_0xc4c;
    undefined field3143_0xc4d;
    undefined field3144_0xc4e;
    undefined field3145_0xc4f;
    undefined field3146_0xc50;
    undefined field3147_0xc51;
    undefined field3148_0xc52;
    undefined field3149_0xc53;
    undefined field3150_0xc54;
    undefined field3151_0xc55;
    undefined field3152_0xc56;
    undefined field3153_0xc57;
    undefined field3154_0xc58;
    undefined field3155_0xc59;
    undefined field3156_0xc5a;
    undefined field3157_0xc5b;
    undefined field3158_0xc5c;
    undefined field3159_0xc5d;
    undefined field3160_0xc5e;
    undefined field3161_0xc5f;
    undefined field3162_0xc60;
    undefined field3163_0xc61;
    undefined field3164_0xc62;
    undefined field3165_0xc63;
    undefined field3166_0xc64;
    undefined field3167_0xc65;
    undefined field3168_0xc66;
    undefined field3169_0xc67;
    undefined field3170_0xc68;
    undefined field3171_0xc69;
    undefined field3172_0xc6a;
    undefined field3173_0xc6b;
    undefined field3174_0xc6c;
    undefined field3175_0xc6d;
    undefined field3176_0xc6e;
    undefined field3177_0xc6f;
    undefined field3178_0xc70;
    undefined field3179_0xc71;
    undefined field3180_0xc72;
    undefined field3181_0xc73;
    undefined field3182_0xc74;
    undefined field3183_0xc75;
    undefined field3184_0xc76;
    undefined field3185_0xc77;
    undefined field3186_0xc78;
    undefined field3187_0xc79;
    undefined field3188_0xc7a;
    undefined field3189_0xc7b;
    undefined field3190_0xc7c;
    undefined field3191_0xc7d;
    undefined field3192_0xc7e;
    undefined field3193_0xc7f;
    undefined field3194_0xc80;
    undefined field3195_0xc81;
    undefined field3196_0xc82;
    undefined field3197_0xc83;
    undefined field3198_0xc84;
    undefined field3199_0xc85;
    undefined field3200_0xc86;
    undefined field3201_0xc87;
    undefined field3202_0xc88;
    undefined field3203_0xc89;
    undefined field3204_0xc8a;
    undefined field3205_0xc8b;
    undefined field3206_0xc8c;
    undefined field3207_0xc8d;
    undefined field3208_0xc8e;
    undefined field3209_0xc8f;
    undefined field3210_0xc90;
    undefined field3211_0xc91;
    undefined field3212_0xc92;
    undefined field3213_0xc93;
    undefined field3214_0xc94;
    undefined field3215_0xc95;
    undefined field3216_0xc96;
    undefined field3217_0xc97;
    undefined field3218_0xc98;
    undefined field3219_0xc99;
    undefined field3220_0xc9a;
    undefined field3221_0xc9b;
    undefined field3222_0xc9c;
    undefined field3223_0xc9d;
    undefined field3224_0xc9e;
    undefined field3225_0xc9f;
    undefined field3226_0xca0;
    undefined field3227_0xca1;
    undefined field3228_0xca2;
    undefined field3229_0xca3;
    undefined field3230_0xca4;
    undefined field3231_0xca5;
    undefined field3232_0xca6;
    undefined field3233_0xca7;
    undefined field3234_0xca8;
    undefined field3235_0xca9;
    undefined field3236_0xcaa;
    undefined field3237_0xcab;
    undefined field3238_0xcac;
    undefined field3239_0xcad;
    undefined field3240_0xcae;
    undefined field3241_0xcaf;
    undefined field3242_0xcb0;
    undefined field3243_0xcb1;
    undefined field3244_0xcb2;
    undefined field3245_0xcb3;
    undefined field3246_0xcb4;
    undefined field3247_0xcb5;
    undefined field3248_0xcb6;
    undefined field3249_0xcb7;
    undefined field3250_0xcb8;
    undefined field3251_0xcb9;
    undefined field3252_0xcba;
    undefined field3253_0xcbb;
    undefined field3254_0xcbc;
    undefined field3255_0xcbd;
    undefined field3256_0xcbe;
    undefined field3257_0xcbf;
    undefined field3258_0xcc0;
    undefined field3259_0xcc1;
    undefined field3260_0xcc2;
    undefined field3261_0xcc3;
    undefined field3262_0xcc4;
    undefined field3263_0xcc5;
    undefined field3264_0xcc6;
    undefined field3265_0xcc7;
    undefined field3266_0xcc8;
    undefined field3267_0xcc9;
    undefined field3268_0xcca;
    undefined field3269_0xccb;
    undefined field3270_0xccc;
    undefined field3271_0xccd;
    undefined field3272_0xcce;
    undefined field3273_0xccf;
    undefined field3274_0xcd0;
    undefined field3275_0xcd1;
    undefined field3276_0xcd2;
    undefined field3277_0xcd3;
    undefined field3278_0xcd4;
    undefined field3279_0xcd5;
    undefined field3280_0xcd6;
    undefined field3281_0xcd7;
    undefined field3282_0xcd8;
    undefined field3283_0xcd9;
    undefined field3284_0xcda;
    undefined field3285_0xcdb;
    undefined field3286_0xcdc;
    undefined field3287_0xcdd;
    undefined field3288_0xcde;
    undefined field3289_0xcdf;
    undefined field3290_0xce0;
    undefined field3291_0xce1;
    undefined field3292_0xce2;
    undefined field3293_0xce3;
    undefined field3294_0xce4;
    undefined field3295_0xce5;
    undefined field3296_0xce6;
    undefined field3297_0xce7;
    undefined field3298_0xce8;
    undefined field3299_0xce9;
    undefined field3300_0xcea;
    undefined field3301_0xceb;
    undefined field3302_0xcec;
    undefined field3303_0xced;
    undefined field3304_0xcee;
    undefined field3305_0xcef;
    undefined field3306_0xcf0;
    undefined field3307_0xcf1;
    undefined field3308_0xcf2;
    undefined field3309_0xcf3;
    undefined field3310_0xcf4;
    undefined field3311_0xcf5;
    undefined field3312_0xcf6;
    undefined field3313_0xcf7;
    undefined field3314_0xcf8;
    undefined field3315_0xcf9;
    undefined field3316_0xcfa;
    undefined field3317_0xcfb;
    undefined field3318_0xcfc;
    undefined field3319_0xcfd;
    undefined field3320_0xcfe;
    undefined field3321_0xcff;
    undefined field3322_0xd00;
    undefined field3323_0xd01;
    undefined field3324_0xd02;
    undefined field3325_0xd03;
    undefined field3326_0xd04;
    undefined field3327_0xd05;
    undefined field3328_0xd06;
    undefined field3329_0xd07;
    undefined field3330_0xd08;
    undefined field3331_0xd09;
    undefined field3332_0xd0a;
    undefined field3333_0xd0b;
    undefined field3334_0xd0c;
    undefined field3335_0xd0d;
    undefined field3336_0xd0e;
    undefined field3337_0xd0f;
    undefined field3338_0xd10;
    undefined field3339_0xd11;
    undefined field3340_0xd12;
    undefined field3341_0xd13;
    undefined field3342_0xd14;
    undefined field3343_0xd15;
    undefined field3344_0xd16;
    undefined field3345_0xd17;
    undefined field3346_0xd18;
    undefined field3347_0xd19;
    undefined field3348_0xd1a;
    undefined field3349_0xd1b;
    undefined field3350_0xd1c;
    undefined field3351_0xd1d;
    undefined field3352_0xd1e;
    undefined field3353_0xd1f;
    undefined field3354_0xd20;
    undefined field3355_0xd21;
    undefined field3356_0xd22;
    undefined field3357_0xd23;
    undefined field3358_0xd24;
    undefined field3359_0xd25;
    undefined field3360_0xd26;
    undefined field3361_0xd27;
    undefined field3362_0xd28;
    undefined field3363_0xd29;
    undefined field3364_0xd2a;
    undefined field3365_0xd2b;
    undefined field3366_0xd2c;
    undefined field3367_0xd2d;
    undefined field3368_0xd2e;
    undefined field3369_0xd2f;
    undefined field3370_0xd30;
    undefined field3371_0xd31;
    undefined field3372_0xd32;
    undefined field3373_0xd33;
    undefined field3374_0xd34;
    undefined field3375_0xd35;
    undefined field3376_0xd36;
    undefined field3377_0xd37;
    undefined field3378_0xd38;
    undefined field3379_0xd39;
    undefined field3380_0xd3a;
    undefined field3381_0xd3b;
    undefined field3382_0xd3c;
    undefined field3383_0xd3d;
    undefined field3384_0xd3e;
    undefined field3385_0xd3f;
    undefined field3386_0xd40;
    undefined field3387_0xd41;
    undefined field3388_0xd42;
    undefined field3389_0xd43;
    undefined field3390_0xd44;
    undefined field3391_0xd45;
    undefined field3392_0xd46;
    undefined field3393_0xd47;
    undefined field3394_0xd48;
    undefined field3395_0xd49;
    undefined field3396_0xd4a;
    undefined field3397_0xd4b;
    undefined field3398_0xd4c;
    undefined field3399_0xd4d;
    undefined field3400_0xd4e;
    undefined field3401_0xd4f;
    undefined field3402_0xd50;
    undefined field3403_0xd51;
    undefined field3404_0xd52;
    undefined field3405_0xd53;
    undefined field3406_0xd54;
    undefined field3407_0xd55;
    undefined field3408_0xd56;
    undefined field3409_0xd57;
    undefined field3410_0xd58;
    undefined field3411_0xd59;
    undefined field3412_0xd5a;
    undefined field3413_0xd5b;
    undefined field3414_0xd5c;
    undefined field3415_0xd5d;
    undefined field3416_0xd5e;
    undefined field3417_0xd5f;
    undefined field3418_0xd60;
    undefined field3419_0xd61;
    undefined field3420_0xd62;
    undefined field3421_0xd63;
    undefined field3422_0xd64;
    undefined field3423_0xd65;
    undefined field3424_0xd66;
    undefined field3425_0xd67;
    undefined field3426_0xd68;
    undefined field3427_0xd69;
    undefined field3428_0xd6a;
    undefined field3429_0xd6b;
    undefined field3430_0xd6c;
    undefined field3431_0xd6d;
    undefined field3432_0xd6e;
    undefined field3433_0xd6f;
    undefined field3434_0xd70;
    undefined field3435_0xd71;
    undefined field3436_0xd72;
    undefined field3437_0xd73;
    undefined field3438_0xd74;
    undefined field3439_0xd75;
    undefined field3440_0xd76;
    undefined field3441_0xd77;
    undefined field3442_0xd78;
    undefined field3443_0xd79;
    undefined field3444_0xd7a;
    undefined field3445_0xd7b;
    undefined field3446_0xd7c;
    undefined field3447_0xd7d;
    undefined field3448_0xd7e;
    undefined field3449_0xd7f;
    undefined field3450_0xd80;
    undefined field3451_0xd81;
    undefined field3452_0xd82;
    undefined field3453_0xd83;
    undefined field3454_0xd84;
    undefined field3455_0xd85;
    undefined field3456_0xd86;
    undefined field3457_0xd87;
    undefined field3458_0xd88;
    undefined field3459_0xd89;
    undefined field3460_0xd8a;
    undefined field3461_0xd8b;
    undefined field3462_0xd8c;
    undefined field3463_0xd8d;
    undefined field3464_0xd8e;
    undefined field3465_0xd8f;
    undefined field3466_0xd90;
    undefined field3467_0xd91;
    undefined field3468_0xd92;
    undefined field3469_0xd93;
    undefined field3470_0xd94;
    undefined field3471_0xd95;
    undefined field3472_0xd96;
    undefined field3473_0xd97;
    undefined field3474_0xd98;
    undefined field3475_0xd99;
    undefined field3476_0xd9a;
    undefined field3477_0xd9b;
    undefined field3478_0xd9c;
    undefined field3479_0xd9d;
    undefined field3480_0xd9e;
    undefined field3481_0xd9f;
    undefined field3482_0xda0;
    undefined field3483_0xda1;
    undefined field3484_0xda2;
    undefined field3485_0xda3;
    undefined field3486_0xda4;
    undefined field3487_0xda5;
    undefined field3488_0xda6;
    undefined field3489_0xda7;
    undefined field3490_0xda8;
    undefined field3491_0xda9;
    undefined field3492_0xdaa;
    undefined field3493_0xdab;
    undefined field3494_0xdac;
    undefined field3495_0xdad;
    undefined field3496_0xdae;
    undefined field3497_0xdaf;
    undefined field3498_0xdb0;
    undefined field3499_0xdb1;
    undefined field3500_0xdb2;
    undefined field3501_0xdb3;
    undefined field3502_0xdb4;
    undefined field3503_0xdb5;
    undefined field3504_0xdb6;
    undefined field3505_0xdb7;
    undefined field3506_0xdb8;
    undefined field3507_0xdb9;
    undefined field3508_0xdba;
    undefined field3509_0xdbb;
    undefined field3510_0xdbc;
    undefined field3511_0xdbd;
    undefined field3512_0xdbe;
    undefined field3513_0xdbf;
    undefined field3514_0xdc0;
    undefined field3515_0xdc1;
    undefined field3516_0xdc2;
    undefined field3517_0xdc3;
    undefined field3518_0xdc4;
    undefined field3519_0xdc5;
    undefined field3520_0xdc6;
    undefined field3521_0xdc7;
    undefined field3522_0xdc8;
    undefined field3523_0xdc9;
    undefined field3524_0xdca;
    undefined field3525_0xdcb;
    undefined field3526_0xdcc;
    undefined field3527_0xdcd;
    undefined field3528_0xdce;
    undefined field3529_0xdcf;
    undefined field3530_0xdd0;
    undefined field3531_0xdd1;
    undefined field3532_0xdd2;
    undefined field3533_0xdd3;
    undefined field3534_0xdd4;
    undefined field3535_0xdd5;
    undefined field3536_0xdd6;
    undefined field3537_0xdd7;
    undefined field3538_0xdd8;
    undefined field3539_0xdd9;
    undefined field3540_0xdda;
    undefined field3541_0xddb;
    undefined field3542_0xddc;
    undefined field3543_0xddd;
    undefined field3544_0xdde;
    undefined field3545_0xddf;
    undefined field3546_0xde0;
    undefined field3547_0xde1;
    undefined field3548_0xde2;
    undefined field3549_0xde3;
    undefined field3550_0xde4;
    undefined field3551_0xde5;
    undefined field3552_0xde6;
    undefined field3553_0xde7;
    undefined field3554_0xde8;
    undefined field3555_0xde9;
    undefined field3556_0xdea;
    undefined field3557_0xdeb;
    undefined field3558_0xdec;
    undefined field3559_0xded;
    undefined field3560_0xdee;
    undefined field3561_0xdef;
    undefined field3562_0xdf0;
    undefined field3563_0xdf1;
    undefined field3564_0xdf2;
    undefined field3565_0xdf3;
    undefined field3566_0xdf4;
    undefined field3567_0xdf5;
    undefined field3568_0xdf6;
    undefined field3569_0xdf7;
    undefined field3570_0xdf8;
    undefined field3571_0xdf9;
    undefined field3572_0xdfa;
    undefined field3573_0xdfb;
    undefined field3574_0xdfc;
    undefined field3575_0xdfd;
    undefined field3576_0xdfe;
    undefined field3577_0xdff;
    undefined field3578_0xe00;
    undefined field3579_0xe01;
    undefined field3580_0xe02;
    undefined field3581_0xe03;
    undefined field3582_0xe04;
    undefined field3583_0xe05;
    undefined field3584_0xe06;
    undefined field3585_0xe07;
    undefined field3586_0xe08;
    undefined field3587_0xe09;
    undefined field3588_0xe0a;
    undefined field3589_0xe0b;
    undefined field3590_0xe0c;
    undefined field3591_0xe0d;
    undefined field3592_0xe0e;
    undefined field3593_0xe0f;
    undefined field3594_0xe10;
    undefined field3595_0xe11;
    undefined field3596_0xe12;
    undefined field3597_0xe13;
    undefined field3598_0xe14;
    undefined field3599_0xe15;
    undefined field3600_0xe16;
    undefined field3601_0xe17;
    undefined field3602_0xe18;
    undefined field3603_0xe19;
    undefined field3604_0xe1a;
    undefined field3605_0xe1b;
    undefined field3606_0xe1c;
    undefined field3607_0xe1d;
    undefined field3608_0xe1e;
    undefined field3609_0xe1f;
    undefined field3610_0xe20;
    undefined field3611_0xe21;
    undefined field3612_0xe22;
    undefined field3613_0xe23;
    undefined field3614_0xe24;
    undefined field3615_0xe25;
    undefined field3616_0xe26;
    undefined field3617_0xe27;
    undefined field3618_0xe28;
    undefined field3619_0xe29;
    undefined field3620_0xe2a;
    undefined field3621_0xe2b;
    undefined field3622_0xe2c;
    undefined field3623_0xe2d;
    undefined field3624_0xe2e;
    undefined field3625_0xe2f;
    undefined field3626_0xe30;
    undefined field3627_0xe31;
    undefined field3628_0xe32;
    undefined field3629_0xe33;
    undefined field3630_0xe34;
    undefined field3631_0xe35;
    undefined field3632_0xe36;
    undefined field3633_0xe37;
    undefined field3634_0xe38;
    undefined field3635_0xe39;
    undefined field3636_0xe3a;
    undefined field3637_0xe3b;
    undefined field3638_0xe3c;
    undefined field3639_0xe3d;
    undefined field3640_0xe3e;
    undefined field3641_0xe3f;
    undefined field3642_0xe40;
    undefined field3643_0xe41;
    undefined field3644_0xe42;
    undefined field3645_0xe43;
    undefined field3646_0xe44;
    undefined field3647_0xe45;
    undefined field3648_0xe46;
    undefined field3649_0xe47;
    undefined field3650_0xe48;
    undefined field3651_0xe49;
    undefined field3652_0xe4a;
    undefined field3653_0xe4b;
    undefined field3654_0xe4c;
    undefined field3655_0xe4d;
    undefined field3656_0xe4e;
    undefined field3657_0xe4f;
    undefined field3658_0xe50;
    undefined field3659_0xe51;
    undefined field3660_0xe52;
    undefined field3661_0xe53;
    undefined field3662_0xe54;
    undefined field3663_0xe55;
    undefined field3664_0xe56;
    undefined field3665_0xe57;
    undefined field3666_0xe58;
    undefined field3667_0xe59;
    undefined field3668_0xe5a;
    undefined field3669_0xe5b;
    undefined field3670_0xe5c;
    undefined field3671_0xe5d;
    undefined field3672_0xe5e;
    undefined field3673_0xe5f;
    undefined field3674_0xe60;
    undefined field3675_0xe61;
    undefined field3676_0xe62;
    undefined field3677_0xe63;
    undefined field3678_0xe64;
    undefined field3679_0xe65;
    undefined field3680_0xe66;
    undefined field3681_0xe67;
    undefined field3682_0xe68;
    undefined field3683_0xe69;
    undefined field3684_0xe6a;
    undefined field3685_0xe6b;
    undefined field3686_0xe6c;
    undefined field3687_0xe6d;
    undefined field3688_0xe6e;
    undefined field3689_0xe6f;
    undefined field3690_0xe70;
    undefined field3691_0xe71;
    undefined field3692_0xe72;
    undefined field3693_0xe73;
    undefined field3694_0xe74;
    undefined field3695_0xe75;
    undefined field3696_0xe76;
    undefined field3697_0xe77;
    undefined field3698_0xe78;
    undefined field3699_0xe79;
    undefined field3700_0xe7a;
    undefined field3701_0xe7b;
    undefined field3702_0xe7c;
    undefined field3703_0xe7d;
    undefined field3704_0xe7e;
    undefined field3705_0xe7f;
    undefined field3706_0xe80;
    undefined field3707_0xe81;
    undefined field3708_0xe82;
    undefined field3709_0xe83;
    undefined field3710_0xe84;
    undefined field3711_0xe85;
    undefined field3712_0xe86;
    undefined field3713_0xe87;
    undefined field3714_0xe88;
    undefined field3715_0xe89;
    undefined field3716_0xe8a;
    undefined field3717_0xe8b;
    undefined field3718_0xe8c;
    undefined field3719_0xe8d;
    undefined field3720_0xe8e;
    undefined field3721_0xe8f;
    undefined field3722_0xe90;
    undefined field3723_0xe91;
    undefined field3724_0xe92;
    undefined field3725_0xe93;
    undefined field3726_0xe94;
    undefined field3727_0xe95;
    undefined field3728_0xe96;
    undefined field3729_0xe97;
    undefined field3730_0xe98;
    undefined field3731_0xe99;
    undefined field3732_0xe9a;
    undefined field3733_0xe9b;
    undefined field3734_0xe9c;
    undefined field3735_0xe9d;
    undefined field3736_0xe9e;
    undefined field3737_0xe9f;
    undefined field3738_0xea0;
    undefined field3739_0xea1;
    undefined field3740_0xea2;
    undefined field3741_0xea3;
    undefined field3742_0xea4;
    undefined field3743_0xea5;
    undefined field3744_0xea6;
    undefined field3745_0xea7;
    undefined field3746_0xea8;
    undefined field3747_0xea9;
    undefined field3748_0xeaa;
    undefined field3749_0xeab;
    undefined field3750_0xeac;
    undefined field3751_0xead;
    undefined field3752_0xeae;
    undefined field3753_0xeaf;
    undefined field3754_0xeb0;
    undefined field3755_0xeb1;
    undefined field3756_0xeb2;
    undefined field3757_0xeb3;
    undefined field3758_0xeb4;
    undefined field3759_0xeb5;
    undefined field3760_0xeb6;
    undefined field3761_0xeb7;
    undefined field3762_0xeb8;
    undefined field3763_0xeb9;
    undefined field3764_0xeba;
    undefined field3765_0xebb;
    undefined field3766_0xebc;
    undefined field3767_0xebd;
    undefined field3768_0xebe;
    undefined field3769_0xebf;
    undefined field3770_0xec0;
    undefined field3771_0xec1;
    undefined field3772_0xec2;
    undefined field3773_0xec3;
    undefined field3774_0xec4;
    undefined field3775_0xec5;
    undefined field3776_0xec6;
    undefined field3777_0xec7;
    undefined field3778_0xec8;
    undefined field3779_0xec9;
    undefined field3780_0xeca;
    undefined field3781_0xecb;
    undefined field3782_0xecc;
    undefined field3783_0xecd;
    undefined field3784_0xece;
    undefined field3785_0xecf;
    undefined field3786_0xed0;
    undefined field3787_0xed1;
    undefined field3788_0xed2;
    undefined field3789_0xed3;
    undefined field3790_0xed4;
    undefined field3791_0xed5;
    undefined field3792_0xed6;
    undefined field3793_0xed7;
    undefined field3794_0xed8;
    undefined field3795_0xed9;
    undefined field3796_0xeda;
    undefined field3797_0xedb;
    undefined field3798_0xedc;
    undefined field3799_0xedd;
    undefined field3800_0xede;
    undefined field3801_0xedf;
    undefined field3802_0xee0;
    undefined field3803_0xee1;
    undefined field3804_0xee2;
    undefined field3805_0xee3;
    undefined field3806_0xee4;
    undefined field3807_0xee5;
    undefined field3808_0xee6;
    undefined field3809_0xee7;
    undefined field3810_0xee8;
    undefined field3811_0xee9;
    undefined field3812_0xeea;
    undefined field3813_0xeeb;
    undefined field3814_0xeec;
    undefined field3815_0xeed;
    undefined field3816_0xeee;
    undefined field3817_0xeef;
    undefined field3818_0xef0;
    undefined field3819_0xef1;
    undefined field3820_0xef2;
    undefined field3821_0xef3;
    undefined field3822_0xef4;
    undefined field3823_0xef5;
    undefined field3824_0xef6;
    undefined field3825_0xef7;
    undefined field3826_0xef8;
    undefined field3827_0xef9;
    undefined field3828_0xefa;
    undefined field3829_0xefb;
    undefined field3830_0xefc;
    undefined field3831_0xefd;
    undefined field3832_0xefe;
    undefined field3833_0xeff;
    undefined field3834_0xf00;
    undefined field3835_0xf01;
    undefined field3836_0xf02;
    undefined field3837_0xf03;
    undefined field3838_0xf04;
    undefined field3839_0xf05;
    undefined field3840_0xf06;
    undefined field3841_0xf07;
    undefined field3842_0xf08;
    undefined field3843_0xf09;
    undefined field3844_0xf0a;
    undefined field3845_0xf0b;
    undefined field3846_0xf0c;
    undefined field3847_0xf0d;
    undefined field3848_0xf0e;
    undefined field3849_0xf0f;
    undefined field3850_0xf10;
    undefined field3851_0xf11;
    undefined field3852_0xf12;
    undefined field3853_0xf13;
    undefined field3854_0xf14;
    undefined field3855_0xf15;
    undefined field3856_0xf16;
    undefined field3857_0xf17;
    undefined field3858_0xf18;
    undefined field3859_0xf19;
    undefined field3860_0xf1a;
    undefined field3861_0xf1b;
    undefined field3862_0xf1c;
    undefined field3863_0xf1d;
    undefined field3864_0xf1e;
    undefined field3865_0xf1f;
    undefined field3866_0xf20;
    undefined field3867_0xf21;
    undefined field3868_0xf22;
    undefined field3869_0xf23;
    undefined field3870_0xf24;
    undefined field3871_0xf25;
    undefined field3872_0xf26;
    undefined field3873_0xf27;
    undefined field3874_0xf28;
    undefined field3875_0xf29;
    undefined field3876_0xf2a;
    undefined field3877_0xf2b;
    undefined field3878_0xf2c;
    undefined field3879_0xf2d;
    undefined field3880_0xf2e;
    undefined field3881_0xf2f;
    undefined field3882_0xf30;
    undefined field3883_0xf31;
    undefined field3884_0xf32;
    undefined field3885_0xf33;
    undefined field3886_0xf34;
    undefined field3887_0xf35;
    undefined field3888_0xf36;
    undefined field3889_0xf37;
    undefined field3890_0xf38;
    undefined field3891_0xf39;
    undefined field3892_0xf3a;
    undefined field3893_0xf3b;
    undefined field3894_0xf3c;
    undefined field3895_0xf3d;
    undefined field3896_0xf3e;
    undefined field3897_0xf3f;
    undefined field3898_0xf40;
    undefined field3899_0xf41;
    undefined field3900_0xf42;
    undefined field3901_0xf43;
    undefined field3902_0xf44;
    undefined field3903_0xf45;
    undefined field3904_0xf46;
    undefined field3905_0xf47;
    undefined field3906_0xf48;
    undefined field3907_0xf49;
    undefined field3908_0xf4a;
    undefined field3909_0xf4b;
    undefined field3910_0xf4c;
    undefined field3911_0xf4d;
    undefined field3912_0xf4e;
    undefined field3913_0xf4f;
    undefined field3914_0xf50;
    undefined field3915_0xf51;
    undefined field3916_0xf52;
    undefined field3917_0xf53;
    undefined field3918_0xf54;
    undefined field3919_0xf55;
    undefined field3920_0xf56;
    undefined field3921_0xf57;
    undefined field3922_0xf58;
    undefined field3923_0xf59;
    undefined field3924_0xf5a;
    undefined field3925_0xf5b;
    undefined field3926_0xf5c;
    undefined field3927_0xf5d;
    undefined field3928_0xf5e;
    undefined field3929_0xf5f;
    undefined field3930_0xf60;
    undefined field3931_0xf61;
    undefined field3932_0xf62;
    undefined field3933_0xf63;
    undefined field3934_0xf64;
    undefined field3935_0xf65;
    undefined field3936_0xf66;
    undefined field3937_0xf67;
    undefined field3938_0xf68;
    undefined field3939_0xf69;
    undefined field3940_0xf6a;
    undefined field3941_0xf6b;
    undefined field3942_0xf6c;
    undefined field3943_0xf6d;
    undefined field3944_0xf6e;
    undefined field3945_0xf6f;
    undefined field3946_0xf70;
    undefined field3947_0xf71;
    undefined field3948_0xf72;
    undefined field3949_0xf73;
    undefined field3950_0xf74;
    undefined field3951_0xf75;
    undefined field3952_0xf76;
    undefined field3953_0xf77;
    undefined field3954_0xf78;
    undefined field3955_0xf79;
    undefined field3956_0xf7a;
    undefined field3957_0xf7b;
    undefined field3958_0xf7c;
    undefined field3959_0xf7d;
    undefined field3960_0xf7e;
    undefined field3961_0xf7f;
    undefined field3962_0xf80;
    undefined field3963_0xf81;
    undefined field3964_0xf82;
    undefined field3965_0xf83;
    undefined field3966_0xf84;
    undefined field3967_0xf85;
    undefined field3968_0xf86;
    undefined field3969_0xf87;
    undefined field3970_0xf88;
    undefined field3971_0xf89;
    undefined field3972_0xf8a;
    undefined field3973_0xf8b;
    undefined field3974_0xf8c;
    undefined field3975_0xf8d;
    undefined field3976_0xf8e;
    undefined field3977_0xf8f;
    undefined field3978_0xf90;
    undefined field3979_0xf91;
    undefined field3980_0xf92;
    undefined field3981_0xf93;
    undefined field3982_0xf94;
    undefined field3983_0xf95;
    undefined field3984_0xf96;
    undefined field3985_0xf97;
    undefined field3986_0xf98;
    undefined field3987_0xf99;
    undefined field3988_0xf9a;
    undefined field3989_0xf9b;
    undefined field3990_0xf9c;
    undefined field3991_0xf9d;
    undefined field3992_0xf9e;
    undefined field3993_0xf9f;
    undefined field3994_0xfa0;
    undefined field3995_0xfa1;
    undefined field3996_0xfa2;
    undefined field3997_0xfa3;
    undefined field3998_0xfa4;
    undefined field3999_0xfa5;
    undefined field4000_0xfa6;
    undefined field4001_0xfa7;
    undefined field4002_0xfa8;
    undefined field4003_0xfa9;
    undefined field4004_0xfaa;
    undefined field4005_0xfab;
    undefined field4006_0xfac;
    undefined field4007_0xfad;
    undefined field4008_0xfae;
    undefined field4009_0xfaf;
    undefined field4010_0xfb0;
    undefined field4011_0xfb1;
    undefined field4012_0xfb2;
    undefined field4013_0xfb3;
    undefined field4014_0xfb4;
    undefined field4015_0xfb5;
    undefined field4016_0xfb6;
    undefined field4017_0xfb7;
    undefined field4018_0xfb8;
    undefined field4019_0xfb9;
    undefined field4020_0xfba;
    undefined field4021_0xfbb;
    undefined field4022_0xfbc;
    undefined field4023_0xfbd;
    undefined field4024_0xfbe;
    undefined field4025_0xfbf;
    undefined field4026_0xfc0;
    undefined field4027_0xfc1;
    undefined field4028_0xfc2;
    undefined field4029_0xfc3;
    undefined field4030_0xfc4;
    undefined field4031_0xfc5;
    undefined field4032_0xfc6;
    undefined field4033_0xfc7;
    undefined field4034_0xfc8;
    undefined field4035_0xfc9;
    undefined field4036_0xfca;
    undefined field4037_0xfcb;
    undefined field4038_0xfcc;
    undefined field4039_0xfcd;
    undefined field4040_0xfce;
    undefined field4041_0xfcf;
    undefined field4042_0xfd0;
    undefined field4043_0xfd1;
    undefined field4044_0xfd2;
    undefined field4045_0xfd3;
    undefined field4046_0xfd4;
    undefined field4047_0xfd5;
    undefined field4048_0xfd6;
    undefined field4049_0xfd7;
    undefined field4050_0xfd8;
    undefined field4051_0xfd9;
    undefined field4052_0xfda;
    undefined field4053_0xfdb;
    undefined field4054_0xfdc;
    undefined field4055_0xfdd;
    undefined field4056_0xfde;
    undefined field4057_0xfdf;
    undefined field4058_0xfe0;
    undefined field4059_0xfe1;
    undefined field4060_0xfe2;
    undefined field4061_0xfe3;
    undefined field4062_0xfe4;
    undefined field4063_0xfe5;
    undefined field4064_0xfe6;
    undefined field4065_0xfe7;
    undefined field4066_0xfe8;
    undefined field4067_0xfe9;
    undefined field4068_0xfea;
    undefined field4069_0xfeb;
    undefined field4070_0xfec;
    undefined field4071_0xfed;
    undefined field4072_0xfee;
    undefined field4073_0xfef;
    undefined field4074_0xff0;
    undefined field4075_0xff1;
    undefined field4076_0xff2;
    undefined field4077_0xff3;
    undefined field4078_0xff4;
    undefined field4079_0xff5;
    undefined field4080_0xff6;
    undefined field4081_0xff7;
    undefined field4082_0xff8;
    undefined field4083_0xff9;
    undefined field4084_0xffa;
    undefined field4085_0xffb;
    undefined field4086_0xffc;
    undefined field4087_0xffd;
    undefined field4088_0xffe;
    undefined field4089_0xfff;
    undefined field4090_0x1000;
    undefined field4091_0x1001;
    undefined field4092_0x1002;
    undefined field4093_0x1003;
    undefined field4094_0x1004;
    undefined field4095_0x1005;
    undefined field4096_0x1006;
    undefined field4097_0x1007;
    undefined field4098_0x1008;
    undefined field4099_0x1009;
    undefined field4100_0x100a;
    undefined field4101_0x100b;
    undefined field4102_0x100c;
    undefined field4103_0x100d;
    undefined field4104_0x100e;
    undefined field4105_0x100f;
    undefined field4106_0x1010;
    undefined field4107_0x1011;
    undefined field4108_0x1012;
    undefined field4109_0x1013;
    undefined field4110_0x1014;
    undefined field4111_0x1015;
    undefined field4112_0x1016;
    undefined field4113_0x1017;
    undefined field4114_0x1018;
    undefined field4115_0x1019;
    undefined field4116_0x101a;
    undefined field4117_0x101b;
    undefined field4118_0x101c;
    undefined field4119_0x101d;
    undefined field4120_0x101e;
    undefined field4121_0x101f;
    undefined field4122_0x1020;
    undefined field4123_0x1021;
    undefined field4124_0x1022;
    undefined field4125_0x1023;
    undefined field4126_0x1024;
    undefined field4127_0x1025;
    undefined field4128_0x1026;
    undefined field4129_0x1027;
    undefined field4130_0x1028;
    undefined field4131_0x1029;
    undefined field4132_0x102a;
    undefined field4133_0x102b;
    undefined field4134_0x102c;
    undefined field4135_0x102d;
    undefined field4136_0x102e;
    undefined field4137_0x102f;
    undefined field4138_0x1030;
    undefined field4139_0x1031;
    undefined field4140_0x1032;
    undefined field4141_0x1033;
    undefined field4142_0x1034;
    undefined field4143_0x1035;
    undefined field4144_0x1036;
    undefined field4145_0x1037;
    undefined field4146_0x1038;
    undefined field4147_0x1039;
    undefined field4148_0x103a;
    undefined field4149_0x103b;
    undefined field4150_0x103c;
    undefined field4151_0x103d;
    undefined field4152_0x103e;
    undefined field4153_0x103f;
    undefined field4154_0x1040;
    undefined field4155_0x1041;
    undefined field4156_0x1042;
    undefined field4157_0x1043;
    undefined field4158_0x1044;
    undefined field4159_0x1045;
    undefined field4160_0x1046;
    undefined field4161_0x1047;
    undefined field4162_0x1048;
    undefined field4163_0x1049;
    undefined field4164_0x104a;
    undefined field4165_0x104b;
    undefined field4166_0x104c;
    undefined field4167_0x104d;
    undefined field4168_0x104e;
    undefined field4169_0x104f;
    undefined field4170_0x1050;
    undefined field4171_0x1051;
    undefined field4172_0x1052;
    undefined field4173_0x1053;
    undefined field4174_0x1054;
    undefined field4175_0x1055;
    undefined field4176_0x1056;
    undefined field4177_0x1057;
    undefined field4178_0x1058;
    undefined field4179_0x1059;
    undefined field4180_0x105a;
    undefined field4181_0x105b;
    undefined field4182_0x105c;
    undefined field4183_0x105d;
    undefined field4184_0x105e;
    undefined field4185_0x105f;
    undefined field4186_0x1060;
    undefined field4187_0x1061;
    undefined field4188_0x1062;
    undefined field4189_0x1063;
    undefined field4190_0x1064;
    undefined field4191_0x1065;
    undefined field4192_0x1066;
    undefined field4193_0x1067;
    undefined field4194_0x1068;
    undefined field4195_0x1069;
    undefined field4196_0x106a;
    undefined field4197_0x106b;
    undefined field4198_0x106c;
    undefined field4199_0x106d;
    undefined field4200_0x106e;
    undefined field4201_0x106f;
    undefined field4202_0x1070;
    undefined field4203_0x1071;
    undefined field4204_0x1072;
    undefined field4205_0x1073;
    undefined field4206_0x1074;
    undefined field4207_0x1075;
    undefined field4208_0x1076;
    undefined field4209_0x1077;
    undefined field4210_0x1078;
    undefined field4211_0x1079;
    undefined field4212_0x107a;
    undefined field4213_0x107b;
    undefined field4214_0x107c;
    undefined field4215_0x107d;
    undefined field4216_0x107e;
    undefined field4217_0x107f;
    undefined field4218_0x1080;
    undefined field4219_0x1081;
    undefined field4220_0x1082;
    undefined field4221_0x1083;
    undefined field4222_0x1084;
    undefined field4223_0x1085;
    undefined field4224_0x1086;
    undefined field4225_0x1087;
    undefined field4226_0x1088;
    undefined field4227_0x1089;
    undefined field4228_0x108a;
    undefined field4229_0x108b;
    undefined field4230_0x108c;
    undefined field4231_0x108d;
    undefined field4232_0x108e;
    undefined field4233_0x108f;
    undefined field4234_0x1090;
    undefined field4235_0x1091;
    undefined field4236_0x1092;
    undefined field4237_0x1093;
    undefined field4238_0x1094;
    undefined field4239_0x1095;
    undefined field4240_0x1096;
    undefined field4241_0x1097;
    undefined field4242_0x1098;
    undefined field4243_0x1099;
    undefined field4244_0x109a;
    undefined field4245_0x109b;
    undefined field4246_0x109c;
    undefined field4247_0x109d;
    undefined field4248_0x109e;
    undefined field4249_0x109f;
    undefined field4250_0x10a0;
    undefined field4251_0x10a1;
    undefined field4252_0x10a2;
    undefined field4253_0x10a3;
    undefined field4254_0x10a4;
    undefined field4255_0x10a5;
    undefined field4256_0x10a6;
    undefined field4257_0x10a7;
    undefined field4258_0x10a8;
    undefined field4259_0x10a9;
    undefined field4260_0x10aa;
    undefined field4261_0x10ab;
    undefined field4262_0x10ac;
    undefined field4263_0x10ad;
    undefined field4264_0x10ae;
    undefined field4265_0x10af;
    undefined field4266_0x10b0;
    undefined field4267_0x10b1;
    undefined field4268_0x10b2;
    undefined field4269_0x10b3;
    undefined field4270_0x10b4;
    undefined field4271_0x10b5;
    undefined field4272_0x10b6;
    undefined field4273_0x10b7;
    undefined field4274_0x10b8;
    undefined field4275_0x10b9;
    undefined field4276_0x10ba;
    undefined field4277_0x10bb;
    undefined field4278_0x10bc;
    undefined field4279_0x10bd;
    undefined field4280_0x10be;
    undefined field4281_0x10bf;
    undefined field4282_0x10c0;
    undefined field4283_0x10c1;
    undefined field4284_0x10c2;
    undefined field4285_0x10c3;
    undefined field4286_0x10c4;
    undefined field4287_0x10c5;
    undefined field4288_0x10c6;
    undefined field4289_0x10c7;
    undefined field4290_0x10c8;
    undefined field4291_0x10c9;
    undefined field4292_0x10ca;
    undefined field4293_0x10cb;
    undefined field4294_0x10cc;
    undefined field4295_0x10cd;
    undefined field4296_0x10ce;
    undefined field4297_0x10cf;
    undefined field4298_0x10d0;
    undefined field4299_0x10d1;
    undefined field4300_0x10d2;
    undefined field4301_0x10d3;
    undefined field4302_0x10d4;
    undefined field4303_0x10d5;
    undefined field4304_0x10d6;
    undefined field4305_0x10d7;
    undefined field4306_0x10d8;
    undefined field4307_0x10d9;
    undefined field4308_0x10da;
    undefined field4309_0x10db;
    undefined field4310_0x10dc;
    undefined field4311_0x10dd;
    undefined field4312_0x10de;
    undefined field4313_0x10df;
    undefined field4314_0x10e0;
    undefined field4315_0x10e1;
    undefined field4316_0x10e2;
    undefined field4317_0x10e3;
    undefined field4318_0x10e4;
    undefined field4319_0x10e5;
    undefined field4320_0x10e6;
    undefined field4321_0x10e7;
    undefined field4322_0x10e8;
    undefined field4323_0x10e9;
    undefined field4324_0x10ea;
    undefined field4325_0x10eb;
    undefined field4326_0x10ec;
    undefined field4327_0x10ed;
    undefined field4328_0x10ee;
    undefined field4329_0x10ef;
    undefined field4330_0x10f0;
    undefined field4331_0x10f1;
    undefined field4332_0x10f2;
    undefined field4333_0x10f3;
    undefined field4334_0x10f4;
    undefined field4335_0x10f5;
    undefined field4336_0x10f6;
    undefined field4337_0x10f7;
    undefined field4338_0x10f8;
    undefined field4339_0x10f9;
    undefined field4340_0x10fa;
    undefined field4341_0x10fb;
    undefined field4342_0x10fc;
    undefined field4343_0x10fd;
    undefined field4344_0x10fe;
    undefined field4345_0x10ff;
    undefined field4346_0x1100;
    undefined field4347_0x1101;
    undefined field4348_0x1102;
    undefined field4349_0x1103;
    undefined field4350_0x1104;
    undefined field4351_0x1105;
    undefined field4352_0x1106;
    undefined field4353_0x1107;
    undefined field4354_0x1108;
    undefined field4355_0x1109;
    undefined field4356_0x110a;
    undefined field4357_0x110b;
    undefined field4358_0x110c;
    undefined field4359_0x110d;
    undefined field4360_0x110e;
    undefined field4361_0x110f;
    undefined field4362_0x1110;
    undefined field4363_0x1111;
    undefined field4364_0x1112;
    undefined field4365_0x1113;
    undefined field4366_0x1114;
    undefined field4367_0x1115;
    undefined field4368_0x1116;
    undefined field4369_0x1117;
    undefined field4370_0x1118;
    undefined field4371_0x1119;
    undefined field4372_0x111a;
    undefined field4373_0x111b;
    undefined field4374_0x111c;
    undefined field4375_0x111d;
    undefined field4376_0x111e;
    undefined field4377_0x111f;
    undefined field4378_0x1120;
    undefined field4379_0x1121;
    undefined field4380_0x1122;
    undefined field4381_0x1123;
    undefined field4382_0x1124;
    undefined field4383_0x1125;
    undefined field4384_0x1126;
    undefined field4385_0x1127;
    undefined field4386_0x1128;
    undefined field4387_0x1129;
    undefined field4388_0x112a;
    undefined field4389_0x112b;
    undefined field4390_0x112c;
    undefined field4391_0x112d;
    undefined field4392_0x112e;
    undefined field4393_0x112f;
    undefined field4394_0x1130;
    undefined field4395_0x1131;
    undefined field4396_0x1132;
    undefined field4397_0x1133;
    undefined field4398_0x1134;
    undefined field4399_0x1135;
    undefined field4400_0x1136;
    undefined field4401_0x1137;
    undefined field4402_0x1138;
    undefined field4403_0x1139;
    undefined field4404_0x113a;
    undefined field4405_0x113b;
    undefined field4406_0x113c;
    undefined field4407_0x113d;
    undefined field4408_0x113e;
    undefined field4409_0x113f;
    undefined field4410_0x1140;
    undefined field4411_0x1141;
    undefined field4412_0x1142;
    undefined field4413_0x1143;
    undefined field4414_0x1144;
    undefined field4415_0x1145;
    undefined field4416_0x1146;
    undefined field4417_0x1147;
    undefined field4418_0x1148;
    undefined field4419_0x1149;
    undefined field4420_0x114a;
    undefined field4421_0x114b;
    undefined field4422_0x114c;
    undefined field4423_0x114d;
    undefined field4424_0x114e;
    undefined field4425_0x114f;
    undefined field4426_0x1150;
    undefined field4427_0x1151;
    undefined field4428_0x1152;
    undefined field4429_0x1153;
    undefined field4430_0x1154;
    undefined field4431_0x1155;
    undefined field4432_0x1156;
    undefined field4433_0x1157;
    undefined field4434_0x1158;
    undefined field4435_0x1159;
    undefined field4436_0x115a;
    undefined field4437_0x115b;
    undefined field4438_0x115c;
    undefined field4439_0x115d;
    undefined field4440_0x115e;
    undefined field4441_0x115f;
    undefined field4442_0x1160;
    undefined field4443_0x1161;
    undefined field4444_0x1162;
    undefined field4445_0x1163;
    undefined field4446_0x1164;
    undefined field4447_0x1165;
    undefined field4448_0x1166;
    undefined field4449_0x1167;
    undefined field4450_0x1168;
    undefined field4451_0x1169;
    undefined field4452_0x116a;
    undefined field4453_0x116b;
    undefined field4454_0x116c;
    undefined field4455_0x116d;
    undefined field4456_0x116e;
    undefined field4457_0x116f;
    undefined field4458_0x1170;
    undefined field4459_0x1171;
    undefined field4460_0x1172;
    undefined field4461_0x1173;
    undefined field4462_0x1174;
    undefined field4463_0x1175;
    undefined field4464_0x1176;
    undefined field4465_0x1177;
    undefined field4466_0x1178;
    undefined field4467_0x1179;
    undefined field4468_0x117a;
    undefined field4469_0x117b;
    undefined field4470_0x117c;
    undefined field4471_0x117d;
    undefined field4472_0x117e;
    undefined field4473_0x117f;
    undefined field4474_0x1180;
    undefined field4475_0x1181;
    undefined field4476_0x1182;
    undefined field4477_0x1183;
    undefined field4478_0x1184;
    undefined field4479_0x1185;
    undefined field4480_0x1186;
    undefined field4481_0x1187;
    undefined field4482_0x1188;
    undefined field4483_0x1189;
    undefined field4484_0x118a;
    undefined field4485_0x118b;
    undefined field4486_0x118c;
    undefined field4487_0x118d;
    undefined field4488_0x118e;
    undefined field4489_0x118f;
    undefined field4490_0x1190;
    undefined field4491_0x1191;
    undefined field4492_0x1192;
    undefined field4493_0x1193;
    undefined field4494_0x1194;
    undefined field4495_0x1195;
    undefined field4496_0x1196;
    undefined field4497_0x1197;
    undefined field4498_0x1198;
    undefined field4499_0x1199;
    undefined field4500_0x119a;
    undefined field4501_0x119b;
    undefined field4502_0x119c;
    undefined field4503_0x119d;
    undefined field4504_0x119e;
    undefined field4505_0x119f;
    undefined field4506_0x11a0;
    undefined field4507_0x11a1;
    undefined field4508_0x11a2;
    undefined field4509_0x11a3;
    undefined field4510_0x11a4;
    undefined field4511_0x11a5;
    undefined field4512_0x11a6;
    undefined field4513_0x11a7;
    undefined field4514_0x11a8;
    undefined field4515_0x11a9;
    undefined field4516_0x11aa;
    undefined field4517_0x11ab;
    undefined field4518_0x11ac;
    undefined field4519_0x11ad;
    undefined field4520_0x11ae;
    undefined field4521_0x11af;
    undefined field4522_0x11b0;
    undefined field4523_0x11b1;
    undefined field4524_0x11b2;
    undefined field4525_0x11b3;
    undefined field4526_0x11b4;
    undefined field4527_0x11b5;
    undefined field4528_0x11b6;
    undefined field4529_0x11b7;
    undefined field4530_0x11b8;
    undefined field4531_0x11b9;
    undefined field4532_0x11ba;
    undefined field4533_0x11bb;
    undefined field4534_0x11bc;
    undefined field4535_0x11bd;
    undefined field4536_0x11be;
    undefined field4537_0x11bf;
    undefined field4538_0x11c0;
    undefined field4539_0x11c1;
    undefined field4540_0x11c2;
    undefined field4541_0x11c3;
    undefined field4542_0x11c4;
    undefined field4543_0x11c5;
    undefined field4544_0x11c6;
    undefined field4545_0x11c7;
    undefined field4546_0x11c8;
    undefined field4547_0x11c9;
    undefined field4548_0x11ca;
    undefined field4549_0x11cb;
    undefined field4550_0x11cc;
    undefined field4551_0x11cd;
    undefined field4552_0x11ce;
    undefined field4553_0x11cf;
    undefined field4554_0x11d0;
    undefined field4555_0x11d1;
    undefined field4556_0x11d2;
    undefined field4557_0x11d3;
    undefined field4558_0x11d4;
    undefined field4559_0x11d5;
    undefined field4560_0x11d6;
    undefined field4561_0x11d7;
    undefined field4562_0x11d8;
    undefined field4563_0x11d9;
    undefined field4564_0x11da;
    undefined field4565_0x11db;
    undefined field4566_0x11dc;
    undefined field4567_0x11dd;
    undefined field4568_0x11de;
    undefined field4569_0x11df;
    undefined field4570_0x11e0;
    undefined field4571_0x11e1;
    undefined field4572_0x11e2;
    undefined field4573_0x11e3;
    undefined field4574_0x11e4;
    undefined field4575_0x11e5;
    undefined field4576_0x11e6;
    undefined field4577_0x11e7;
    undefined field4578_0x11e8;
    undefined field4579_0x11e9;
    undefined field4580_0x11ea;
    undefined field4581_0x11eb;
    undefined field4582_0x11ec;
    undefined field4583_0x11ed;
    undefined field4584_0x11ee;
    undefined field4585_0x11ef;
    undefined field4586_0x11f0;
    undefined field4587_0x11f1;
    undefined field4588_0x11f2;
    undefined field4589_0x11f3;
    undefined field4590_0x11f4;
    undefined field4591_0x11f5;
    undefined field4592_0x11f6;
    undefined field4593_0x11f7;
    undefined field4594_0x11f8;
    undefined field4595_0x11f9;
    undefined field4596_0x11fa;
    undefined field4597_0x11fb;
    undefined field4598_0x11fc;
    undefined field4599_0x11fd;
    undefined field4600_0x11fe;
    undefined field4601_0x11ff;
    undefined field4602_0x1200;
    undefined field4603_0x1201;
    undefined field4604_0x1202;
    undefined field4605_0x1203;
    undefined field4606_0x1204;
    undefined field4607_0x1205;
    undefined field4608_0x1206;
    undefined field4609_0x1207;
    undefined field4610_0x1208;
    undefined field4611_0x1209;
    undefined field4612_0x120a;
    undefined field4613_0x120b;
    undefined field4614_0x120c;
    undefined field4615_0x120d;
    undefined field4616_0x120e;
    undefined field4617_0x120f;
    undefined field4618_0x1210;
    undefined field4619_0x1211;
    undefined field4620_0x1212;
    undefined field4621_0x1213;
    undefined field4622_0x1214;
    undefined field4623_0x1215;
    undefined field4624_0x1216;
    undefined field4625_0x1217;
    undefined field4626_0x1218;
    undefined field4627_0x1219;
    undefined field4628_0x121a;
    undefined field4629_0x121b;
    undefined field4630_0x121c;
    undefined field4631_0x121d;
    undefined field4632_0x121e;
    undefined field4633_0x121f;
    undefined field4634_0x1220;
    undefined field4635_0x1221;
    undefined field4636_0x1222;
    undefined field4637_0x1223;
    undefined field4638_0x1224;
    undefined field4639_0x1225;
    undefined field4640_0x1226;
    undefined field4641_0x1227;
    undefined field4642_0x1228;
    undefined field4643_0x1229;
    undefined field4644_0x122a;
    undefined field4645_0x122b;
    undefined field4646_0x122c;
    undefined field4647_0x122d;
    undefined field4648_0x122e;
    undefined field4649_0x122f;
    undefined field4650_0x1230;
    undefined field4651_0x1231;
    undefined field4652_0x1232;
    undefined field4653_0x1233;
    undefined field4654_0x1234;
    undefined field4655_0x1235;
    undefined field4656_0x1236;
    undefined field4657_0x1237;
    undefined field4658_0x1238;
    undefined field4659_0x1239;
    undefined field4660_0x123a;
    undefined field4661_0x123b;
    undefined field4662_0x123c;
    undefined field4663_0x123d;
    undefined field4664_0x123e;
    undefined field4665_0x123f;
    undefined field4666_0x1240;
    undefined field4667_0x1241;
    undefined field4668_0x1242;
    undefined field4669_0x1243;
    undefined field4670_0x1244;
    undefined field4671_0x1245;
    undefined field4672_0x1246;
    undefined field4673_0x1247;
    undefined field4674_0x1248;
    undefined field4675_0x1249;
    undefined field4676_0x124a;
    undefined field4677_0x124b;
    undefined field4678_0x124c;
    undefined field4679_0x124d;
    undefined field4680_0x124e;
    undefined field4681_0x124f;
    undefined field4682_0x1250;
    undefined field4683_0x1251;
    undefined field4684_0x1252;
    undefined field4685_0x1253;
    undefined field4686_0x1254;
    undefined field4687_0x1255;
    undefined field4688_0x1256;
    undefined field4689_0x1257;
    undefined field4690_0x1258;
    undefined field4691_0x1259;
    undefined field4692_0x125a;
    undefined field4693_0x125b;
    undefined field4694_0x125c;
    undefined field4695_0x125d;
    undefined field4696_0x125e;
    undefined field4697_0x125f;
    undefined field4698_0x1260;
    undefined field4699_0x1261;
    undefined field4700_0x1262;
    undefined field4701_0x1263;
    undefined field4702_0x1264;
    undefined field4703_0x1265;
    undefined field4704_0x1266;
    undefined field4705_0x1267;
    undefined field4706_0x1268;
    undefined field4707_0x1269;
    undefined field4708_0x126a;
    undefined field4709_0x126b;
    undefined field4710_0x126c;
    undefined field4711_0x126d;
    undefined field4712_0x126e;
    undefined field4713_0x126f;
    undefined field4714_0x1270;
    undefined field4715_0x1271;
    undefined field4716_0x1272;
    undefined field4717_0x1273;
    undefined field4718_0x1274;
    undefined field4719_0x1275;
    undefined field4720_0x1276;
    undefined field4721_0x1277;
    undefined field4722_0x1278;
    undefined field4723_0x1279;
    undefined field4724_0x127a;
    undefined field4725_0x127b;
    undefined field4726_0x127c;
    undefined field4727_0x127d;
    undefined field4728_0x127e;
    undefined field4729_0x127f;
    undefined field4730_0x1280;
    undefined field4731_0x1281;
    undefined field4732_0x1282;
    undefined field4733_0x1283;
    undefined field4734_0x1284;
    undefined field4735_0x1285;
    undefined field4736_0x1286;
    undefined field4737_0x1287;
    undefined field4738_0x1288;
    undefined field4739_0x1289;
    undefined field4740_0x128a;
    undefined field4741_0x128b;
    undefined field4742_0x128c;
    undefined field4743_0x128d;
    undefined field4744_0x128e;
    undefined field4745_0x128f;
    undefined field4746_0x1290;
    undefined field4747_0x1291;
    undefined field4748_0x1292;
    undefined field4749_0x1293;
    undefined field4750_0x1294;
    undefined field4751_0x1295;
    undefined field4752_0x1296;
    undefined field4753_0x1297;
    undefined field4754_0x1298;
    undefined field4755_0x1299;
    undefined field4756_0x129a;
    undefined field4757_0x129b;
    undefined field4758_0x129c;
    undefined field4759_0x129d;
    undefined field4760_0x129e;
    undefined field4761_0x129f;
    undefined field4762_0x12a0;
    undefined field4763_0x12a1;
    undefined field4764_0x12a2;
    undefined field4765_0x12a3;
    undefined field4766_0x12a4;
    undefined field4767_0x12a5;
    undefined field4768_0x12a6;
    undefined field4769_0x12a7;
    undefined field4770_0x12a8;
    undefined field4771_0x12a9;
    undefined field4772_0x12aa;
    undefined field4773_0x12ab;
    undefined field4774_0x12ac;
    undefined field4775_0x12ad;
    undefined field4776_0x12ae;
    undefined field4777_0x12af;
    undefined field4778_0x12b0;
    undefined field4779_0x12b1;
    undefined field4780_0x12b2;
    undefined field4781_0x12b3;
    undefined field4782_0x12b4;
    undefined field4783_0x12b5;
    undefined field4784_0x12b6;
    undefined field4785_0x12b7;
    undefined field4786_0x12b8;
    undefined field4787_0x12b9;
    undefined field4788_0x12ba;
    undefined field4789_0x12bb;
    undefined field4790_0x12bc;
    undefined field4791_0x12bd;
    undefined field4792_0x12be;
    undefined field4793_0x12bf;
    undefined field4794_0x12c0;
    undefined field4795_0x12c1;
    undefined field4796_0x12c2;
    undefined field4797_0x12c3;
    undefined field4798_0x12c4;
    undefined field4799_0x12c5;
    undefined field4800_0x12c6;
    undefined field4801_0x12c7;
    undefined field4802_0x12c8;
    undefined field4803_0x12c9;
    undefined field4804_0x12ca;
    undefined field4805_0x12cb;
    undefined field4806_0x12cc;
    undefined field4807_0x12cd;
    undefined field4808_0x12ce;
    undefined field4809_0x12cf;
    undefined field4810_0x12d0;
    undefined field4811_0x12d1;
    undefined field4812_0x12d2;
    undefined field4813_0x12d3;
    undefined field4814_0x12d4;
    undefined field4815_0x12d5;
    undefined field4816_0x12d6;
    undefined field4817_0x12d7;
    undefined field4818_0x12d8;
    undefined field4819_0x12d9;
    undefined field4820_0x12da;
    undefined field4821_0x12db;
    undefined field4822_0x12dc;
    undefined field4823_0x12dd;
    undefined field4824_0x12de;
    undefined field4825_0x12df;
    undefined field4826_0x12e0;
    undefined field4827_0x12e1;
    undefined field4828_0x12e2;
    undefined field4829_0x12e3;
    undefined field4830_0x12e4;
    undefined field4831_0x12e5;
    undefined field4832_0x12e6;
    undefined field4833_0x12e7;
    undefined field4834_0x12e8;
    undefined field4835_0x12e9;
    undefined field4836_0x12ea;
    undefined field4837_0x12eb;
    undefined field4838_0x12ec;
    undefined field4839_0x12ed;
    undefined field4840_0x12ee;
    undefined field4841_0x12ef;
    undefined field4842_0x12f0;
    undefined field4843_0x12f1;
    undefined field4844_0x12f2;
    undefined field4845_0x12f3;
    undefined field4846_0x12f4;
    undefined field4847_0x12f5;
    undefined field4848_0x12f6;
    undefined field4849_0x12f7;
    undefined field4850_0x12f8;
    undefined field4851_0x12f9;
    undefined field4852_0x12fa;
    undefined field4853_0x12fb;
    undefined field4854_0x12fc;
    undefined field4855_0x12fd;
    undefined field4856_0x12fe;
    undefined field4857_0x12ff;
    undefined field4858_0x1300;
    undefined field4859_0x1301;
    undefined field4860_0x1302;
    undefined field4861_0x1303;
    undefined field4862_0x1304;
    undefined field4863_0x1305;
    undefined field4864_0x1306;
    undefined field4865_0x1307;
    undefined field4866_0x1308;
    undefined field4867_0x1309;
    undefined field4868_0x130a;
    undefined field4869_0x130b;
    undefined field4870_0x130c;
    undefined field4871_0x130d;
    undefined field4872_0x130e;
    undefined field4873_0x130f;
    undefined field4874_0x1310;
    undefined field4875_0x1311;
    undefined field4876_0x1312;
    undefined field4877_0x1313;
    undefined field4878_0x1314;
    undefined field4879_0x1315;
    undefined field4880_0x1316;
    undefined field4881_0x1317;
    undefined field4882_0x1318;
    undefined field4883_0x1319;
    undefined field4884_0x131a;
    undefined field4885_0x131b;
    undefined field4886_0x131c;
    undefined field4887_0x131d;
    undefined field4888_0x131e;
    undefined field4889_0x131f;
    undefined field4890_0x1320;
    undefined field4891_0x1321;
    undefined field4892_0x1322;
    undefined field4893_0x1323;
    undefined field4894_0x1324;
    undefined field4895_0x1325;
    undefined field4896_0x1326;
    undefined field4897_0x1327;
    undefined field4898_0x1328;
    undefined field4899_0x1329;
    undefined field4900_0x132a;
    undefined field4901_0x132b;
    undefined field4902_0x132c;
    undefined field4903_0x132d;
    undefined field4904_0x132e;
    undefined field4905_0x132f;
    undefined field4906_0x1330;
    undefined field4907_0x1331;
    undefined field4908_0x1332;
    undefined field4909_0x1333;
    undefined field4910_0x1334;
    undefined field4911_0x1335;
    undefined field4912_0x1336;
    undefined field4913_0x1337;
    undefined field4914_0x1338;
    undefined field4915_0x1339;
    undefined field4916_0x133a;
    undefined field4917_0x133b;
    undefined field4918_0x133c;
    undefined field4919_0x133d;
    undefined field4920_0x133e;
    undefined field4921_0x133f;
    undefined field4922_0x1340;
    undefined field4923_0x1341;
    undefined field4924_0x1342;
    undefined field4925_0x1343;
    undefined field4926_0x1344;
    undefined field4927_0x1345;
    undefined field4928_0x1346;
    undefined field4929_0x1347;
    undefined field4930_0x1348;
    undefined field4931_0x1349;
    undefined field4932_0x134a;
    undefined field4933_0x134b;
    undefined field4934_0x134c;
    undefined field4935_0x134d;
    undefined field4936_0x134e;
    undefined field4937_0x134f;
    undefined field4938_0x1350;
    undefined field4939_0x1351;
    undefined field4940_0x1352;
    undefined field4941_0x1353;
    undefined field4942_0x1354;
    undefined field4943_0x1355;
    undefined field4944_0x1356;
    undefined field4945_0x1357;
    undefined field4946_0x1358;
    undefined field4947_0x1359;
    undefined field4948_0x135a;
    undefined field4949_0x135b;
    undefined field4950_0x135c;
    undefined field4951_0x135d;
    undefined field4952_0x135e;
    undefined field4953_0x135f;
    undefined field4954_0x1360;
    undefined field4955_0x1361;
    undefined field4956_0x1362;
    undefined field4957_0x1363;
    undefined field4958_0x1364;
    undefined field4959_0x1365;
    undefined field4960_0x1366;
    undefined field4961_0x1367;
    undefined field4962_0x1368;
    undefined field4963_0x1369;
    undefined field4964_0x136a;
    undefined field4965_0x136b;
    undefined field4966_0x136c;
    undefined field4967_0x136d;
    undefined field4968_0x136e;
    undefined field4969_0x136f;
    undefined field4970_0x1370;
    undefined field4971_0x1371;
    undefined field4972_0x1372;
    undefined field4973_0x1373;
    undefined field4974_0x1374;
    undefined field4975_0x1375;
    undefined field4976_0x1376;
    undefined field4977_0x1377;
    undefined field4978_0x1378;
    undefined field4979_0x1379;
    undefined field4980_0x137a;
    undefined field4981_0x137b;
    undefined field4982_0x137c;
    undefined field4983_0x137d;
    undefined field4984_0x137e;
    undefined field4985_0x137f;
    undefined field4986_0x1380;
    undefined field4987_0x1381;
    undefined field4988_0x1382;
    undefined field4989_0x1383;
    undefined field4990_0x1384;
    undefined field4991_0x1385;
    undefined field4992_0x1386;
    undefined field4993_0x1387;
    undefined field4994_0x1388;
    undefined field4995_0x1389;
    undefined field4996_0x138a;
    undefined field4997_0x138b;
    undefined field4998_0x138c;
    undefined field4999_0x138d;
    undefined field5000_0x138e;
    undefined field5001_0x138f;
    undefined field5002_0x1390;
    undefined field5003_0x1391;
    undefined field5004_0x1392;
    undefined field5005_0x1393;
    undefined field5006_0x1394;
    undefined field5007_0x1395;
    undefined field5008_0x1396;
    undefined field5009_0x1397;
    undefined field5010_0x1398;
    undefined field5011_0x1399;
    undefined field5012_0x139a;
    undefined field5013_0x139b;
    undefined field5014_0x139c;
    undefined field5015_0x139d;
    undefined field5016_0x139e;
    undefined field5017_0x139f;
    undefined field5018_0x13a0;
    undefined field5019_0x13a1;
    undefined field5020_0x13a2;
    undefined field5021_0x13a3;
    undefined field5022_0x13a4;
    undefined field5023_0x13a5;
    undefined field5024_0x13a6;
    undefined field5025_0x13a7;
    undefined field5026_0x13a8;
    undefined field5027_0x13a9;
    undefined field5028_0x13aa;
    undefined field5029_0x13ab;
    undefined field5030_0x13ac;
    undefined field5031_0x13ad;
    undefined field5032_0x13ae;
    undefined field5033_0x13af;
    undefined field5034_0x13b0;
    undefined field5035_0x13b1;
    undefined field5036_0x13b2;
    undefined field5037_0x13b3;
    undefined field5038_0x13b4;
    undefined field5039_0x13b5;
    undefined field5040_0x13b6;
    undefined field5041_0x13b7;
    undefined field5042_0x13b8;
    undefined field5043_0x13b9;
    undefined field5044_0x13ba;
    undefined field5045_0x13bb;
    undefined field5046_0x13bc;
    undefined field5047_0x13bd;
    undefined field5048_0x13be;
    undefined field5049_0x13bf;
    undefined field5050_0x13c0;
    undefined field5051_0x13c1;
    undefined field5052_0x13c2;
    undefined field5053_0x13c3;
    undefined field5054_0x13c4;
    undefined field5055_0x13c5;
    undefined field5056_0x13c6;
    undefined field5057_0x13c7;
    undefined field5058_0x13c8;
    undefined field5059_0x13c9;
    undefined field5060_0x13ca;
    undefined field5061_0x13cb;
    undefined field5062_0x13cc;
    undefined field5063_0x13cd;
    undefined field5064_0x13ce;
    undefined field5065_0x13cf;
    undefined field5066_0x13d0;
    undefined field5067_0x13d1;
    undefined field5068_0x13d2;
    undefined field5069_0x13d3;
    undefined field5070_0x13d4;
    undefined field5071_0x13d5;
    undefined field5072_0x13d6;
    undefined field5073_0x13d7;
    undefined field5074_0x13d8;
    undefined field5075_0x13d9;
    undefined field5076_0x13da;
    undefined field5077_0x13db;
    undefined field5078_0x13dc;
    undefined field5079_0x13dd;
    undefined field5080_0x13de;
    undefined field5081_0x13df;
    undefined field5082_0x13e0;
    undefined field5083_0x13e1;
    undefined field5084_0x13e2;
    undefined field5085_0x13e3;
    undefined field5086_0x13e4;
    undefined field5087_0x13e5;
    undefined field5088_0x13e6;
    undefined field5089_0x13e7;
    undefined field5090_0x13e8;
    undefined field5091_0x13e9;
    undefined field5092_0x13ea;
    undefined field5093_0x13eb;
    undefined field5094_0x13ec;
    undefined field5095_0x13ed;
    undefined field5096_0x13ee;
    undefined field5097_0x13ef;
    undefined field5098_0x13f0;
    undefined field5099_0x13f1;
    undefined field5100_0x13f2;
    undefined field5101_0x13f3;
    undefined field5102_0x13f4;
    undefined field5103_0x13f5;
    undefined field5104_0x13f6;
    undefined field5105_0x13f7;
    undefined field5106_0x13f8;
    undefined field5107_0x13f9;
    undefined field5108_0x13fa;
    undefined field5109_0x13fb;
    undefined field5110_0x13fc;
    undefined field5111_0x13fd;
    undefined field5112_0x13fe;
    undefined field5113_0x13ff;
    undefined field5114_0x1400;
    undefined field5115_0x1401;
    undefined field5116_0x1402;
    undefined field5117_0x1403;
    undefined field5118_0x1404;
    undefined field5119_0x1405;
    undefined field5120_0x1406;
    undefined field5121_0x1407;
    undefined field5122_0x1408;
    undefined field5123_0x1409;
    undefined field5124_0x140a;
    undefined field5125_0x140b;
    undefined field5126_0x140c;
    undefined field5127_0x140d;
    undefined field5128_0x140e;
    undefined field5129_0x140f;
    undefined field5130_0x1410;
    undefined field5131_0x1411;
    undefined field5132_0x1412;
    undefined field5133_0x1413;
    undefined field5134_0x1414;
    undefined field5135_0x1415;
    undefined field5136_0x1416;
    undefined field5137_0x1417;
    undefined field5138_0x1418;
    undefined field5139_0x1419;
    undefined field5140_0x141a;
    undefined field5141_0x141b;
    undefined field5142_0x141c;
    undefined field5143_0x141d;
    undefined field5144_0x141e;
    undefined field5145_0x141f;
    undefined field5146_0x1420;
    undefined field5147_0x1421;
    undefined field5148_0x1422;
    undefined field5149_0x1423;
    undefined field5150_0x1424;
    undefined field5151_0x1425;
    undefined field5152_0x1426;
    undefined field5153_0x1427;
    undefined field5154_0x1428;
    undefined field5155_0x1429;
    undefined field5156_0x142a;
    undefined field5157_0x142b;
    undefined field5158_0x142c;
    undefined field5159_0x142d;
    undefined field5160_0x142e;
    undefined field5161_0x142f;
    undefined field5162_0x1430;
    undefined field5163_0x1431;
    undefined field5164_0x1432;
    undefined field5165_0x1433;
    undefined field5166_0x1434;
    undefined field5167_0x1435;
    undefined field5168_0x1436;
    undefined field5169_0x1437;
    undefined field5170_0x1438;
    undefined field5171_0x1439;
    undefined field5172_0x143a;
    undefined field5173_0x143b;
    undefined field5174_0x143c;
    undefined field5175_0x143d;
    undefined field5176_0x143e;
    undefined field5177_0x143f;
    undefined field5178_0x1440;
    undefined field5179_0x1441;
    undefined field5180_0x1442;
    undefined field5181_0x1443;
    undefined field5182_0x1444;
    undefined field5183_0x1445;
    undefined field5184_0x1446;
    undefined field5185_0x1447;
    undefined field5186_0x1448;
    undefined field5187_0x1449;
    undefined field5188_0x144a;
    undefined field5189_0x144b;
    undefined field5190_0x144c;
    undefined field5191_0x144d;
    undefined field5192_0x144e;
    undefined field5193_0x144f;
    undefined field5194_0x1450;
    undefined field5195_0x1451;
    undefined field5196_0x1452;
    undefined field5197_0x1453;
    undefined field5198_0x1454;
    undefined field5199_0x1455;
    undefined field5200_0x1456;
    undefined field5201_0x1457;
    undefined field5202_0x1458;
    undefined field5203_0x1459;
    undefined field5204_0x145a;
    undefined field5205_0x145b;
    undefined field5206_0x145c;
    undefined field5207_0x145d;
    undefined field5208_0x145e;
    undefined field5209_0x145f;
    undefined field5210_0x1460;
    undefined field5211_0x1461;
    undefined field5212_0x1462;
    undefined field5213_0x1463;
    undefined field5214_0x1464;
    undefined field5215_0x1465;
    undefined field5216_0x1466;
    undefined field5217_0x1467;
    undefined field5218_0x1468;
    undefined field5219_0x1469;
    undefined field5220_0x146a;
    undefined field5221_0x146b;
    undefined field5222_0x146c;
    undefined field5223_0x146d;
    undefined field5224_0x146e;
    undefined field5225_0x146f;
    undefined field5226_0x1470;
    undefined field5227_0x1471;
    undefined field5228_0x1472;
    undefined field5229_0x1473;
    undefined field5230_0x1474;
    undefined field5231_0x1475;
    undefined field5232_0x1476;
    undefined field5233_0x1477;
    undefined field5234_0x1478;
    undefined field5235_0x1479;
    undefined field5236_0x147a;
    undefined field5237_0x147b;
    undefined field5238_0x147c;
    undefined field5239_0x147d;
    undefined field5240_0x147e;
    undefined field5241_0x147f;
    undefined field5242_0x1480;
    undefined field5243_0x1481;
    undefined field5244_0x1482;
    undefined field5245_0x1483;
    undefined field5246_0x1484;
    undefined field5247_0x1485;
    undefined field5248_0x1486;
    undefined field5249_0x1487;
    undefined field5250_0x1488;
    undefined field5251_0x1489;
    undefined field5252_0x148a;
    undefined field5253_0x148b;
    undefined field5254_0x148c;
    undefined field5255_0x148d;
    undefined field5256_0x148e;
    undefined field5257_0x148f;
    undefined field5258_0x1490;
    undefined field5259_0x1491;
    undefined field5260_0x1492;
    undefined field5261_0x1493;
    undefined field5262_0x1494;
    undefined field5263_0x1495;
    undefined field5264_0x1496;
    undefined field5265_0x1497;
    undefined field5266_0x1498;
    undefined field5267_0x1499;
    undefined field5268_0x149a;
    undefined field5269_0x149b;
    undefined field5270_0x149c;
    undefined field5271_0x149d;
    undefined field5272_0x149e;
    undefined field5273_0x149f;
    undefined field5274_0x14a0;
    undefined field5275_0x14a1;
    undefined field5276_0x14a2;
    undefined field5277_0x14a3;
    undefined field5278_0x14a4;
    undefined field5279_0x14a5;
    undefined field5280_0x14a6;
    undefined field5281_0x14a7;
    undefined field5282_0x14a8;
    undefined field5283_0x14a9;
    undefined field5284_0x14aa;
    undefined field5285_0x14ab;
    undefined field5286_0x14ac;
    undefined field5287_0x14ad;
    undefined field5288_0x14ae;
    undefined field5289_0x14af;
    undefined field5290_0x14b0;
    undefined field5291_0x14b1;
    undefined field5292_0x14b2;
    undefined field5293_0x14b3;
    undefined field5294_0x14b4;
    undefined field5295_0x14b5;
    undefined field5296_0x14b6;
    undefined field5297_0x14b7;
    undefined field5298_0x14b8;
    undefined field5299_0x14b9;
    undefined field5300_0x14ba;
    undefined field5301_0x14bb;
    undefined field5302_0x14bc;
    undefined field5303_0x14bd;
    undefined field5304_0x14be;
    undefined field5305_0x14bf;
    undefined field5306_0x14c0;
    undefined field5307_0x14c1;
    undefined field5308_0x14c2;
    undefined field5309_0x14c3;
    undefined field5310_0x14c4;
    undefined field5311_0x14c5;
    undefined field5312_0x14c6;
    undefined field5313_0x14c7;
    undefined field5314_0x14c8;
    undefined field5315_0x14c9;
    undefined field5316_0x14ca;
    undefined field5317_0x14cb;
    undefined field5318_0x14cc;
    undefined field5319_0x14cd;
    undefined field5320_0x14ce;
    undefined field5321_0x14cf;
    undefined field5322_0x14d0;
    undefined field5323_0x14d1;
    undefined field5324_0x14d2;
    undefined field5325_0x14d3;
    undefined field5326_0x14d4;
    undefined field5327_0x14d5;
    undefined field5328_0x14d6;
    undefined field5329_0x14d7;
    undefined field5330_0x14d8;
    undefined field5331_0x14d9;
    undefined field5332_0x14da;
    undefined field5333_0x14db;
    undefined field5334_0x14dc;
    undefined field5335_0x14dd;
    undefined field5336_0x14de;
    undefined field5337_0x14df;
    undefined field5338_0x14e0;
    undefined field5339_0x14e1;
    undefined field5340_0x14e2;
    undefined field5341_0x14e3;
    undefined field5342_0x14e4;
    undefined field5343_0x14e5;
    undefined field5344_0x14e6;
    undefined field5345_0x14e7;
    undefined field5346_0x14e8;
    undefined field5347_0x14e9;
    undefined field5348_0x14ea;
    undefined field5349_0x14eb;
    undefined field5350_0x14ec;
    undefined field5351_0x14ed;
    undefined field5352_0x14ee;
    undefined field5353_0x14ef;
    undefined field5354_0x14f0;
    undefined field5355_0x14f1;
    undefined field5356_0x14f2;
    undefined field5357_0x14f3;
    undefined field5358_0x14f4;
    undefined field5359_0x14f5;
    undefined field5360_0x14f6;
    undefined field5361_0x14f7;
    undefined field5362_0x14f8;
    undefined field5363_0x14f9;
    undefined field5364_0x14fa;
    undefined field5365_0x14fb;
    undefined field5366_0x14fc;
    undefined field5367_0x14fd;
    undefined field5368_0x14fe;
    undefined field5369_0x14ff;
    undefined field5370_0x1500;
    undefined field5371_0x1501;
    undefined field5372_0x1502;
    undefined field5373_0x1503;
    undefined field5374_0x1504;
    undefined field5375_0x1505;
    undefined field5376_0x1506;
    undefined field5377_0x1507;
    undefined field5378_0x1508;
    undefined field5379_0x1509;
    undefined field5380_0x150a;
    undefined field5381_0x150b;
    undefined field5382_0x150c;
    undefined field5383_0x150d;
    undefined field5384_0x150e;
    undefined field5385_0x150f;
    undefined field5386_0x1510;
    undefined field5387_0x1511;
    undefined field5388_0x1512;
    undefined field5389_0x1513;
    undefined field5390_0x1514;
    undefined field5391_0x1515;
    undefined field5392_0x1516;
    undefined field5393_0x1517;
    undefined field5394_0x1518;
    undefined field5395_0x1519;
    undefined field5396_0x151a;
    undefined field5397_0x151b;
    undefined field5398_0x151c;
    undefined field5399_0x151d;
    undefined field5400_0x151e;
    undefined field5401_0x151f;
    undefined field5402_0x1520;
    undefined field5403_0x1521;
    undefined field5404_0x1522;
    undefined field5405_0x1523;
    undefined field5406_0x1524;
    undefined field5407_0x1525;
    undefined field5408_0x1526;
    undefined field5409_0x1527;
    undefined field5410_0x1528;
    undefined field5411_0x1529;
    undefined field5412_0x152a;
    undefined field5413_0x152b;
    undefined field5414_0x152c;
    undefined field5415_0x152d;
    undefined field5416_0x152e;
    undefined field5417_0x152f;
    undefined field5418_0x1530;
    undefined field5419_0x1531;
    undefined field5420_0x1532;
    undefined field5421_0x1533;
    undefined field5422_0x1534;
    undefined field5423_0x1535;
    undefined field5424_0x1536;
    undefined field5425_0x1537;
    undefined field5426_0x1538;
    undefined field5427_0x1539;
    undefined field5428_0x153a;
    undefined field5429_0x153b;
    undefined field5430_0x153c;
    undefined field5431_0x153d;
    undefined field5432_0x153e;
    undefined field5433_0x153f;
    undefined field5434_0x1540;
    undefined field5435_0x1541;
    undefined field5436_0x1542;
    undefined field5437_0x1543;
    undefined field5438_0x1544;
    undefined field5439_0x1545;
    undefined field5440_0x1546;
    undefined field5441_0x1547;
    undefined field5442_0x1548;
    undefined field5443_0x1549;
    undefined field5444_0x154a;
    undefined field5445_0x154b;
    undefined field5446_0x154c;
    undefined field5447_0x154d;
    undefined field5448_0x154e;
    undefined field5449_0x154f;
    undefined field5450_0x1550;
    undefined field5451_0x1551;
    undefined field5452_0x1552;
    undefined field5453_0x1553;
    undefined field5454_0x1554;
    undefined field5455_0x1555;
    undefined field5456_0x1556;
    undefined field5457_0x1557;
    undefined field5458_0x1558;
    undefined field5459_0x1559;
    undefined field5460_0x155a;
    undefined field5461_0x155b;
    undefined field5462_0x155c;
    undefined field5463_0x155d;
    undefined field5464_0x155e;
    undefined field5465_0x155f;
    undefined field5466_0x1560;
    undefined field5467_0x1561;
    undefined field5468_0x1562;
    undefined field5469_0x1563;
    undefined field5470_0x1564;
    undefined field5471_0x1565;
    undefined field5472_0x1566;
    undefined field5473_0x1567;
    undefined field5474_0x1568;
    undefined field5475_0x1569;
    undefined field5476_0x156a;
    undefined field5477_0x156b;
    undefined field5478_0x156c;
    undefined field5479_0x156d;
    undefined field5480_0x156e;
    undefined field5481_0x156f;
    undefined field5482_0x1570;
    undefined field5483_0x1571;
    undefined field5484_0x1572;
    undefined field5485_0x1573;
    undefined field5486_0x1574;
    undefined field5487_0x1575;
    undefined field5488_0x1576;
    undefined field5489_0x1577;
    undefined field5490_0x1578;
    undefined field5491_0x1579;
    undefined field5492_0x157a;
    undefined field5493_0x157b;
    undefined field5494_0x157c;
    undefined field5495_0x157d;
    undefined field5496_0x157e;
    undefined field5497_0x157f;
    undefined field5498_0x1580;
    undefined field5499_0x1581;
    undefined field5500_0x1582;
    undefined field5501_0x1583;
    undefined field5502_0x1584;
    undefined field5503_0x1585;
    undefined field5504_0x1586;
    undefined field5505_0x1587;
    undefined field5506_0x1588;
    undefined field5507_0x1589;
    undefined field5508_0x158a;
    undefined field5509_0x158b;
    undefined field5510_0x158c;
    undefined field5511_0x158d;
    undefined field5512_0x158e;
    undefined field5513_0x158f;
    undefined field5514_0x1590;
    undefined field5515_0x1591;
    undefined field5516_0x1592;
    undefined field5517_0x1593;
    undefined field5518_0x1594;
    undefined field5519_0x1595;
    undefined field5520_0x1596;
    undefined field5521_0x1597;
    undefined field5522_0x1598;
    undefined field5523_0x1599;
    undefined field5524_0x159a;
    undefined field5525_0x159b;
    undefined field5526_0x159c;
    undefined field5527_0x159d;
    undefined field5528_0x159e;
    undefined field5529_0x159f;
    undefined field5530_0x15a0;
    undefined field5531_0x15a1;
    undefined field5532_0x15a2;
    undefined field5533_0x15a3;
    undefined field5534_0x15a4;
    undefined field5535_0x15a5;
    undefined field5536_0x15a6;
    undefined field5537_0x15a7;
    undefined field5538_0x15a8;
    undefined field5539_0x15a9;
    undefined field5540_0x15aa;
    undefined field5541_0x15ab;
    undefined field5542_0x15ac;
    undefined field5543_0x15ad;
    undefined field5544_0x15ae;
    undefined field5545_0x15af;
    undefined field5546_0x15b0;
    undefined field5547_0x15b1;
    undefined field5548_0x15b2;
    undefined field5549_0x15b3;
    undefined field5550_0x15b4;
    undefined field5551_0x15b5;
    undefined field5552_0x15b6;
    undefined field5553_0x15b7;
    undefined field5554_0x15b8;
    undefined field5555_0x15b9;
    undefined field5556_0x15ba;
    undefined field5557_0x15bb;
    undefined field5558_0x15bc;
    undefined field5559_0x15bd;
    undefined field5560_0x15be;
    undefined field5561_0x15bf;
    undefined field5562_0x15c0;
    undefined field5563_0x15c1;
    undefined field5564_0x15c2;
    undefined field5565_0x15c3;
    undefined field5566_0x15c4;
    undefined field5567_0x15c5;
    undefined field5568_0x15c6;
    undefined field5569_0x15c7;
    undefined field5570_0x15c8;
    undefined field5571_0x15c9;
    undefined field5572_0x15ca;
    undefined field5573_0x15cb;
    undefined field5574_0x15cc;
    undefined field5575_0x15cd;
    undefined field5576_0x15ce;
    undefined field5577_0x15cf;
    undefined field5578_0x15d0;
    undefined field5579_0x15d1;
    undefined field5580_0x15d2;
    undefined field5581_0x15d3;
    undefined field5582_0x15d4;
    undefined field5583_0x15d5;
    undefined field5584_0x15d6;
    undefined field5585_0x15d7;
    undefined field5586_0x15d8;
    undefined field5587_0x15d9;
    undefined field5588_0x15da;
    undefined field5589_0x15db;
    undefined field5590_0x15dc;
    undefined field5591_0x15dd;
    undefined field5592_0x15de;
    undefined field5593_0x15df;
    undefined field5594_0x15e0;
    undefined field5595_0x15e1;
    undefined field5596_0x15e2;
    undefined field5597_0x15e3;
    undefined field5598_0x15e4;
    undefined field5599_0x15e5;
    undefined field5600_0x15e6;
    undefined field5601_0x15e7;
    undefined field5602_0x15e8;
    undefined field5603_0x15e9;
    undefined field5604_0x15ea;
    undefined field5605_0x15eb;
    undefined field5606_0x15ec;
    undefined field5607_0x15ed;
    undefined field5608_0x15ee;
    undefined field5609_0x15ef;
    undefined field5610_0x15f0;
    undefined field5611_0x15f1;
    undefined field5612_0x15f2;
    undefined field5613_0x15f3;
    undefined field5614_0x15f4;
    undefined field5615_0x15f5;
    undefined field5616_0x15f6;
    undefined field5617_0x15f7;
    float field5618_0x15f8;
    undefined field5619_0x15fc;
    undefined field5620_0x15fd;
    undefined field5621_0x15fe;
    undefined field5622_0x15ff;
    undefined field5623_0x1600;
    undefined field5624_0x1601;
    undefined field5625_0x1602;
    undefined field5626_0x1603;
    undefined field5627_0x1604;
    undefined field5628_0x1605;
    undefined field5629_0x1606;
    undefined field5630_0x1607;
    undefined field5631_0x1608;
    undefined field5632_0x1609;
    undefined field5633_0x160a;
    undefined field5634_0x160b;
    undefined field5635_0x160c;
    undefined field5636_0x160d;
    undefined field5637_0x160e;
    undefined field5638_0x160f;
    undefined field5639_0x1610;
    undefined field5640_0x1611;
    undefined field5641_0x1612;
    undefined field5642_0x1613;
    undefined field5643_0x1614;
    undefined field5644_0x1615;
    undefined field5645_0x1616;
    undefined field5646_0x1617;
    undefined field5647_0x1618;
    undefined field5648_0x1619;
    undefined field5649_0x161a;
    undefined field5650_0x161b;
    undefined field5651_0x161c;
    undefined field5652_0x161d;
    undefined field5653_0x161e;
    undefined field5654_0x161f;
    undefined field5655_0x1620;
    undefined field5656_0x1621;
    undefined field5657_0x1622;
    undefined field5658_0x1623;
    undefined field5659_0x1624;
    undefined field5660_0x1625;
    undefined field5661_0x1626;
    undefined field5662_0x1627;
    undefined field5663_0x1628;
    undefined field5664_0x1629;
    undefined field5665_0x162a;
    undefined field5666_0x162b;
    undefined field5667_0x162c;
    undefined field5668_0x162d;
    undefined field5669_0x162e;
    undefined field5670_0x162f;
    undefined field5671_0x1630;
    undefined field5672_0x1631;
    undefined field5673_0x1632;
    undefined field5674_0x1633;
    undefined field5675_0x1634;
    undefined field5676_0x1635;
    undefined field5677_0x1636;
    undefined field5678_0x1637;
    undefined field5679_0x1638;
    undefined field5680_0x1639;
    undefined field5681_0x163a;
    undefined field5682_0x163b;
    undefined field5683_0x163c;
    undefined field5684_0x163d;
    undefined field5685_0x163e;
    undefined field5686_0x163f;
};

struct ObjectAnimationFrameData {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
};

struct ObjectAnimation {
    int frames_count;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    float field17_0x14;
    float field18_0x18;
    float field19_0x1c;
    float field20_0x20;
    float field21_0x24;
    float field22_0x28;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    undefined field27_0x30;
    undefined field28_0x31;
    undefined field29_0x32;
    undefined field30_0x33;
    undefined field31_0x34;
    undefined field32_0x35;
    undefined field33_0x36;
    undefined field34_0x37;
    float field35_0x38;
    undefined field36_0x3c;
    undefined field37_0x3d;
    undefined field38_0x3e;
    undefined field39_0x3f;
    struct ObjectAnimationFrameData * frames;
};

struct SomethingAboutBuilding {
    char name[64];
    undefined field1_0x40;
    undefined field2_0x41;
    undefined field3_0x42;
    undefined field4_0x43;
    undefined field5_0x44;
    undefined field6_0x45;
    undefined field7_0x46;
    undefined field8_0x47;
    undefined field9_0x48;
    undefined field10_0x49;
    undefined field11_0x4a;
    undefined field12_0x4b;
    float position[3];
    undefined4 field14_0x58;
    float three_floats_0[3];
    undefined4 field16_0x68;
    float three_floats_1[3];
    float three_floats_2[3];
    float three_floats_3[3];
    float three_floats_4[3];
    float field21_0x9c;
    float field22_0xa0;
    struct SomethingAboutBuilding * something_about_building_ptr_1;
    struct SomethingAboutBuilding * something_about_building_ptr_2;
    float field25_0xac;
    float field26_0xb0[3];
    float field27_0xbc[3];
    float field28_0xc8[3];
    float field29_0xd4[3];
    float field30_0xe0;
    float field31_0xe4[3];
    float field32_0xf0[3];
    float field33_0xfc[3];
    float field34_0x108[3];
    undefined field35_0x114;
    undefined field36_0x115;
    undefined field37_0x116;
    undefined field38_0x117;
    undefined field39_0x118;
    undefined field40_0x119;
    undefined field41_0x11a;
    undefined field42_0x11b;
    undefined field43_0x11c;
    undefined field44_0x11d;
    undefined field45_0x11e;
    undefined field46_0x11f;
    undefined field47_0x120;
    undefined field48_0x121;
    undefined field49_0x122;
    undefined field50_0x123;
    undefined field51_0x124;
    undefined field52_0x125;
    undefined field53_0x126;
    undefined field54_0x127;
    undefined field55_0x128;
    undefined field56_0x129;
    undefined field57_0x12a;
    undefined field58_0x12b;
    float field59_0x12c;
    undefined field60_0x130;
    undefined field61_0x131;
    undefined field62_0x132;
    undefined field63_0x133;
    undefined field64_0x134;
    undefined field65_0x135;
    undefined field66_0x136;
    undefined field67_0x137;
    undefined field68_0x138;
    undefined field69_0x139;
    undefined field70_0x13a;
    undefined field71_0x13b;
    undefined field72_0x13c;
    undefined field73_0x13d;
    undefined field74_0x13e;
    undefined field75_0x13f;
    undefined field76_0x140;
    undefined field77_0x141;
    undefined field78_0x142;
    undefined field79_0x143;
    undefined field80_0x144;
    undefined field81_0x145;
    undefined field82_0x146;
    undefined field83_0x147;
    undefined field84_0x148;
    undefined field85_0x149;
    undefined field86_0x14a;
    undefined field87_0x14b;
    undefined field88_0x14c;
    undefined field89_0x14d;
    undefined field90_0x14e;
    undefined field91_0x14f;
    undefined field92_0x150;
    undefined field93_0x151;
    undefined field94_0x152;
    undefined field95_0x153;
    undefined field96_0x154;
    undefined field97_0x155;
    undefined field98_0x156;
    undefined field99_0x157;
    undefined field100_0x158;
    undefined field101_0x159;
    undefined field102_0x15a;
    undefined field103_0x15b;
    undefined field104_0x15c;
    undefined field105_0x15d;
    undefined field106_0x15e;
    undefined field107_0x15f;
    undefined field108_0x160;
    undefined field109_0x161;
    undefined field110_0x162;
    undefined field111_0x163;
    undefined field112_0x164;
    undefined field113_0x165;
    undefined field114_0x166;
    undefined field115_0x167;
    undefined field116_0x168;
    undefined field117_0x169;
    undefined field118_0x16a;
    undefined field119_0x16b;
    undefined field120_0x16c;
    undefined field121_0x16d;
    undefined field122_0x16e;
    undefined field123_0x16f;
    undefined field124_0x170;
    undefined field125_0x171;
    undefined field126_0x172;
    undefined field127_0x173;
    undefined field128_0x174;
    undefined field129_0x175;
    undefined field130_0x176;
    undefined field131_0x177;
    undefined field132_0x178;
    undefined field133_0x179;
    undefined field134_0x17a;
    undefined field135_0x17b;
    undefined field136_0x17c;
    undefined field137_0x17d;
    undefined field138_0x17e;
    undefined field139_0x17f;
    undefined field140_0x180;
    undefined field141_0x181;
    undefined field142_0x182;
    undefined field143_0x183;
    undefined field144_0x184;
    undefined field145_0x185;
    undefined field146_0x186;
    undefined field147_0x187;
    undefined field148_0x188;
    undefined field149_0x189;
    undefined field150_0x18a;
    undefined field151_0x18b;
    float matrix_4x4_maybe[16];
    undefined field153_0x1cc;
    undefined field154_0x1cd;
    undefined field155_0x1ce;
    undefined field156_0x1cf;
    struct ObjectAnimation * animation;
    undefined field158_0x1d4;
    undefined field159_0x1d5;
    undefined field160_0x1d6;
    undefined field161_0x1d7;
    undefined field162_0x1d8;
    undefined field163_0x1d9;
    undefined field164_0x1da;
    undefined field165_0x1db;
    undefined field166_0x1dc;
    undefined field167_0x1dd;
    undefined field168_0x1de;
    undefined field169_0x1df;
    undefined field170_0x1e0;
    undefined field171_0x1e1;
    undefined field172_0x1e2;
    undefined field173_0x1e3;
    undefined field174_0x1e4;
    undefined field175_0x1e5;
    undefined field176_0x1e6;
    undefined field177_0x1e7;
    struct LightInfo * light_info;
    struct ObjectDrawData * draw_data; /* It's a pointer to a structure with a pointer to a function as first 4 bytes */
    undefined field180_0x1f0;
    undefined field181_0x1f1;
    undefined field182_0x1f2;
    undefined field183_0x1f3;
    struct SomethingAboutBuilding * ptr_1;
    struct SomethingAboutBuilding * ptr_2;
    struct SomethingAboutBuilding * ptr_3;
    struct SomethingAboutBuilding * ptr_4;
    undefined * instance_of_any_type_ptr; /* If name starts with 'ob_' it's an object. If starts with 'gb_' it's a building instance */
    undefined field189_0x208;
    undefined field190_0x209;
    undefined field191_0x20a;
    undefined field192_0x20b;
    struct SomethingAboutBuilding * yet_another_ptr;
    undefined field194_0x210;
    undefined field195_0x211;
    undefined field196_0x212;
    undefined field197_0x213;
    undefined field198_0x214;
    undefined field199_0x215;
    undefined field200_0x216;
    undefined field201_0x217;
    uint some_flags; /* Created by retype action */
    uint field203_0x21c;
    undefined field204_0x220;
    undefined field205_0x221;
    undefined field206_0x222;
    undefined field207_0x223;
    undefined field208_0x224;
    undefined field209_0x225;
    undefined field210_0x226;
    undefined field211_0x227;
};

struct QueueEntry {
    undefined * func_ptr;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    byte func_index; /* Created by retype action */
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    struct Character_580 * character_580_ptr;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    undefined field26_0x20;
    undefined field27_0x21;
    undefined field28_0x22;
    undefined field29_0x23;
    struct QueueEntry * prev; /* Maybe next */
    struct QueueEntry * next; /* Maybe prev */
    undefined field32_0x2c;
    undefined field33_0x2d;
    undefined field34_0x2e;
    undefined field35_0x2f;
    uint another_func_index_maybe;
    undefined field37_0x34;
    undefined field38_0x35;
    undefined field39_0x36;
    undefined field40_0x37;
    undefined field41_0x38;
    undefined field42_0x39;
    undefined field43_0x3a;
    undefined field44_0x3b;
    undefined field45_0x3c;
    undefined field46_0x3d;
    undefined field47_0x3e;
    undefined field48_0x3f;
    undefined field49_0x40;
    undefined field50_0x41;
    undefined field51_0x42;
    undefined field52_0x43;
    undefined field53_0x44;
    undefined field54_0x45;
    undefined field55_0x46;
    undefined field56_0x47;
    undefined field57_0x48;
    undefined field58_0x49;
    undefined field59_0x4a;
    undefined field60_0x4b;
    undefined field61_0x4c;
    undefined field62_0x4d;
    undefined field63_0x4e;
    undefined field64_0x4f;
    undefined field65_0x50;
    undefined field66_0x51;
    undefined field67_0x52;
    undefined field68_0x53;
    undefined field69_0x54;
    undefined field70_0x55;
    undefined field71_0x56;
    undefined field72_0x57;
    undefined field73_0x58;
    undefined field74_0x59;
    undefined field75_0x5a;
    undefined field76_0x5b;
    undefined field77_0x5c;
    undefined field78_0x5d;
    undefined field79_0x5e;
    undefined field80_0x5f;
    undefined field81_0x60;
    undefined field82_0x61;
    undefined field83_0x62;
    undefined field84_0x63;
    undefined field85_0x64;
    undefined field86_0x65;
    undefined field87_0x66;
    undefined field88_0x67;
    undefined field89_0x68;
    undefined field90_0x69;
    undefined field91_0x6a;
    undefined field92_0x6b;
    undefined field93_0x6c;
    undefined field94_0x6d;
    undefined field95_0x6e;
    undefined field96_0x6f;
    undefined field97_0x70;
    undefined field98_0x71;
    undefined field99_0x72;
    undefined field100_0x73;
    undefined field101_0x74;
    undefined field102_0x75;
    undefined field103_0x76;
    undefined field104_0x77;
    undefined field105_0x78;
    undefined field106_0x79;
    undefined field107_0x7a;
    undefined field108_0x7b;
    undefined field109_0x7c;
    undefined field110_0x7d;
    undefined field111_0x7e;
    undefined field112_0x7f;
    undefined field113_0x80;
    undefined field114_0x81;
    undefined field115_0x82;
    undefined field116_0x83;
    undefined field117_0x84;
    undefined field118_0x85;
    undefined field119_0x86;
    undefined field120_0x87;
    undefined field121_0x88;
    undefined field122_0x89;
    undefined field123_0x8a;
    undefined field124_0x8b;
    undefined field125_0x8c;
    undefined field126_0x8d;
    undefined field127_0x8e;
    undefined field128_0x8f;
    undefined field129_0x90;
    undefined field130_0x91;
    undefined field131_0x92;
    undefined field132_0x93;
    undefined field133_0x94;
    undefined field134_0x95;
    undefined field135_0x96;
    undefined field136_0x97;
    undefined field137_0x98;
    undefined field138_0x99;
    undefined field139_0x9a;
    undefined field140_0x9b;
    undefined field141_0x9c;
    undefined field142_0x9d;
    undefined field143_0x9e;
    undefined field144_0x9f;
    undefined field145_0xa0;
    undefined field146_0xa1;
    undefined field147_0xa2;
    undefined field148_0xa3;
    undefined field149_0xa4;
    undefined field150_0xa5;
    undefined field151_0xa6;
    undefined field152_0xa7;
    undefined field153_0xa8;
    undefined field154_0xa9;
    undefined field155_0xaa;
    undefined field156_0xab;
    undefined field157_0xac;
    undefined field158_0xad;
    undefined field159_0xae;
    undefined field160_0xaf;
    undefined field161_0xb0;
    undefined field162_0xb1;
    undefined field163_0xb2;
    undefined field164_0xb3;
    undefined field165_0xb4;
    undefined field166_0xb5;
    undefined field167_0xb6;
    undefined field168_0xb7;
    undefined field169_0xb8;
    undefined field170_0xb9;
    undefined field171_0xba;
    undefined field172_0xbb;
    undefined field173_0xbc;
    undefined field174_0xbd;
    undefined field175_0xbe;
    undefined field176_0xbf;
    undefined field177_0xc0;
    undefined field178_0xc1;
    undefined field179_0xc2;
    undefined field180_0xc3;
    undefined field181_0xc4;
    undefined field182_0xc5;
    undefined field183_0xc6;
    undefined field184_0xc7;
    undefined field185_0xc8;
    undefined field186_0xc9;
    undefined field187_0xca;
    undefined field188_0xcb;
    undefined field189_0xcc;
    undefined field190_0xcd;
    undefined field191_0xce;
    undefined field192_0xcf;
    undefined field193_0xd0;
    undefined field194_0xd1;
    undefined field195_0xd2;
    undefined field196_0xd3;
    undefined field197_0xd4;
    undefined field198_0xd5;
    undefined field199_0xd6;
    undefined field200_0xd7;
    undefined field201_0xd8;
    undefined field202_0xd9;
    undefined field203_0xda;
    undefined field204_0xdb;
    undefined field205_0xdc;
    undefined field206_0xdd;
    undefined field207_0xde;
    undefined field208_0xdf;
    undefined field209_0xe0;
    undefined field210_0xe1;
    undefined field211_0xe2;
    undefined field212_0xe3;
    undefined field213_0xe4;
    undefined field214_0xe5;
    undefined field215_0xe6;
    undefined field216_0xe7;
    undefined field217_0xe8;
    undefined field218_0xe9;
    undefined field219_0xea;
    undefined field220_0xeb;
    undefined field221_0xec;
    undefined field222_0xed;
    undefined field223_0xee;
    undefined field224_0xef;
    undefined field225_0xf0;
    undefined field226_0xf1;
    undefined field227_0xf2;
    undefined field228_0xf3;
    undefined field229_0xf4;
    undefined field230_0xf5;
    undefined field231_0xf6;
    undefined field232_0xf7;
    undefined field233_0xf8;
    undefined field234_0xf9;
    undefined field235_0xfa;
    undefined field236_0xfb;
    undefined field237_0xfc;
    undefined field238_0xfd;
    undefined field239_0xfe;
    undefined field240_0xff;
    undefined field241_0x100;
    undefined field242_0x101;
    undefined field243_0x102;
    undefined field244_0x103;
    undefined field245_0x104;
    undefined field246_0x105;
    undefined field247_0x106;
    undefined field248_0x107;
    undefined field249_0x108;
    undefined field250_0x109;
    undefined field251_0x10a;
    undefined field252_0x10b;
    undefined field253_0x10c;
    undefined field254_0x10d;
    undefined field255_0x10e;
    undefined field256_0x10f;
    undefined field257_0x110;
    undefined field258_0x111;
    undefined field259_0x112;
    undefined field260_0x113;
    undefined field261_0x114;
    undefined field262_0x115;
    undefined field263_0x116;
    undefined field264_0x117;
    undefined field265_0x118;
    undefined field266_0x119;
    undefined field267_0x11a;
    undefined field268_0x11b;
    undefined field269_0x11c;
    undefined field270_0x11d;
    undefined field271_0x11e;
    undefined field272_0x11f;
    undefined field273_0x120;
    undefined field274_0x121;
    undefined field275_0x122;
    undefined field276_0x123;
    undefined field277_0x124;
    undefined field278_0x125;
    undefined field279_0x126;
    undefined field280_0x127;
    undefined field281_0x128;
    undefined field282_0x129;
    undefined field283_0x12a;
    undefined field284_0x12b;
    undefined field285_0x12c;
    undefined field286_0x12d;
    undefined field287_0x12e;
    undefined field288_0x12f;
    undefined field289_0x130;
    undefined field290_0x131;
    undefined field291_0x132;
    undefined field292_0x133;
    undefined field293_0x134;
    undefined field294_0x135;
    undefined field295_0x136;
    undefined field296_0x137;
    undefined field297_0x138;
    undefined field298_0x139;
    undefined field299_0x13a;
    undefined field300_0x13b;
    undefined field301_0x13c;
    undefined field302_0x13d;
    undefined field303_0x13e;
    undefined field304_0x13f;
    undefined field305_0x140;
    undefined field306_0x141;
    undefined field307_0x142;
    undefined field308_0x143;
    undefined field309_0x144;
    undefined field310_0x145;
    undefined field311_0x146;
    undefined field312_0x147;
    undefined field313_0x148;
    undefined field314_0x149;
    undefined field315_0x14a;
    undefined field316_0x14b;
    undefined field317_0x14c;
    undefined field318_0x14d;
    undefined field319_0x14e;
    undefined field320_0x14f;
    undefined field321_0x150;
    undefined field322_0x151;
    undefined field323_0x152;
    undefined field324_0x153;
    undefined field325_0x154;
    undefined field326_0x155;
    undefined field327_0x156;
    undefined field328_0x157;
    undefined field329_0x158;
    undefined field330_0x159;
    undefined field331_0x15a;
    undefined field332_0x15b;
    undefined field333_0x15c;
    undefined field334_0x15d;
    undefined field335_0x15e;
    undefined field336_0x15f;
    undefined field337_0x160;
    undefined field338_0x161;
    undefined field339_0x162;
    undefined field340_0x163;
    undefined field341_0x164;
    undefined field342_0x165;
    undefined field343_0x166;
    undefined field344_0x167;
    undefined field345_0x168;
    undefined field346_0x169;
    undefined field347_0x16a;
    undefined field348_0x16b;
    undefined field349_0x16c;
    undefined field350_0x16d;
    undefined field351_0x16e;
    undefined field352_0x16f;
    undefined field353_0x170;
    undefined field354_0x171;
    undefined field355_0x172;
    undefined field356_0x173;
    undefined field357_0x174;
    undefined field358_0x175;
    undefined field359_0x176;
    undefined field360_0x177;
    undefined field361_0x178;
    undefined field362_0x179;
    undefined field363_0x17a;
    undefined field364_0x17b;
    undefined field365_0x17c;
    undefined field366_0x17d;
    undefined field367_0x17e;
    undefined field368_0x17f;
    undefined field369_0x180;
    undefined field370_0x181;
    undefined field371_0x182;
    undefined field372_0x183;
    undefined field373_0x184;
    undefined field374_0x185;
    undefined field375_0x186;
    undefined field376_0x187;
    undefined field377_0x188;
    undefined field378_0x189;
    undefined field379_0x18a;
    undefined field380_0x18b;
    undefined field381_0x18c;
    undefined field382_0x18d;
    undefined field383_0x18e;
    undefined field384_0x18f;
    undefined field385_0x190;
    undefined field386_0x191;
    undefined field387_0x192;
    undefined field388_0x193;
};

struct LinkedList {
    enum OBJECT_PROTOTYPE object_prot_index;
    int this_object_id;
    int container_object_id;
    int owner_object_id;
    int count;
    byte magick_byte;
    undefined field6_0x13;
    struct LinkedList * content;
    struct SomethingAboutBuilding * something_about_building_ptr;
    union __LinkedListUnion any;
    undefined field10_0x20;
    undefined field11_0x21;
    byte action_in_progress_flag; /* 0 or 1 */
    undefined field13_0x23;
    undefined field14_0x24;
    undefined field15_0x25;
    undefined field16_0x26;
    undefined field17_0x27;
    undefined field18_0x28;
    struct UnknownLinkedList64 * ptr_to_64_bytes_linked_list; /* Created by retype action */
    undefined field20_0x2d;
    undefined field21_0x2e;
    undefined field22_0x2f;
    undefined field23_0x30;
    undefined field24_0x31;
    undefined field25_0x32;
    undefined field26_0x33;
    undefined field27_0x34;
    undefined field28_0x35;
    undefined field29_0x36;
    undefined field30_0x37;
    undefined field31_0x38;
    undefined field32_0x39;
    undefined field33_0x3a;
    struct Character_580 * character_580_ptr;
    struct LinkedList * next;
};

struct LightInfo {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined field140_0x8c;
    undefined field141_0x8d;
    undefined field142_0x8e;
    undefined field143_0x8f;
    undefined field144_0x90;
    undefined field145_0x91;
    undefined field146_0x92;
    undefined field147_0x93;
    undefined field148_0x94;
    undefined field149_0x95;
    undefined field150_0x96;
    undefined field151_0x97;
    undefined field152_0x98;
    undefined field153_0x99;
    undefined field154_0x9a;
    undefined field155_0x9b;
    undefined field156_0x9c;
    undefined field157_0x9d;
    undefined field158_0x9e;
    undefined field159_0x9f;
    undefined field160_0xa0;
    undefined field161_0xa1;
    undefined field162_0xa2;
    undefined field163_0xa3;
    undefined field164_0xa4;
    undefined field165_0xa5;
    undefined field166_0xa6;
    undefined field167_0xa7;
    undefined field168_0xa8;
    undefined field169_0xa9;
    undefined field170_0xaa;
    undefined field171_0xab;
    undefined field172_0xac;
    undefined field173_0xad;
    undefined field174_0xae;
    undefined field175_0xaf;
    undefined field176_0xb0;
    undefined field177_0xb1;
    undefined field178_0xb2;
    undefined field179_0xb3;
    undefined field180_0xb4;
    undefined field181_0xb5;
    undefined field182_0xb6;
    undefined field183_0xb7;
    undefined field184_0xb8;
    undefined field185_0xb9;
    undefined field186_0xba;
    undefined field187_0xbb;
    undefined field188_0xbc;
    undefined field189_0xbd;
    undefined field190_0xbe;
    undefined field191_0xbf;
    undefined field192_0xc0;
    undefined field193_0xc1;
    undefined field194_0xc2;
    undefined field195_0xc3;
    undefined field196_0xc4;
    undefined field197_0xc5;
    undefined field198_0xc6;
    undefined field199_0xc7;
    undefined field200_0xc8;
    undefined field201_0xc9;
    undefined field202_0xca;
    undefined field203_0xcb;
    undefined field204_0xcc;
    undefined field205_0xcd;
    undefined field206_0xce;
    undefined field207_0xcf;
    undefined field208_0xd0;
    undefined field209_0xd1;
    undefined field210_0xd2;
    undefined field211_0xd3;
    undefined field212_0xd4;
    undefined field213_0xd5;
    undefined field214_0xd6;
    undefined field215_0xd7;
    undefined field216_0xd8;
    undefined field217_0xd9;
    undefined field218_0xda;
    undefined field219_0xdb;
    undefined field220_0xdc;
    undefined field221_0xdd;
    undefined field222_0xde;
    undefined field223_0xdf;
    undefined field224_0xe0;
    undefined field225_0xe1;
    undefined field226_0xe2;
    undefined field227_0xe3;
    undefined field228_0xe4;
    undefined field229_0xe5;
    undefined field230_0xe6;
    undefined field231_0xe7;
    undefined field232_0xe8;
    undefined field233_0xe9;
    undefined field234_0xea;
    undefined field235_0xeb;
    undefined field236_0xec;
    undefined field237_0xed;
    undefined field238_0xee;
    undefined field239_0xef;
    undefined field240_0xf0;
    undefined field241_0xf1;
    undefined field242_0xf2;
    undefined field243_0xf3;
    undefined field244_0xf4;
    undefined field245_0xf5;
    undefined field246_0xf6;
    undefined field247_0xf7;
    undefined field248_0xf8;
    undefined field249_0xf9;
    undefined field250_0xfa;
    undefined field251_0xfb;
    undefined field252_0xfc;
    undefined field253_0xfd;
    undefined field254_0xfe;
    undefined field255_0xff;
    undefined field256_0x100;
    undefined field257_0x101;
    undefined field258_0x102;
    undefined field259_0x103;
    undefined field260_0x104;
    undefined field261_0x105;
    undefined field262_0x106;
    undefined field263_0x107;
    undefined field264_0x108;
    undefined field265_0x109;
    undefined field266_0x10a;
    undefined field267_0x10b;
    undefined field268_0x10c;
    undefined field269_0x10d;
    undefined field270_0x10e;
    undefined field271_0x10f;
    undefined field272_0x110;
    undefined field273_0x111;
    undefined field274_0x112;
    undefined field275_0x113;
    undefined field276_0x114;
    undefined field277_0x115;
    undefined field278_0x116;
    undefined field279_0x117;
    undefined field280_0x118;
    undefined field281_0x119;
    undefined field282_0x11a;
    undefined field283_0x11b;
    undefined field284_0x11c;
    undefined field285_0x11d;
    undefined field286_0x11e;
    undefined field287_0x11f;
    undefined field288_0x120;
    undefined field289_0x121;
    undefined field290_0x122;
    undefined field291_0x123;
    undefined field292_0x124;
    undefined field293_0x125;
    undefined field294_0x126;
    undefined field295_0x127;
    undefined field296_0x128;
    undefined field297_0x129;
    undefined field298_0x12a;
    undefined field299_0x12b;
    undefined field300_0x12c;
    undefined field301_0x12d;
    undefined field302_0x12e;
    undefined field303_0x12f;
    undefined field304_0x130;
    undefined field305_0x131;
    undefined field306_0x132;
    undefined field307_0x133;
    undefined field308_0x134;
    undefined field309_0x135;
    undefined field310_0x136;
    undefined field311_0x137;
    undefined field312_0x138;
    undefined field313_0x139;
    undefined field314_0x13a;
    undefined field315_0x13b;
    undefined field316_0x13c;
    undefined field317_0x13d;
    undefined field318_0x13e;
    undefined field319_0x13f;
    undefined field320_0x140;
    undefined field321_0x141;
    undefined field322_0x142;
    undefined field323_0x143;
    undefined field324_0x144;
    undefined field325_0x145;
    undefined field326_0x146;
    undefined field327_0x147;
    undefined field328_0x148;
    undefined field329_0x149;
    undefined field330_0x14a;
    undefined field331_0x14b;
    undefined field332_0x14c;
    undefined field333_0x14d;
    undefined field334_0x14e;
    undefined field335_0x14f;
    undefined field336_0x150;
    undefined field337_0x151;
    undefined field338_0x152;
    undefined field339_0x153;
    undefined field340_0x154;
    undefined field341_0x155;
    undefined field342_0x156;
    undefined field343_0x157;
    undefined field344_0x158;
    undefined field345_0x159;
    undefined field346_0x15a;
    undefined field347_0x15b;
    undefined field348_0x15c;
    undefined field349_0x15d;
    undefined field350_0x15e;
    undefined field351_0x15f;
    undefined field352_0x160;
    undefined field353_0x161;
    undefined field354_0x162;
    undefined field355_0x163;
    undefined field356_0x164;
    undefined field357_0x165;
    undefined field358_0x166;
    undefined field359_0x167;
    undefined field360_0x168;
    undefined field361_0x169;
    undefined field362_0x16a;
    undefined field363_0x16b;
    undefined field364_0x16c;
    undefined field365_0x16d;
    undefined field366_0x16e;
    undefined field367_0x16f;
    undefined field368_0x170;
    undefined field369_0x171;
    undefined field370_0x172;
    undefined field371_0x173;
    undefined field372_0x174;
    undefined field373_0x175;
    undefined field374_0x176;
    undefined field375_0x177;
    undefined field376_0x178;
    undefined field377_0x179;
    undefined field378_0x17a;
    undefined field379_0x17b;
    undefined field380_0x17c;
    undefined field381_0x17d;
    undefined field382_0x17e;
    undefined field383_0x17f;
    undefined field384_0x180;
    undefined field385_0x181;
    undefined field386_0x182;
    undefined field387_0x183;
    undefined field388_0x184;
    undefined field389_0x185;
    undefined field390_0x186;
    undefined field391_0x187;
    undefined field392_0x188;
    undefined field393_0x189;
    undefined field394_0x18a;
    undefined field395_0x18b;
    undefined field396_0x18c;
    undefined field397_0x18d;
    undefined field398_0x18e;
    undefined field399_0x18f;
    undefined field400_0x190;
    undefined field401_0x191;
    undefined field402_0x192;
    undefined field403_0x193;
    undefined field404_0x194;
    undefined field405_0x195;
    undefined field406_0x196;
    undefined field407_0x197;
    float field408_0x198;
    undefined field409_0x19c;
    undefined field410_0x19d;
    undefined field411_0x19e;
    undefined field412_0x19f;
    float field413_0x1a0;
    undefined field414_0x1a4;
    undefined field415_0x1a5;
    undefined field416_0x1a6;
    undefined field417_0x1a7;
    undefined field418_0x1a8;
    undefined field419_0x1a9;
    undefined field420_0x1aa;
    undefined field421_0x1ab;
};

typedef enum BuildingKind {
    NULL_KIND=0,
    REGULAR_PROD=1,
    RAW_MATERIAL_PROD=2,
    CITY_BUILDING=3,
    CURCH_KIND=4,
    GUILD_HOUSE=5,
    HOME_OR_CASTLE=6,
    GURDS_KIND=7,
    THIEF_BANK_WAREHOUSE=8,
    STATUE_KIND=9
} BuildingKind;

typedef struct BuildingPrototype BuildingPrototype, *PBuildingPrototype;

typedef enum BuildingType:char {
    NULL_BUILDING=0,
    ARBEITERUNTERKUNFT=1,
    HOME=2,
    WELL=3,
    THIEFS=4,
    BANK=5,
    PRISON=6,
    CHURCH=7,
    HERBAL_STORE=8,
    WAREHOUSE=9,
    MARKET=10,
    LUMBER=11,
    QUARRY=12,
    MINE=13,
    PARFUMERIE=14,
    RATHAUS=15,
    FORT=16,
    GALGENBERG=17,
    SMITH=18,
    GUARDS=19,
    STONEMASON=20,
    SAWMILL=21,
    TAVERN=22,
    GILDENSITZ_PARFUMEURE=23,
    GILDENSITZ_SCHMIEDE=24,
    GILDENSITZ_STEINMETZ=25,
    GILDENSITZ_TISCHLER=26,
    TRANSPORT=27,
    KONTOR=28,
    GRAVEYARD=29,
    CASTLE=30,
    CAMP=31,
    SEWING=32,
    STATUE=33
} BuildingType;

struct BuildingPrototype {
    enum BuildingType type;
    char name[32];
    undefined field2_0x21;
    undefined field3_0x22;
    undefined field4_0x23;
    undefined field5_0x24;
    undefined field6_0x25;
    undefined field7_0x26;
    undefined field8_0x27;
    undefined field9_0x28;
    undefined field10_0x29;
    undefined field11_0x2a;
    undefined field12_0x2b;
    undefined field13_0x2c;
    undefined field14_0x2d;
    undefined field15_0x2e;
    undefined field16_0x2f;
    undefined field17_0x30;
    undefined field18_0x31;
    undefined field19_0x32;
    undefined field20_0x33;
    undefined field21_0x34;
    undefined field22_0x35;
    undefined field23_0x36;
    undefined field24_0x37;
    undefined field25_0x38;
    undefined field26_0x39;
    undefined field27_0x3a;
    undefined field28_0x3b;
    undefined field29_0x3c;
    undefined field30_0x3d;
    undefined field31_0x3e;
    undefined field32_0x3f;
    undefined field33_0x40;
    undefined field34_0x41;
    undefined field35_0x42;
    undefined field36_0x43;
    undefined field37_0x44;
    undefined field38_0x45;
    undefined field39_0x46;
    undefined field40_0x47;
    undefined field41_0x48;
    undefined field42_0x49;
    undefined field43_0x4a;
    undefined field44_0x4b;
    undefined field45_0x4c;
    undefined field46_0x4d;
    undefined field47_0x4e;
    undefined field48_0x4f;
    undefined field49_0x50;
    undefined field50_0x51;
    undefined field51_0x52;
    undefined field52_0x53;
    undefined field53_0x54;
    undefined field54_0x55;
    undefined field55_0x56;
    undefined field56_0x57;
    undefined field57_0x58;
    undefined field58_0x59;
    undefined field59_0x5a;
    undefined field60_0x5b;
    undefined field61_0x5c;
    undefined field62_0x5d;
    undefined field63_0x5e;
    undefined field64_0x5f;
    undefined field65_0x60;
    undefined field66_0x61;
    undefined field67_0x62;
    undefined field68_0x63;
    undefined field69_0x64;
    undefined field70_0x65;
    undefined field71_0x66;
    undefined field72_0x67;
    undefined field73_0x68;
    undefined field74_0x69;
    undefined field75_0x6a;
    undefined field76_0x6b;
    undefined field77_0x6c;
    undefined field78_0x6d;
    undefined field79_0x6e;
    undefined field80_0x6f;
    undefined field81_0x70;
    undefined field82_0x71;
    undefined field83_0x72;
    undefined field84_0x73;
    undefined field85_0x74;
    undefined field86_0x75;
    undefined field87_0x76;
    undefined field88_0x77;
    undefined field89_0x78;
    undefined field90_0x79;
    undefined field91_0x7a;
    undefined field92_0x7b;
    undefined field93_0x7c;
    undefined field94_0x7d;
    undefined field95_0x7e;
    undefined field96_0x7f;
    undefined field97_0x80;
    undefined field98_0x81;
    undefined field99_0x82;
    undefined field100_0x83;
    undefined field101_0x84;
    undefined field102_0x85;
    undefined field103_0x86;
    undefined field104_0x87;
    undefined field105_0x88;
    undefined field106_0x89;
    undefined field107_0x8a;
    undefined field108_0x8b;
    undefined field109_0x8c;
    undefined field110_0x8d;
    undefined field111_0x8e;
    undefined field112_0x8f;
    undefined field113_0x90;
    undefined field114_0x91;
    undefined field115_0x92;
    undefined field116_0x93;
    undefined field117_0x94;
    undefined field118_0x95;
    undefined field119_0x96;
    undefined field120_0x97;
    undefined field121_0x98;
    undefined field122_0x99;
    undefined field123_0x9a;
    undefined field124_0x9b;
    undefined field125_0x9c;
    undefined field126_0x9d;
    undefined field127_0x9e;
    undefined field128_0x9f;
    undefined field129_0xa0;
    undefined field130_0xa1;
    undefined field131_0xa2;
    undefined field132_0xa3;
    undefined field133_0xa4;
    undefined field134_0xa5;
    undefined field135_0xa6;
    undefined field136_0xa7;
    undefined field137_0xa8;
    undefined field138_0xa9;
    undefined field139_0xaa;
    undefined field140_0xab;
    undefined field141_0xac;
    undefined field142_0xad;
    undefined field143_0xae;
    undefined field144_0xaf;
    undefined field145_0xb0;
    undefined field146_0xb1;
    undefined field147_0xb2;
    undefined field148_0xb3;
    undefined field149_0xb4;
    undefined field150_0xb5;
    undefined field151_0xb6;
    undefined field152_0xb7;
    undefined field153_0xb8;
    undefined field154_0xb9;
    undefined field155_0xba;
    undefined field156_0xbb;
    undefined field157_0xbc;
    undefined field158_0xbd;
    undefined field159_0xbe;
    undefined field160_0xbf;
    undefined field161_0xc0;
    undefined field162_0xc1;
    undefined field163_0xc2;
    undefined field164_0xc3;
    undefined field165_0xc4;
    undefined field166_0xc5;
    undefined field167_0xc6;
    undefined field168_0xc7;
    undefined field169_0xc8;
    undefined field170_0xc9;
    undefined field171_0xca;
    undefined field172_0xcb;
    undefined field173_0xcc;
    undefined field174_0xcd;
    undefined field175_0xce;
    undefined field176_0xcf;
    undefined field177_0xd0;
    undefined field178_0xd1;
    undefined field179_0xd2;
    undefined field180_0xd3;
    undefined field181_0xd4;
    undefined field182_0xd5;
    undefined field183_0xd6;
    undefined field184_0xd7;
    undefined field185_0xd8;
    undefined field186_0xd9;
    undefined field187_0xda;
    undefined field188_0xdb;
    undefined field189_0xdc;
    undefined field190_0xdd;
    undefined field191_0xde;
    undefined field192_0xdf;
    undefined field193_0xe0;
    undefined field194_0xe1;
    undefined field195_0xe2;
    undefined field196_0xe3;
    undefined field197_0xe4;
    undefined field198_0xe5;
    undefined field199_0xe6;
    undefined field200_0xe7;
    undefined field201_0xe8;
    undefined field202_0xe9;
    undefined field203_0xea;
    undefined field204_0xeb;
    undefined field205_0xec;
    undefined field206_0xed;
    undefined field207_0xee;
    undefined field208_0xef;
    undefined field209_0xf0;
    undefined field210_0xf1;
    undefined field211_0xf2;
    undefined field212_0xf3;
    undefined field213_0xf4;
    undefined field214_0xf5;
    undefined field215_0xf6;
    undefined field216_0xf7;
    undefined field217_0xf8;
    undefined field218_0xf9;
    undefined field219_0xfa;
    undefined field220_0xfb;
    undefined field221_0xfc;
    undefined field222_0xfd;
    undefined field223_0xfe;
    undefined field224_0xff;
    undefined field225_0x100;
    undefined field226_0x101;
    undefined field227_0x102;
    undefined field228_0x103;
    undefined field229_0x104;
    undefined field230_0x105;
    undefined field231_0x106;
    undefined field232_0x107;
    undefined field233_0x108;
    undefined field234_0x109;
    undefined field235_0x10a;
    undefined field236_0x10b;
    undefined field237_0x10c;
    undefined field238_0x10d;
    undefined field239_0x10e;
    undefined field240_0x10f;
    undefined field241_0x110;
    undefined field242_0x111;
    undefined field243_0x112;
    undefined field244_0x113;
    undefined field245_0x114;
    undefined field246_0x115;
    undefined field247_0x116;
    undefined field248_0x117;
    undefined field249_0x118;
    undefined field250_0x119;
    undefined field251_0x11a;
    undefined field252_0x11b;
    undefined field253_0x11c;
    undefined field254_0x11d;
    undefined field255_0x11e;
    undefined field256_0x11f;
    undefined field257_0x120;
    undefined field258_0x121;
    undefined field259_0x122;
    undefined field260_0x123;
    undefined field261_0x124;
    undefined field262_0x125;
    undefined field263_0x126;
    undefined field264_0x127;
    undefined field265_0x128;
    undefined field266_0x129;
    undefined field267_0x12a;
    undefined field268_0x12b;
    undefined field269_0x12c;
    undefined field270_0x12d;
    undefined field271_0x12e;
    undefined field272_0x12f;
    undefined field273_0x130;
    undefined field274_0x131;
    undefined field275_0x132;
    undefined field276_0x133;
    undefined field277_0x134;
    undefined field278_0x135;
    undefined field279_0x136;
    undefined field280_0x137;
    undefined field281_0x138;
    undefined field282_0x139;
    undefined field283_0x13a;
    undefined field284_0x13b;
    undefined field285_0x13c;
    undefined field286_0x13d;
    undefined field287_0x13e;
    undefined field288_0x13f;
    undefined field289_0x140;
    undefined field290_0x141;
    undefined field291_0x142;
    undefined field292_0x143;
    undefined field293_0x144;
    undefined field294_0x145;
    undefined field295_0x146;
    undefined field296_0x147;
    undefined field297_0x148;
    undefined field298_0x149;
    undefined field299_0x14a;
    undefined field300_0x14b;
    undefined field301_0x14c;
    undefined field302_0x14d;
    undefined field303_0x14e;
    undefined field304_0x14f;
    undefined field305_0x150;
    undefined field306_0x151;
    undefined field307_0x152;
    undefined field308_0x153;
    undefined field309_0x154;
    undefined field310_0x155;
    undefined field311_0x156;
    undefined field312_0x157;
    undefined field313_0x158;
    undefined field314_0x159;
    undefined field315_0x15a;
    undefined field316_0x15b;
    undefined field317_0x15c;
    undefined field318_0x15d;
    undefined field319_0x15e;
    undefined field320_0x15f;
    undefined field321_0x160;
    undefined field322_0x161;
    undefined field323_0x162;
    undefined field324_0x163;
    undefined field325_0x164;
    undefined field326_0x165;
    undefined field327_0x166;
    undefined field328_0x167;
    undefined field329_0x168;
    undefined field330_0x169;
    undefined field331_0x16a;
    undefined field332_0x16b;
    undefined field333_0x16c;
    undefined field334_0x16d;
    undefined field335_0x16e;
    undefined field336_0x16f;
    undefined field337_0x170;
    undefined field338_0x171;
    undefined field339_0x172;
    undefined field340_0x173;
    undefined field341_0x174;
    undefined field342_0x175;
    undefined field343_0x176;
    undefined field344_0x177;
    undefined field345_0x178;
    undefined field346_0x179;
    undefined field347_0x17a;
    undefined field348_0x17b;
    undefined field349_0x17c;
    undefined field350_0x17d;
    undefined field351_0x17e;
    undefined field352_0x17f;
    undefined field353_0x180;
    undefined field354_0x181;
    undefined field355_0x182;
    undefined field356_0x183;
    undefined field357_0x184;
    undefined field358_0x185;
    undefined field359_0x186;
    undefined field360_0x187;
    undefined field361_0x188;
    undefined field362_0x189;
    undefined field363_0x18a;
    undefined field364_0x18b;
    undefined field365_0x18c;
    undefined field366_0x18d;
    undefined field367_0x18e;
    undefined field368_0x18f;
    undefined field369_0x190;
    undefined field370_0x191;
    undefined field371_0x192;
    undefined field372_0x193;
    undefined field373_0x194;
    undefined field374_0x195;
    undefined field375_0x196;
    undefined field376_0x197;
    undefined field377_0x198;
    undefined field378_0x199;
    undefined field379_0x19a;
    undefined field380_0x19b;
    undefined field381_0x19c;
    undefined field382_0x19d;
    undefined field383_0x19e;
    undefined field384_0x19f;
    undefined field385_0x1a0;
    undefined field386_0x1a1;
    undefined field387_0x1a2;
    undefined field388_0x1a3;
    undefined field389_0x1a4;
    undefined field390_0x1a5;
    undefined field391_0x1a6;
    undefined field392_0x1a7;
    undefined field393_0x1a8;
    undefined field394_0x1a9;
    undefined field395_0x1aa;
    undefined field396_0x1ab;
    undefined field397_0x1ac;
    undefined field398_0x1ad;
    undefined field399_0x1ae;
    undefined field400_0x1af;
    undefined field401_0x1b0;
    undefined field402_0x1b1;
    undefined field403_0x1b2;
    undefined field404_0x1b3;
    undefined field405_0x1b4;
    undefined field406_0x1b5;
    undefined field407_0x1b6;
    undefined field408_0x1b7;
    undefined field409_0x1b8;
    undefined field410_0x1b9;
    undefined field411_0x1ba;
    undefined field412_0x1bb;
    undefined field413_0x1bc;
    undefined field414_0x1bd;
    undefined field415_0x1be;
    undefined field416_0x1bf;
    undefined field417_0x1c0;
    undefined field418_0x1c1;
    undefined field419_0x1c2;
    undefined field420_0x1c3;
    undefined field421_0x1c4;
    undefined field422_0x1c5;
    undefined field423_0x1c6;
    undefined field424_0x1c7;
    undefined field425_0x1c8;
    undefined field426_0x1c9;
    undefined field427_0x1ca;
    undefined field428_0x1cb;
    undefined field429_0x1cc;
    undefined field430_0x1cd;
    undefined field431_0x1ce;
    undefined field432_0x1cf;
    undefined field433_0x1d0;
    undefined field434_0x1d1;
    undefined field435_0x1d2;
    undefined field436_0x1d3;
    undefined field437_0x1d4;
    undefined field438_0x1d5;
    undefined field439_0x1d6;
    undefined field440_0x1d7;
    undefined field441_0x1d8;
    undefined field442_0x1d9;
    undefined field443_0x1da;
    undefined field444_0x1db;
    undefined field445_0x1dc;
    undefined field446_0x1dd;
    undefined field447_0x1de;
    undefined field448_0x1df;
    undefined field449_0x1e0;
    undefined field450_0x1e1;
    undefined field451_0x1e2;
    undefined field452_0x1e3;
    undefined field453_0x1e4;
    undefined field454_0x1e5;
    undefined field455_0x1e6;
    undefined field456_0x1e7;
    undefined field457_0x1e8;
    undefined field458_0x1e9;
    undefined field459_0x1ea;
    undefined field460_0x1eb;
    undefined field461_0x1ec;
    undefined field462_0x1ed;
    undefined field463_0x1ee;
    undefined field464_0x1ef;
    undefined field465_0x1f0;
    undefined field466_0x1f1;
    undefined field467_0x1f2;
    undefined field468_0x1f3;
    undefined field469_0x1f4;
    undefined field470_0x1f5;
    undefined field471_0x1f6;
    undefined field472_0x1f7;
    undefined field473_0x1f8;
    undefined field474_0x1f9;
    undefined field475_0x1fa;
    undefined field476_0x1fb;
    undefined field477_0x1fc;
    undefined field478_0x1fd;
    undefined field479_0x1fe;
    undefined field480_0x1ff;
    undefined field481_0x200;
    undefined field482_0x201;
    undefined field483_0x202;
    undefined field484_0x203;
    undefined field485_0x204;
    undefined field486_0x205;
    undefined field487_0x206;
    undefined field488_0x207;
    undefined field489_0x208;
    undefined field490_0x209;
    undefined field491_0x20a;
    undefined field492_0x20b;
    undefined field493_0x20c;
    undefined field494_0x20d;
    undefined field495_0x20e;
    undefined field496_0x20f;
    undefined field497_0x210;
    undefined field498_0x211;
    undefined field499_0x212;
    undefined field500_0x213;
    undefined field501_0x214;
    undefined field502_0x215;
    undefined field503_0x216;
    undefined field504_0x217;
    undefined field505_0x218;
    undefined field506_0x219;
    undefined field507_0x21a;
    undefined field508_0x21b;
    undefined field509_0x21c;
    undefined field510_0x21d;
    undefined field511_0x21e;
    undefined field512_0x21f;
    undefined field513_0x220;
    undefined field514_0x221;
    undefined field515_0x222;
    undefined field516_0x223;
    undefined field517_0x224;
    undefined field518_0x225;
    undefined field519_0x226;
    undefined field520_0x227;
    undefined field521_0x228;
    undefined field522_0x229;
    undefined field523_0x22a;
    undefined field524_0x22b;
    undefined field525_0x22c;
    undefined field526_0x22d;
    undefined field527_0x22e;
    undefined field528_0x22f;
    undefined field529_0x230;
    undefined field530_0x231;
    undefined field531_0x232;
    undefined field532_0x233;
    undefined field533_0x234;
    undefined field534_0x235;
    undefined field535_0x236;
    undefined field536_0x237;
    undefined field537_0x238;
    undefined field538_0x239;
    undefined field539_0x23a;
    undefined field540_0x23b;
    undefined field541_0x23c;
    undefined field542_0x23d;
    undefined field543_0x23e;
    undefined field544_0x23f;
    byte maybe_time_1;
    byte maybe_time_2;
    undefined field547_0x242;
    undefined field548_0x243;
    undefined field549_0x244;
    undefined field550_0x245;
    undefined field551_0x246;
    undefined field552_0x247;
    undefined field553_0x248;
    undefined field554_0x249;
    undefined field555_0x24a;
    undefined field556_0x24b;
    undefined field557_0x24c;
};

typedef struct Character Character, *PCharacter;

typedef enum PlayerMode:char {
    UNKNOWN_0=0,
    MASTER=1,
    UNKNOWN_2=2,
    UNKNOWN_3=3,
    UNKNOWN_4=4,
    AI=5,
    PLAYER=6,
    UNKNOWN_7=7,
    UNKNOWN_8=8,
    UNKNOWN_9=9,
    UNKNOWN_10=10,
    UNKNOWN_11=11,
    UNKNOWN_12=12,
    UNKNOWN_13=13,
    UNKNOWN_14=14,
    UNKNOWN_15=15,
    UNKNOWN_16=16,
    UNKNOWN_17=17
} PlayerMode;

typedef struct Handlung Handlung, *PHandlung;

struct Character {
    short index;
    enum PlayerMode playermode;
    undefined field2_0x3;
    int object_id;
    byte unknown_byte;
    byte unknown_byte_2;
    ushort field6_0xa;
    undefined field7_0xc;
    byte field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    float field11_0x10;
    float random_float;
    float field13_0x18;
    float field14_0x1c;
    float field15_0x20;
    int field16_0x24;
    undefined field17_0x28;
    undefined field18_0x29;
    undefined field19_0x2a;
    undefined field20_0x2b;
    undefined field21_0x2c;
    undefined field22_0x2d;
    undefined field23_0x2e;
    undefined field24_0x2f;
    char first_name[16];
    char last_name[16];
    short some_index;
    undefined field28_0x52;
    undefined field29_0x53;
    undefined field30_0x54;
    undefined field31_0x55;
    undefined field32_0x56;
    undefined field33_0x57;
    undefined field34_0x58;
    undefined field35_0x59;
    undefined field36_0x5a;
    undefined field37_0x5b;
    int children_maybe[8];
    undefined field39_0x7c;
    undefined field40_0x7d;
    undefined field41_0x7e;
    undefined field42_0x7f;
    undefined field43_0x80;
    undefined field44_0x81;
    undefined field45_0x82;
    undefined field46_0x83;
    undefined field47_0x84;
    undefined field48_0x85;
    undefined field49_0x86;
    undefined field50_0x87;
    undefined field51_0x88;
    undefined field52_0x89;
    undefined field53_0x8a;
    undefined field54_0x8b;
    undefined field55_0x8c;
    undefined field56_0x8d;
    undefined field57_0x8e;
    undefined field58_0x8f;
    undefined field59_0x90;
    undefined field60_0x91;
    undefined field61_0x92;
    undefined field62_0x93;
    undefined field63_0x94;
    undefined field64_0x95;
    undefined field65_0x96;
    undefined field66_0x97;
    undefined field67_0x98;
    undefined field68_0x99;
    undefined field69_0x9a;
    undefined field70_0x9b;
    undefined field71_0x9c;
    undefined field72_0x9d;
    undefined field73_0x9e;
    undefined field74_0x9f;
    undefined field75_0xa0;
    undefined field76_0xa1;
    undefined field77_0xa2;
    undefined field78_0xa3;
    undefined field79_0xa4;
    undefined field80_0xa5;
    undefined field81_0xa6;
    undefined field82_0xa7;
    undefined field83_0xa8;
    undefined field84_0xa9;
    undefined field85_0xaa;
    undefined field86_0xab;
    undefined field87_0xac;
    undefined field88_0xad;
    undefined field89_0xae;
    undefined field90_0xaf;
    undefined field91_0xb0;
    undefined field92_0xb1;
    undefined field93_0xb2;
    undefined field94_0xb3;
    undefined field95_0xb4;
    undefined field96_0xb5;
    undefined field97_0xb6;
    undefined field98_0xb7;
    undefined field99_0xb8;
    undefined field100_0xb9;
    undefined field101_0xba;
    undefined field102_0xbb;
    undefined field103_0xbc;
    undefined field104_0xbd;
    undefined field105_0xbe;
    undefined field106_0xbf;
    undefined field107_0xc0;
    undefined field108_0xc1;
    undefined field109_0xc2;
    undefined field110_0xc3;
    undefined field111_0xc4;
    undefined field112_0xc5;
    undefined field113_0xc6;
    undefined field114_0xc7;
    undefined field115_0xc8;
    undefined field116_0xc9;
    undefined field117_0xca;
    undefined field118_0xcb;
    undefined field119_0xcc;
    undefined field120_0xcd;
    undefined field121_0xce;
    undefined field122_0xcf;
    undefined field123_0xd0;
    undefined field124_0xd1;
    undefined field125_0xd2;
    undefined field126_0xd3;
    undefined field127_0xd4;
    undefined field128_0xd5;
    undefined field129_0xd6;
    undefined field130_0xd7;
    undefined field131_0xd8;
    undefined field132_0xd9;
    undefined field133_0xda;
    undefined field134_0xdb;
    undefined field135_0xdc;
    undefined field136_0xdd;
    undefined field137_0xde;
    undefined field138_0xdf;
    undefined field139_0xe0;
    undefined field140_0xe1;
    undefined field141_0xe2;
    undefined field142_0xe3;
    undefined field143_0xe4;
    undefined field144_0xe5;
    undefined field145_0xe6;
    undefined field146_0xe7;
    undefined field147_0xe8;
    undefined field148_0xe9;
    undefined field149_0xea;
    undefined field150_0xeb;
    undefined field151_0xec;
    undefined field152_0xed;
    undefined field153_0xee;
    undefined field154_0xef;
    undefined field155_0xf0;
    undefined field156_0xf1;
    undefined field157_0xf2;
    undefined field158_0xf3;
    undefined field159_0xf4;
    undefined field160_0xf5;
    undefined field161_0xf6;
    undefined field162_0xf7;
    undefined field163_0xf8;
    undefined field164_0xf9;
    undefined field165_0xfa;
    undefined field166_0xfb;
    undefined field167_0xfc;
    undefined field168_0xfd;
    undefined field169_0xfe;
    undefined field170_0xff;
    undefined field171_0x100;
    undefined field172_0x101;
    undefined field173_0x102;
    undefined field174_0x103;
    undefined field175_0x104;
    undefined field176_0x105;
    undefined field177_0x106;
    undefined field178_0x107;
    undefined field179_0x108;
    undefined field180_0x109;
    undefined field181_0x10a;
    undefined field182_0x10b;
    undefined field183_0x10c;
    undefined field184_0x10d;
    undefined field185_0x10e;
    undefined field186_0x10f;
    undefined field187_0x110;
    undefined field188_0x111;
    undefined field189_0x112;
    undefined field190_0x113;
    undefined field191_0x114;
    undefined field192_0x115;
    undefined field193_0x116;
    undefined field194_0x117;
    undefined field195_0x118;
    undefined field196_0x119;
    undefined field197_0x11a;
    undefined field198_0x11b;
    undefined field199_0x11c;
    undefined field200_0x11d;
    undefined field201_0x11e;
    undefined field202_0x11f;
    undefined field203_0x120;
    undefined field204_0x121;
    undefined field205_0x122;
    undefined field206_0x123;
    undefined field207_0x124;
    undefined field208_0x125;
    undefined field209_0x126;
    undefined field210_0x127;
    undefined field211_0x128;
    undefined field212_0x129;
    undefined field213_0x12a;
    undefined field214_0x12b;
    undefined field215_0x12c;
    undefined field216_0x12d;
    undefined field217_0x12e;
    undefined field218_0x12f;
    undefined field219_0x130;
    undefined field220_0x131;
    undefined1 index_of_thingy_148; /* Created by retype action */
    undefined field222_0x133;
    undefined field223_0x134;
    undefined field224_0x135;
    undefined field225_0x136;
    undefined field226_0x137;
    undefined field227_0x138;
    undefined field228_0x139;
    undefined field229_0x13a;
    undefined field230_0x13b;
    undefined field231_0x13c;
    undefined field232_0x13d;
    undefined field233_0x13e;
    undefined field234_0x13f;
    undefined field235_0x140;
    undefined field236_0x141;
    undefined field237_0x142;
    undefined field238_0x143;
    undefined field239_0x144;
    undefined field240_0x145;
    undefined field241_0x146;
    undefined field242_0x147;
    undefined field243_0x148;
    undefined field244_0x149;
    undefined field245_0x14a;
    undefined field246_0x14b;
    undefined field247_0x14c;
    undefined field248_0x14d;
    undefined field249_0x14e;
    undefined field250_0x14f;
    undefined field251_0x150;
    undefined field252_0x151;
    undefined field253_0x152;
    undefined field254_0x153;
    undefined field255_0x154;
    undefined field256_0x155;
    undefined field257_0x156;
    undefined field258_0x157;
    undefined field259_0x158;
    undefined field260_0x159;
    undefined field261_0x15a;
    undefined field262_0x15b;
    undefined field263_0x15c;
    undefined field264_0x15d;
    undefined field265_0x15e;
    undefined field266_0x15f;
    undefined field267_0x160;
    undefined field268_0x161;
    undefined field269_0x162;
    undefined field270_0x163;
    byte some_enum;
    undefined field272_0x165;
    undefined field273_0x166;
    undefined field274_0x167;
    undefined field275_0x168;
    undefined field276_0x169;
    undefined field277_0x16a;
    undefined field278_0x16b;
    struct BuildingInstance * master_building;
    struct BuildingInstance * home;
    undefined field281_0x174;
    undefined field282_0x175;
    undefined field283_0x176;
    undefined field284_0x177;
    struct LinkedList * inventory;
    struct Handlung * action_ptr;
    undefined field287_0x180;
    undefined field288_0x181;
    undefined field289_0x182;
    undefined field290_0x183;
    struct Character_580 * char_580_1;
    undefined field292_0x188;
    undefined field293_0x189;
    undefined field294_0x18a;
    undefined field295_0x18b;
    int field296_0x18c;
    int field297_0x190;
    int action_points;
    undefined field299_0x198;
    undefined field300_0x199;
    undefined field301_0x19a;
    undefined field302_0x19b;
    undefined field303_0x19c;
    undefined field304_0x19d;
    undefined field305_0x19e;
    undefined field306_0x19f;
    undefined field307_0x1a0;
    undefined field308_0x1a1;
    undefined field309_0x1a2;
    undefined field310_0x1a3;
    undefined field311_0x1a4;
    undefined field312_0x1a5;
    undefined field313_0x1a6;
    undefined field314_0x1a7;
    undefined field315_0x1a8;
    undefined field316_0x1a9;
    undefined field317_0x1aa;
    undefined field318_0x1ab;
    undefined field319_0x1ac;
    undefined field320_0x1ad;
    undefined field321_0x1ae;
    undefined field322_0x1af;
    undefined field323_0x1b0;
    undefined1 field324_0x1b1;
    undefined field325_0x1b2;
    undefined field326_0x1b3;
    int flags_maybe;
    int master_budget; /* Created by retype action */
    ushort field329_0x1bc; /* Maybe 4 bytes */
    undefined field330_0x1be;
    undefined field331_0x1bf;
    undefined4 field332_0x1c0;
    undefined field333_0x1c4;
    undefined field334_0x1c5;
    undefined field335_0x1c6;
    undefined field336_0x1c7;
    uint maybe_flags;
    undefined field338_0x1cc;
    undefined field339_0x1cd;
    undefined field340_0x1ce;
    undefined field341_0x1cf;
    undefined field342_0x1d0;
    undefined field343_0x1d1;
    undefined field344_0x1d2;
    undefined field345_0x1d3;
    undefined field346_0x1d4;
    undefined field347_0x1d5;
    undefined field348_0x1d6;
    undefined field349_0x1d7;
    undefined field350_0x1d8;
    undefined field351_0x1d9;
    undefined field352_0x1da;
    undefined field353_0x1db;
    undefined field354_0x1dc;
    undefined field355_0x1dd;
    undefined field356_0x1de;
    undefined field357_0x1df;
    undefined field358_0x1e0;
    undefined field359_0x1e1;
    undefined field360_0x1e2;
    undefined field361_0x1e3;
    float field362_0x1e4;
    undefined4 field363_0x1e8;
    undefined field364_0x1ec;
    undefined field365_0x1ed;
    undefined field366_0x1ee;
    undefined field367_0x1ef;
    int field368_0x1f0;
    undefined field369_0x1f4;
    undefined field370_0x1f5;
    undefined field371_0x1f6;
    undefined field372_0x1f7;
    undefined field373_0x1f8;
    undefined field374_0x1f9;
    undefined field375_0x1fa;
    undefined field376_0x1fb;
    undefined field377_0x1fc;
    undefined field378_0x1fd;
    undefined field379_0x1fe;
    undefined field380_0x1ff;
    undefined field381_0x200;
    undefined field382_0x201;
    undefined field383_0x202;
    undefined field384_0x203;
    undefined field385_0x204;
    undefined field386_0x205;
    undefined field387_0x206;
    undefined field388_0x207;
    undefined field389_0x208;
    undefined field390_0x209;
    undefined field391_0x20a;
    undefined field392_0x20b;
    int cut_scene_id;
    int field394_0x210;
    undefined field395_0x214;
    byte field396_0x215;
    byte field397_0x216;
    byte field398_0x217;
    byte field399_0x218;
    undefined field400_0x219;
    undefined field401_0x21a;
    undefined field402_0x21b;
};

struct Handlung {
    byte maybe_id;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int field4_0x4;
    ushort charater_index;
    undefined field6_0xa;
    undefined field7_0xb;
    undefined field8_0xc;
    undefined field9_0xd;
    undefined field10_0xe;
    undefined field11_0xf;
    int field12_0x10;
    undefined field13_0x14;
    undefined field14_0x15;
    undefined field15_0x16;
    undefined field16_0x17;
    undefined field17_0x18;
    undefined field18_0x19;
    undefined field19_0x1a;
    undefined field20_0x1b;
    undefined field21_0x1c;
    undefined field22_0x1d;
    undefined field23_0x1e;
    undefined field24_0x1f;
    undefined field25_0x20;
    undefined field26_0x21;
    undefined field27_0x22;
    undefined field28_0x23;
    undefined field29_0x24;
    undefined field30_0x25;
    undefined field31_0x26;
    undefined field32_0x27;
    undefined field33_0x28;
    undefined field34_0x29;
    undefined field35_0x2a;
    undefined field36_0x2b;
    undefined field37_0x2c;
    undefined field38_0x2d;
    undefined field39_0x2e;
    undefined field40_0x2f;
    undefined field41_0x30;
    undefined field42_0x31;
    undefined field43_0x32;
    undefined field44_0x33;
    undefined field45_0x34;
    undefined field46_0x35;
    undefined field47_0x36;
    undefined field48_0x37;
    undefined field49_0x38;
    undefined field50_0x39;
    undefined field51_0x3a;
    undefined field52_0x3b;
    undefined field53_0x3c;
    undefined field54_0x3d;
    undefined field55_0x3e;
    undefined field56_0x3f;
    undefined field57_0x40;
    undefined field58_0x41;
    undefined field59_0x42;
    undefined field60_0x43;
    undefined field61_0x44;
    undefined field62_0x45;
    undefined field63_0x46;
    undefined field64_0x47;
    undefined field65_0x48;
    undefined field66_0x49;
    undefined field67_0x4a;
    undefined field68_0x4b;
    undefined field69_0x4c;
    undefined field70_0x4d;
    undefined field71_0x4e;
    undefined field72_0x4f;
    undefined field73_0x50;
    undefined field74_0x51;
    undefined field75_0x52;
    undefined field76_0x53;
    undefined field77_0x54;
    undefined field78_0x55;
    undefined field79_0x56;
    undefined field80_0x57;
    undefined field81_0x58;
    undefined field82_0x59;
    undefined field83_0x5a;
    undefined field84_0x5b;
    undefined field85_0x5c;
    undefined field86_0x5d;
    undefined field87_0x5e;
    undefined field88_0x5f;
    undefined field89_0x60;
    undefined field90_0x61;
    undefined field91_0x62;
    undefined field92_0x63;
    undefined field93_0x64;
    undefined field94_0x65;
    undefined field95_0x66;
    undefined field96_0x67;
    undefined field97_0x68;
    undefined field98_0x69;
    undefined field99_0x6a;
    undefined field100_0x6b;
    undefined field101_0x6c;
    undefined field102_0x6d;
    undefined field103_0x6e;
    undefined field104_0x6f;
    int some_state_maybe;
    undefined field106_0x74;
    undefined field107_0x75;
    undefined field108_0x76;
    undefined field109_0x77;
    byte field110_0x78;
    undefined field111_0x79;
    undefined field112_0x7a;
    undefined field113_0x7b;
    undefined * unknown_ptr;
    undefined field115_0x80;
    undefined field116_0x81;
    undefined field117_0x82;
    undefined field118_0x83;
    undefined field119_0x84;
    undefined field120_0x85;
    undefined field121_0x86;
    undefined field122_0x87;
    undefined field123_0x88;
    undefined field124_0x89;
    undefined field125_0x8a;
    undefined field126_0x8b;
    undefined field127_0x8c;
    undefined field128_0x8d;
    undefined field129_0x8e;
    undefined field130_0x8f;
    undefined field131_0x90;
    undefined field132_0x91;
    undefined field133_0x92;
    undefined field134_0x93;
    undefined field135_0x94;
    undefined field136_0x95;
    undefined field137_0x96;
    undefined field138_0x97;
    undefined field139_0x98;
    undefined field140_0x99;
    undefined field141_0x9a;
    undefined field142_0x9b;
    undefined field143_0x9c;
    undefined field144_0x9d;
    undefined field145_0x9e;
    undefined field146_0x9f;
    undefined field147_0xa0;
    undefined field148_0xa1;
    undefined field149_0xa2;
    undefined field150_0xa3;
    undefined field151_0xa4;
    undefined field152_0xa5;
    undefined field153_0xa6;
    undefined field154_0xa7;
    undefined field155_0xa8;
    undefined field156_0xa9;
    undefined field157_0xaa;
    undefined field158_0xab;
    ushort id_or_index_of_different_size;
    undefined field160_0xae;
    undefined field161_0xaf;
    undefined4 field162_0xb0;
    undefined4 field163_0xb4;
    int building_id;
    int some_object_id;
    int object_id;
    float float_again;
    undefined field168_0xc8;
    undefined field169_0xc9;
    undefined field170_0xca;
    undefined field171_0xcb;
    float another_float;
    undefined field173_0xd0;
    undefined field174_0xd1;
    undefined field175_0xd2;
    undefined field176_0xd3;
    float some_float;
    undefined field178_0xd8;
    undefined field179_0xd9;
    undefined field180_0xda;
    undefined field181_0xdb;
    undefined field182_0xdc;
    undefined field183_0xdd;
    undefined field184_0xde;
    undefined field185_0xdf;
    undefined field186_0xe0;
    undefined field187_0xe1;
    undefined field188_0xe2;
    undefined field189_0xe3;
    undefined field190_0xe4;
    undefined field191_0xe5;
    undefined field192_0xe6;
    undefined field193_0xe7;
    undefined field194_0xe8;
    undefined field195_0xe9;
    undefined field196_0xea;
    undefined field197_0xeb;
    undefined field198_0xec;
    undefined field199_0xed;
    undefined field200_0xee;
    undefined field201_0xef;
    undefined field202_0xf0;
    undefined field203_0xf1;
    undefined field204_0xf2;
    undefined field205_0xf3;
    undefined field206_0xf4;
    undefined field207_0xf5;
    undefined field208_0xf6;
    undefined field209_0xf7;
    undefined field210_0xf8;
    undefined field211_0xf9;
    undefined field212_0xfa;
    undefined field213_0xfb;
    undefined field214_0xfc;
    undefined field215_0xfd;
    undefined field216_0xfe;
    undefined field217_0xff;
    undefined field218_0x100;
    undefined field219_0x101;
    undefined field220_0x102;
    undefined field221_0x103;
    undefined field222_0x104;
    undefined field223_0x105;
    undefined field224_0x106;
    undefined field225_0x107;
    undefined field226_0x108;
    undefined field227_0x109;
    undefined field228_0x10a;
    undefined field229_0x10b;
    undefined field230_0x10c;
    undefined field231_0x10d;
    undefined field232_0x10e;
    undefined field233_0x10f;
    undefined field234_0x110;
    undefined field235_0x111;
    undefined field236_0x112;
    undefined field237_0x113;
    undefined field238_0x114;
    undefined field239_0x115;
    undefined field240_0x116;
    undefined field241_0x117;
    undefined field242_0x118;
    undefined field243_0x119;
    undefined field244_0x11a;
    undefined field245_0x11b;
    undefined field246_0x11c;
    undefined field247_0x11d;
    undefined field248_0x11e;
    undefined field249_0x11f;
    undefined field250_0x120;
    undefined field251_0x121;
    undefined field252_0x122;
    undefined field253_0x123;
    undefined field254_0x124;
    undefined field255_0x125;
    undefined field256_0x126;
    undefined field257_0x127;
    undefined field258_0x128;
    undefined field259_0x129;
    undefined field260_0x12a;
    undefined field261_0x12b;
    undefined field262_0x12c;
    undefined field263_0x12d;
    undefined field264_0x12e;
    undefined field265_0x12f;
    undefined field266_0x130;
    undefined field267_0x131;
    undefined field268_0x132;
    undefined field269_0x133;
    undefined field270_0x134;
    undefined field271_0x135;
    undefined field272_0x136;
    undefined field273_0x137;
    undefined field274_0x138;
    undefined field275_0x139;
    undefined field276_0x13a;
    undefined field277_0x13b;
    undefined field278_0x13c;
    undefined field279_0x13d;
    undefined field280_0x13e;
    undefined field281_0x13f;
    undefined field282_0x140;
    undefined field283_0x141;
    undefined field284_0x142;
    undefined field285_0x143;
    undefined field286_0x144;
    undefined field287_0x145;
    undefined field288_0x146;
    undefined field289_0x147;
    undefined field290_0x148;
    undefined field291_0x149;
    undefined field292_0x14a;
    undefined field293_0x14b;
};

typedef struct CutScene CutScene, *PCutScene;

typedef enum SceneType:char {
    NULL_SCENE=0,
    VOTING=1,
    LAW_COURT=2,
    BUILDINGS_RELATED=3,
    DUEL=4,
    EXECUTION=5,
    WEDDING=6,
    BIRTH=7,
    DEATH=8,
    BANKROT=9,
    AUTCTION=10,
    SALON=11
} SceneType;

struct CutScene {
    int id;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    enum SceneType type;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    int character_id;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    int object_id_maybe_building;
    undefined field15_0x18;
    undefined field16_0x19;
    undefined field17_0x1a;
    undefined field18_0x1b;
    undefined field19_0x1c;
    undefined field20_0x1d;
    undefined field21_0x1e;
    undefined field22_0x1f;
    undefined field23_0x20;
    undefined field24_0x21;
    undefined field25_0x22;
    undefined field26_0x23;
    undefined field27_0x24;
    undefined field28_0x25;
    undefined field29_0x26;
    undefined field30_0x27;
    undefined field31_0x28;
    undefined field32_0x29;
    undefined field33_0x2a;
    undefined field34_0x2b;
    undefined field35_0x2c;
    undefined field36_0x2d;
    undefined field37_0x2e;
    undefined field38_0x2f;
    byte character_ids_count; /* Created by retype action */
    undefined field40_0x31;
    undefined field41_0x32;
    undefined field42_0x33;
    int charcater_ids[16];
    undefined field44_0x74;
    undefined field45_0x75;
    undefined field46_0x76;
    undefined field47_0x77;
    int rand_seed;
    int object_id_maybe_building_2;
    undefined field50_0x80;
    undefined field51_0x81;
    undefined field52_0x82;
    undefined field53_0x83;
    undefined field54_0x84;
    undefined field55_0x85;
    undefined field56_0x86;
    undefined field57_0x87;
    undefined field58_0x88;
    undefined field59_0x89;
    undefined field60_0x8a;
    undefined field61_0x8b;
    undefined field62_0x8c;
    undefined field63_0x8d;
    undefined field64_0x8e;
    undefined field65_0x8f;
    undefined field66_0x90;
    undefined field67_0x91;
    undefined field68_0x92;
    undefined field69_0x93;
    undefined field70_0x94;
    undefined field71_0x95;
    undefined field72_0x96;
    undefined field73_0x97;
    undefined field74_0x98;
    undefined field75_0x99;
    undefined field76_0x9a;
    undefined field77_0x9b;
    undefined field78_0x9c;
    undefined field79_0x9d;
    undefined field80_0x9e;
    undefined field81_0x9f;
    undefined field82_0xa0;
    undefined field83_0xa1;
    undefined field84_0xa2;
    undefined field85_0xa3;
    undefined field86_0xa4;
    undefined field87_0xa5;
    undefined field88_0xa6;
    undefined field89_0xa7;
    undefined field90_0xa8;
    undefined field91_0xa9;
    undefined field92_0xaa;
    undefined field93_0xab;
    undefined field94_0xac;
    undefined field95_0xad;
    undefined field96_0xae;
    undefined field97_0xaf;
    undefined field98_0xb0;
    undefined field99_0xb1;
    undefined field100_0xb2;
    undefined field101_0xb3;
    undefined field102_0xb4;
    undefined field103_0xb5;
    undefined field104_0xb6;
    undefined field105_0xb7;
    undefined field106_0xb8;
    undefined field107_0xb9;
    undefined field108_0xba;
    undefined field109_0xbb;
    undefined field110_0xbc;
    undefined field111_0xbd;
    undefined field112_0xbe;
    undefined field113_0xbf;
    undefined field114_0xc0;
    undefined field115_0xc1;
    undefined field116_0xc2;
    undefined field117_0xc3;
    undefined field118_0xc4;
    undefined field119_0xc5;
    undefined field120_0xc6;
    undefined field121_0xc7;
    undefined field122_0xc8;
    undefined field123_0xc9;
    undefined field124_0xca;
    undefined field125_0xcb;
    undefined field126_0xcc;
    undefined field127_0xcd;
    undefined field128_0xce;
    undefined field129_0xcf;
    undefined field130_0xd0;
    undefined field131_0xd1;
    undefined field132_0xd2;
    undefined field133_0xd3;
    undefined field134_0xd4;
    undefined field135_0xd5;
    undefined field136_0xd6;
    undefined field137_0xd7;
    undefined field138_0xd8;
    undefined field139_0xd9;
    undefined field140_0xda;
    undefined field141_0xdb;
    undefined field142_0xdc;
    undefined field143_0xdd;
    undefined field144_0xde;
    undefined field145_0xdf;
    undefined field146_0xe0;
    undefined field147_0xe1;
    undefined field148_0xe2;
    undefined field149_0xe3;
    undefined field150_0xe4;
    undefined field151_0xe5;
    undefined field152_0xe6;
    undefined field153_0xe7;
    undefined field154_0xe8;
    undefined field155_0xe9;
    undefined field156_0xea;
    undefined field157_0xeb;
    undefined field158_0xec;
    undefined field159_0xed;
    undefined field160_0xee;
    undefined field161_0xef;
    undefined field162_0xf0;
    undefined field163_0xf1;
    undefined field164_0xf2;
    undefined field165_0xf3;
    undefined field166_0xf4;
    undefined field167_0xf5;
    undefined field168_0xf6;
    undefined field169_0xf7;
    undefined field170_0xf8;
    undefined field171_0xf9;
    undefined field172_0xfa;
    undefined field173_0xfb;
    undefined field174_0xfc;
    undefined field175_0xfd;
    undefined field176_0xfe;
    undefined field177_0xff;
    undefined field178_0x100;
    undefined field179_0x101;
    undefined field180_0x102;
    undefined field181_0x103;
    undefined field182_0x104;
    undefined field183_0x105;
    undefined field184_0x106;
    undefined field185_0x107;
    undefined field186_0x108;
    undefined field187_0x109;
    undefined field188_0x10a;
    undefined field189_0x10b;
    undefined field190_0x10c;
    undefined field191_0x10d;
    undefined field192_0x10e;
    undefined field193_0x10f;
    undefined field194_0x110;
    undefined field195_0x111;
    undefined field196_0x112;
    undefined field197_0x113;
};

typedef struct MaterialPriceInfo MaterialPriceInfo, *PMaterialPriceInfo;

namespace OP4 {
typedef enum OBJECT_PROTOTYPE_4:long {
    OBJ_NULL=0,
    OBJ_KANALISATION=1,
    OBJ_BRENNESSELN=2,
    OBJ_EISENTUER=3,
    OBJ_OFFENES_FEUER=4,
    OBJ_KAMIN=5,
    OBJ_VERTAEFELUNG=6,
    OBJ_TAPETEN=7,
    OBJ_PORTAL=8,
    OBJ_SEKRETARIAT=9,
    OBJ_WINTERGARTEN=10,
    OBJ_PERSONALTRAKT=11,
    OBJ_EINFRIEDUNG=12,
    OBJ_RASEN=13,
    OBJ_HECKEN=14,
    OBJ_STATUEN=15,
    OBJ_SPRINGBRUNNEN=16,
    OBJ_PAVILLON=17,
    OBJ_WOHN_UND_SCHLAFRAUM=18,
    OBJ_ARBEITSZIMMER=19,
    OBJ_HINTERZIMMER=20,
    OBJ_BIBLIOTHEK=21,
    OBJ_WEINKELLER=22,
    OBJ_SALON=23,
    OBJ_MUSIKZIMMER=24,
    OBJ_STROHMATTE=25,
    OBJ_HOLZBETT=26,
    OBJ_SCHREIBPULT=27,
    OBJ_KERZE=28,
    OBJ_OELLAMPE=29,
    OBJ_SCRIPTORIUMSLEUCHTER=30,
    OBJ_LAGERHAUS_ARBEITSRAUM=31,
    OBJ_FLASCHENZUG=32,
    OBJ_PEITSCHE=33,
    OBJ_STOCK_MIT_KAROTTE=34,
    OBJ_DEICHSEL_EINSPAENNIG=35,
    OBJ_DEICHSEL_ZWEISPAENNIG=36,
    OBJ_DEICHSEL_VIERSPAENNIG=37,
    OBJ_AXTSTAENDER=38,
    OBJ_SAEGEWERK=39,
    OBJ_WURZELHACKE=40,
    OBJ_ZWEIMANNSAEGE=41,
    OBJ_LAGERFLAECHE=42,
    OBJ_PLANE=43,
    OBJ_ARBEITERHUETTE=44,
    OBJ_VORARBEITERHUETTE=45,
    OBJ_GELDSCHRANK=46,
    OBJ_STEINKARRE=47,
    OBJ_BAUGERUEST=48,
    OBJ_HEBEKRAN=49,
    OBJ_PERSONALBUCH=50,
    OBJ_SOELDNERHUETTE=51,
    OBJ_ZIELSCHEIBE=52,
    OBJ_STROHPUPPE=53,
    OBJ_GRUBENBELEUCHTUNG=54,
    OBJ_MINENSTOLLEN=55,
    OBJ_STUETZBALKEN=56,
    OBJ_GRUBENHUNDEKAEFIG=57,
    OBJ_LORE=58,
    OBJ_ZIEGELFORM=59,
    OBJ_ZIEGELBRENNOFEN=60,
    OBJ_KOELNISCHE_MARK=61,
    OBJ_TALER=62,
    OBJ_GULDEN=63,
    OBJ_DUKAT=64,
    OBJ_PFUND_PFENNIGE=65,
    OBJ_LIVRE_TOURNOIS=66,
    OBJ_FRANC=67,
    OBJ_MARK_LUEBISCH=68,
    OBJ_PFUND=69,
    OBJ_FLORINT=70,
    OBJ_SOVEREIGN=71,
    OBJ_UNITE=72,
    OBJ_GUINEE=73,
    OBJ_LIRA_GROSSORUM=74,
    OBJ_VENEZISCHER_DUKAT=75,
    OBJ_DOLLAR=76,
    OBJ_DIEBESGILDE_GANGSYSTEM=77,
    OBJ_ABSTUETZBALKEN=78,
    OBJ_VERMAUERUNG=79,
    OBJ_HORCHPOSTEN=80,
    OBJ_TAEUSCHUNGS_TRUHE=81,
    OBJ_ILLUSIONSWAND=82,
    OBJ_FALLE=83,
    OBJ_DIEBESGILDE_AUFENTHALTSRAUM=84,
    OBJ_WEINFASS=85,
    OBJ_LAGERFEUER=86,
    OBJ_VORHANG_FUER_CHEF=87,
    OBJ_MITARBEITER_DES_MONATS=88,
    OBJ_SEKRETAER_AUFSATZ=89,
    OBJ_DIEBES_BRIEFPAPIER=90,
    OBJ_INFORMATIONSPERGAMENT=91,
    OBJ_DIEBESGILDE_LAGERRAUM=92,
    OBJ_INNENRAUM_BRUNNEN=93,
    OBJ_HEILBRUNNEN=94,
    OBJ_SCHATZTRUHE=95,
    OBJ_DIEBESGILDE_TRAININGSRAUM=96,
    OBJ_KUGEL_UND_PULVER_SAECKCHEN=97,
    OBJ_PULVERFASS=98,
    OBJ_KOSTUEMTRUHE=99,
    OBJ_REGAL_GEDICHTBAENDE=100,
    OBJ_DIEBESGILDE_GEFAENGNIS=101,
    OBJ_PATRIZIERBETT=102,
    OBJ_WACHTISCH=103,
    OBJ_GITTER=104,
    OBJ_KETTENFESSEL=105,
    OBJ_FELDBETT=106,
    OBJ_WASCHSCHUESSEL=107,
    OBJ_FLUCHTGANG=108,
    OBJ_MEISTERBRIEF=109,
    OBJ_STROHLAGER=110,
    OBJ_SCHILD_DIEBESGILDE=111,
    OBJ_SCHILD_GEFAENGNIS=112,
    OBJ_SCHILD_LAGERHAUS=113,
    OBJ_SCHILD_STADTWACHE=114,
    OBJ_SCHILD_SCHMIEDE=115,
    OBJ_SCHMIEDE_ARBEITSRAUM=116,
    OBJ_AMBOSS=117,
    OBJ_SCHMIEDEHAMMER=118,
    OBJ_ESSE=119,
    OBJ_WASSERBOTTICH=120,
    OBJ_SCHUERZE=121,
    OBJ_ZANGE=122,
    OBJ_GUSSFORM=123,
    OBJ_GIESSKELLE=124,
    OBJ_ENTGRATER=125,
    OBJ_BESEN=126,
    OBJ_BLASEBALG=127,
    OBJ_SCHMIEDEOFEN=128,
    OBJ_EISENSCHWAMM=129,
    OBJ_EISENSCHNEIDER=130,
    OBJ_VERSIEGELER=131,
    OBJ_SCHILD_TISCHLER=132,
    OBJ_TISCHLEREI_ARBEITSRAUM=133,
    OBJ_MESSER=134,
    OBJ_TISCHLERHAMMER=135,
    OBJ_SAEGE=136,
    OBJ_HOBEL=137,
    OBJ_LEIMTOPF=138,
    OBJ_SCHRAUBZWINGE=139,
    OBJ_HOBELBANK=140,
    OBJ_ZOLLSTOCK=141,
    OBJ_LOT=142,
    OBJ_FEILE=143,
    OBJ_MECHANISCHE_SAEGE=144,
    OBJ_MARKTPLATZ_ARBEITSRAUM=145,
    OBJ_MARKTSTAND_TISCHLER_SCHMIEDE=146,
    OBJ_MARKTSTAND_STEINMETZ_WIRT=147,
    OBJ_MARKTSTAND_PARFUM_KRAEUTER=148,
    OBJ_MARKTSTAND_ROHSTOFFE=149,
    OBJ_MARKTSTAND_IMPORTEUR=150,
    OBJ_MARKTSTAND_KIRCHE=151,
    OBJ_SCHWARZES_BRETT=152,
    OBJ_TRIBUENE=153,
    OBJ_SCHILD_STEINMETZ=154,
    OBJ_STEINMETZ_ARBEITSRAUM=155,
    OBJ_HAMMER_UND_MEISSEL=156,
    OBJ_MAURERKELLE=157,
    OBJ_LEITER=158,
    OBJ_WASSEREIMER=159,
    OBJ_SCHUBKARRE=160,
    OBJ_EISENBUERSTE=161,
    OBJ_DRAHTSAEGE=162,
    OBJ_KUEHLZUFLUSS=163,
    OBJ_SCHILD_GELDLEIHE=164,
    OBJ_GELDLEIHE_ARBEITSRAUM=165,
    OBJ_FENSTERGITTER=166,
    OBJ_GARDINE=167,
    OBJ_BESUCHERSTUHL=168,
    OBJ_BESUCHERSESSEL=169,
    OBJ_WEINFLASCHE_UND_GLAESER=170,
    OBJ_KASSE=171,
    OBJ_EISENSCHRANK=172,
    OBJ_WANDGEMAELDE=173,
    OBJ_RICHTSCHWERT=174,
    OBJ_RICHTAXT=175,
    OBJ_GALGEN=176,
    OBJ_KREUZ=177,
    OBJ_SCHEITERHAUFEN=178,
    OBJ_EXEKUTIONSKANONE=179,
    OBJ_GUILLOTINE=180,
    OBJ_LOGE=181,
    OBJ_WAAGE=182,
    OBJ_GEFAENGNIS_WACHRAUM=183,
    OBJ_GEFANGENENLITERATUR=184,
    OBJ_KERKERPLAN=185,
    OBJ_GEFAENGNIS_ZELLE=186,
    OBJ_GEFAENGNIS_FOLTERKAMMER=187,
    OBJ_DAUMENSCHRAUBEN=188,
    OBJ_SPANISCHE_STIEFEL=189,
    OBJ_NEUNSCHWAENZIGE_PEITSCHE=190,
    OBJ_ESSE_UND_BRANDEISEN=191,
    OBJ_EISWASSERTROPFER=192,
    OBJ_HAENGENDER_KAEFIG=193,
    OBJ_STRECKBANK=194,
    OBJ_BRUNNENEIMER_NORMAL=195,
    OBJ_BRUNNENEIMER_EISEN=196,
    OBJ_SCHWEINEMAGEN=197,
    OBJ_KUHMAGEN=198,
    OBJ_BRUNNENSEIL=199,
    OBJ_BRUNNENKETTE=200,
    OBJ_HEILIGENFIGUR=201,
    OBJ_WEIHPLAKETTE_1=202,
    OBJ_WEIHPLAKETTE_2=203,
    OBJ_WEIHPLAKETTE_3=204,
    OBJ_WEIHPLAKETTE_4=205,
    OBJ_SCHILD_KRAEUTERLADEN=206,
    OBJ_KRAEUTERLADEN_ARBEITSRAUM=207,
    OBJ_KRAEUTERREGAL=208,
    OBJ_SCHWERER_VORHANG=209,
    OBJ_MEDIZINFAESSCHEN=210,
    OBJ_VITRINE=211,
    OBJ_TROCKENBUCH=212,
    OBJ_MOERSER_UND_STEMPEL=213,
    OBJ_KRAEUTERLADEN_LABOR=214,
    OBJ_GIFTFAESSCHEN=215,
    OBJ_SCHRAUBPRESSE=216,
    OBJ_SUDERHITZER=217,
    OBJ_CHEMIKALIENKASTEN=218,
    OBJ_DESTILLIERKOLBEN=219,
    OBJ_GEHEIMFACH=220,
    OBJ_KRAEUTERLADEN_MODRIGER_KELLER=221,
    OBJ_TEICH=222,
    OBJ_FLIEGENGLAS=223,
    OBJ_KLOAKENZUGANG=224,
    OBJ_PILZKULTUR=225,
    OBJ_DACHBALKEN=226,
    OBJ_TERRARIUM=227,
    OBJ_SCHILD_KIRCHE=228,
    OBJ_KIRCHE_ARBEITSRAUM=229,
    OBJ_KATHEDRALE_ARBEITSRAUM=230,
    OBJ_KIRCHENKREUZ=231,
    OBJ_SPENDENKAESTCHEN=232,
    OBJ_WEIHWASSERBECKEN=233,
    OBJ_HOLZBANK=234,
    OBJ_POLSTERBANK=235,
    OBJ_KANZEL=236,
    OBJ_ALTAR=237,
    OBJ_ORGEL=238,
    OBJ_LICHTGADEN=239,
    OBJ_KIRCHE_ALTARRAUM=240,
    OBJ_MARIENBILD=241,
    OBJ_KIRCHE_BEICHTSTUHLRAUM=242,
    OBJ_KIRCHE_GLOCKENTURMRAUM=243,
    OBJ_GLOCKE=244,
    OBJ_EISENAUFHAENGUNG=245,
    OBJ_GROSSE_GLOCKE=246,
    OBJ_KIRCHE_SCRIPTORIUM=247,
    OBJ_BUCHVITRINE=248,
    OBJ_FARBENKASTEN=249,
    OBJ_SETZKASTEN=250,
    OBJ_MUSTERBUCH=251,
    OBJ_DRUCKERPRESSE=252,
    OBJ_AUSSEN_RAUM=253,
    OBJ_ROHSTOFFVORKOMMEN=254,
    OBJ_POTENTIAL=255,
    OBJ_WILDSCHWEINSPIESS=256,
    OBJ_RUMFASS=257,
    OBJ_AUSGUCK=258,
    OBJ_TARNUNG_ABZWEIGUNG=259,
    OBJ_TARNUNG_TORBOGEN=260,
    OBJ_ABWEHRSTELLUNG=261,
    OBJ_AUSGUCK_UPGRADE=262,
    OBJ_CHEFZELT=263,
    OBJ_MASKE_DES_ZORRO=264,
    OBJ_RAEUBERZELT=265,
    OBJ_FLUCHTHUETTE=266,
    OBJ_FLUCHTSEIL=267,
    OBJ_SPROSSEN=268,
    OBJ_RUTSCHE=269,
    OBJ_RATHAUS_HALLE=270,
    OBJ_MARMORWAPPEN=271,
    OBJ_RATHAUS_SEKRETARIAT=272,
    OBJ_GESETZBUCH_STRAFRECHT=273,
    OBJ_GESETZBUCH_STEUERN=274,
    OBJ_GESETZBUCH_VERFASSUNG=275,
    OBJ_RATHAUS_SITZUNGSSAAL=276,
    OBJ_STADTKASSE=277,
    OBJ_LAGERFLAECHE_ALLGEMEIN=278,
    OBJ_SCHILD_PARFUMEUR=279,
    OBJ_PARFUMERIE_ARBEITSRAUM=280,
    OBJ_PARFUMREGAL=281,
    OBJ_MISCHGEFAESS=282,
    OBJ_MESSBECHER=283,
    OBJ_MOERSER=284,
    OBJ_SPATEL=285,
    OBJ_PIPETTE=286,
    OBJ_SCHILD_WIRTSHAUS=287,
    OBJ_WIRTSHAUS_ARBEITSRAUM=288,
    OBJ_URKUNDE_SCHANKRECHT=289,
    OBJ_URKUNDE_BRAURECHT=290,
    OBJ_URKUNDE_DESTILLIERRECHT=291,
    OBJ_LANGE_TISCHE=292,
    OBJ_EINZELTISCHE=293,
    OBJ_STUEHLE=294,
    OBJ_SCHOENE_STUEHLE=295,
    OBJ_HOLZGESCHIRR=296,
    OBJ_EISENGESCHIRR=297,
    OBJ_SILBERGESCHIRR=298,
    OBJ_SPIELTISCH=299,
    OBJ_DUNKLE_ECKE=300,
    OBJ_STAMMTISCH=301,
    OBJ_WIRTSHAUS_KELLER=302,
    OBJ_BIERFASS=303,
    OBJ_WEINREGAL=304,
    OBJ_SCHNAPPSFAESSCHEN=305,
    OBJ_BRAUANLAGE=306,
    OBJ_DESTILLIERANLAGE=307,
    OBJ_KARREN=308,
    OBJ_KARREN_MITTEL=309,
    OBJ_KARREN_GROSS=310,
    OBJ_ZUNFTHAUS_HALLE=311,
    OBJ_ZUNFTHAUS_SEKRETARIAT=312,
    OBJ_ZUNFTHAUS_SITZUNGSSAAL=313,
    OBJ_ZUNFTWAPPEN_PARFUMEURE=314,
    OBJ_ZUNFTWAPPEN_SCHMIEDE=315,
    OBJ_ZUNFTWAPPEN_STEINMETZ=316,
    OBJ_ZUNFTWAPPEN_TISCHLER=317,
    OBJ_ROTER_TEPPICH=318,
    OBJ_SAEULEN=319,
    OBJ_KARTENTISCH=320,
    OBJ_GESETZ=321,
    OBJ_ZUNFTKASSE=322,
    OBJ_ZUNFTVITRINE=323,
    OBJ_ZUNFTMEISTERBILD=324,
    OBJ_STADTWACHE_MANNSCHAFTSRAUM=325,
    OBJ_STADTWACHE_WACHZIMMER=326,
    OBJ_ZOLLKASSE=327,
    OBJ_ZOLLKASSE_MIT_GEHEIMFACH=328,
    OBJ_SCHLACHTENGEMAELDE=329,
    OBJ_WACHPLAN=330,
    OBJ_SCHNAPPSVORRAT=331,
    OBJ_STADTWACHE_WAFFENKAMMER=332,
    OBJ_SCHWERTERREGAL=333,
    OBJ_PISTOLENREGAL=334,
    OBJ_KUGELSAECKCHEN=335,
    OBJ_PULVERFASS_2=336,
    OBJ_KANONENKUGELKISTE=337,
    OBJ_KANONENHALTERUNG=338,
    OBJ_GITTERSTANGEN_FENSTER=339,
    OBJ_DOLCH=340,
    OBJ_SILBERRING=341,
    OBJ_RAPIER=342,
    OBJ_SILBERKETTE=343,
    OBJ_GROSSSCHWERT=344,
    OBJ_GOLDKETTE=345,
    OBJ_GUERTEL_DER_METAPHYSIK=346,
    OBJ_GEHSTOCK=347,
    OBJ_SCHUTZKREUZ=348,
    OBJ_KAMM=349,
    OBJ_PISTOLE=350,
    OBJ_STAB_DES_EDELMANNS=351,
    OBJ_ARMBRUST=352,
    OBJ_SCHLEIFSTEIN=353,
    OBJ_STEINKREISEL=354,
    OBJ_STEINSOLDAT=355,
    OBJ_SCHIEFERTAFEL=356,
    OBJ_DIAMANT=357,
    OBJ_GLUECKSSTEIN=358,
    OBJ_GEDICHT=359,
    OBJ_UEBER_TALENTE_I=360,
    OBJ_HASSTIRADE=361,
    OBJ_BRIEF_AUS_ROM=362,
    OBJ_LAGERPLAN=363,
    OBJ_UEBER_TALENTE_II=364,
    OBJ_BLUME_DER_ZWIETRACHT=365,
    OBJ_GIFTDOLCH=366,
    OBJ_DARTAGNANS_DUFT=367,
    OBJ_MOSCHUSDUFT=368,
    OBJ_HEILGENDUFT=369,
    OBJ_SCHATTENDOLCH=370,
    OBJ_AUSDAUERTRANK=371,
    OBJ_BOMBE=372,
    OBJ_LEBENSELEXIR=373,
    OBJ_TOPFGRANATE=374,
    OBJ_KROETENSCHLEIM=375,
    OBJ_UNKENDUNK=376,
    OBJ_KOERNERMAHZEIT=377,
    OBJ_DUENNBIER=378,
    OBJ_STARKBIER=379,
    OBJ_FAHNENBRAEU_PILSENER=380,
    OBJ_SCHAEDELBRAND=381,
    OBJ_KRAEUTERSCHNAPPS=382,
    OBJ_VERHANDELN_MUENZE=383,
    OBJ_VERHANDELN_MUENZSTAPEL=384,
    OBJ_VERHANDELN_LEDERBEUTEL=385,
    OBJ_VERHANDELN_DICKER_LEDERBEUTEL=386,
    OBJ_VERHANDELN_EINFACHE_SCHATULLE=387,
    OBJ_VERHANDELN_EDELSTEIN_SCHATULLE=388,
    OBJ_HANDWERK_EINFACHER_HAMMER=389,
    OBJ_HANDWERK_HOLZLINEAL=390,
    OBJ_HANDWERK_LOT=391,
    OBJ_HANDWERK_SCHOENE_WAAGE=392,
    OBJ_HANDWERK_EDLE_BAUSKIZZE=393,
    OBJ_HANDWERK_VERZIERTER_ZIRKEL=394,
    OBJ_BNUN_SONNENSCHEIN=395,
    OBJ_BNUN_NACHMITTAG=396,
    OBJ_BNUN_DAEMMERUNG=397,
    OBJ_BNUN_REGEN_DAEMMERUNG=398,
    OBJ_BNUN_NACHT=399,
    OBJ_BNUN_GEWITTER_NACHT=400,
    OBJ_KAMPF_ROSTIGES_MESSER=401,
    OBJ_KAMPF_DOLCH=402,
    OBJ_KAMPF_VERZIERTER_DOLCH=403,
    OBJ_KAMPF_EINFACHES_SCHWERT=404,
    OBJ_KAMPF_VERZIERTER_RAPIER=405,
    OBJ_KAMPF_RAPIER_EDELSTEIN=406,
    OBJ_RHETORIK_NIEMAND=407,
    OBJ_RHETORIK_EIN=408,
    OBJ_RHETORIK_DREI=409,
    OBJ_RHETORIK_EINIGE=410,
    OBJ_RHETORIK_VIELE=411,
    OBJ_RHETORIK_MASSEN=412,
    OBJ_TALENTBUCH_VERHANDELN_1=413,
    OBJ_TALENTBUCH_VERHANDELN_2=414,
    OBJ_TALENTBUCH_VERHANDELN_3=415,
    OBJ_TALENTBUCH_HANDWERK_1=416,
    OBJ_TALENTBUCH_HANDWERK_2=417,
    OBJ_TALENTBUCH_HANDWERK_3=418,
    OBJ_TALENTBUCH_BNUN_1=419,
    OBJ_TALENTBUCH_BNUN_2=420,
    OBJ_TALENTBUCH_BNUN_3=421,
    OBJ_TALENTBUCH_KAMPF_1=422,
    OBJ_TALENTBUCH_KAMPF_2=423,
    OBJ_TALENTBUCH_KAMPF_3=424,
    OBJ_TALENTBUCH_RHETORIK_1=425,
    OBJ_TALENTBUCH_RHETORIK_2=426,
    OBJ_TALENTBUCH_RHETORIK_3=427,
    OBJ_AMTSTRAEGER=428,
    OBJ_RAT=429,
    OBJ_GESETZ_AENDERN=430,
    OBJ_MITGLIED_ANKLAGEN=431,
    OBJ_MITGLIED_ABSETZEN=432,
    OBJ_AMT_NIEDERLEGEN=433,
    OBJ_AUSSCHUETTUNG_VORNEHMEN=434,
    OBJ_FREIES_AMT=435,
    OBJ_BEWERBUNG_AMT=436,
    OBJ_THEMA_PREDIGT=437,
    OBJ_MANUSKRIPT=438,
    OBJ_KIEFER=439,
    OBJ_BUCHE=440,
    OBJ_EICHE=441,
    OBJ_LEHM=442,
    OBJ_GRANIT_ROH=443,
    OBJ_SCHIEFER_ROH=444,
    OBJ_EISENERZ_ROH=445,
    OBJ_SILBERERZ_ROH=446,
    OBJ_GOLDERZ_ROH=447,
    OBJ_EDELSTEINE_ROH=448,
    OBJ_KROETENAUGE=449,
    OBJ_FLEDERMAUSBLUT=450,
    OBJ_SPINNENBEIN=451,
    OBJ_LAVENDEL=452,
    OBJ_JASMIN=453,
    OBJ_ROSE=454,
    OBJ_MOSCHUS=455,
    OBJ_GERSTE=456,
    OBJ_ROGGEN=457,
    OBJ_KIEFERNBRETT=458,
    OBJ_BUCHENBRETT=459,
    OBJ_EICHENBRETT=460,
    OBJ_ZIEGEL=461,
    OBJ_GRANIT=462,
    OBJ_SCHIEFER=463,
    OBJ_EISEN=464,
    OBJ_SILBER=465,
    OBJ_GOLD=466,
    OBJ_EDELSTEIN=467,
    OBJ_BESCHLAG=468,
    OBJ_ZAPFEN=469,
    OBJ_SCHLEIFPAPIER=470,
    OBJ_POLITUR=471,
    OBJ_FARBE=472,
    OBJ_WEINGEIST=473,
    OBJ_PAPIER=474,
    OBJ_IMPORTLAGER=475,
    OBJ_EXPORTLAGER=476,
    OBJ_LAGERFLAECHE_TRANSPORT=477,
    OBJ_STOLPERSEIL=478,
    OBJ_FENSTERLAEDEN=479,
    OBJ_DORNENHECKE=480,
    OBJ_ROSENSTRAUCH=481,
    OBJ_FALLGRUBE=482,
    OBJ_ROSTNAEGEL=483,
    OBJ_TUERRIEGEL=484,
    OBJ_VERGISSMICH_KRAUT=485,
    OBJ_DUFT_DER_WEITEN_WELT=486,
    OBJ_HELLEBARDE_UND_SCHEMEL=487,
    OBJ_HOLZSPLITTER=488,
    OBJ_INSTABILE_STEINHAUFEN=489,
    OBJ_SCHARFE_EISENTEILE=490,
    OBJ_KNOBLAUCHZEHEN=491,
    OBJ_GIFTSTRAUCH=492,
    OBJ_WACHHUND=493,
    OBJ_SCHWARZE_KATZE=494,
    OBJ_WACHHUNDTRAINING=495,
    OBJ_KATZENDRESSUR=496,
    OBJ_FINGER_DES_HERRN=497,
    OBJ_HANDWERKSSCHILD_FRIEDHOF=498,
    OBJ_GRAEBERFELD=499,
    OBJ_STEINKREIS=500,
    OBJ_LIEGEPLAN=501,
    OBJ_GRABHUEGEL=502,
    OBJ_FRIEDHOFSHECKEN=503,
    OBJ_KOMPOSTHAUFEN=504,
    OBJ_GRAEBER_KLEIN=505,
    OBJ_FRIEDHOFSTOR=506,
    OBJ_ENGELSSTATUE=507,
    OBJ_GARGOYLENKOPF=508,
    OBJ_GRAEBER_MITTEL=509,
    OBJ_FRIEDHOFSSTATUEN=510,
    OBJ_STEINKREIS_DRUDENFUSS=511,
    OBJ_KNORRIGER_BAUM=512,
    OBJ_GRUFT=513,
    OBJ_FRIEDHOFSBANK=514,
    OBJ_GEHILFENKONTROLLE=515,
    OBJ_RUINEN=516,
    OBJ_FRIEDHOFSKAPELLE=517,
    OBJ_FRIEDHOFSSCHAUFEL_UND_EIMER=518,
    OBJ_KNOCHENHAMMER=519,
    OBJ_SANDUHR=520,
    OBJ_SEZIERMESSER=521,
    OBJ_URNEN=522,
    OBJ_OPFERSTEIN=523,
    OBJ_IKONENSCHREIN=524,
    OBJ_KAPELLENALTAR=525,
    OBJ_ABGEHAENGTES_KREUZ=526,
    OBJ_SANDRELIEF=527,
    OBJ_FRIEDHOFSLEUCHTER=528,
    OBJ_NEKROMANTENTURM=529,
    OBJ_EXPERIMENTIERTISCH=530,
    OBJ_LEDERGURTE=531,
    OBJ_BILDNIS_DES_LEBENS=532,
    OBJ_GEWITTER_FOKUSSIERER=533,
    OBJ_BALSAMIERKIT=534,
    OBJ_LIEBESGESTIRNE=535,
    OBJ_OKULAR=536,
    OBJ_BLUME_IN_STEINMUND=537,
    OBJ_RABENFIGURINE=538,
    OBJ_KRYPTA=539,
    OBJ_SEANCEKREIS=540,
    OBJ_KOHLEBECKEN=541,
    OBJ_URNENREGAL=542,
    OBJ_SCHUTZZEICHEN=543,
    OBJ_SPINNENNETZ=544,
    OBJ_VERSTEINERTER_GEHILFE=545,
    OBJ_MECHANISCHER_GEIST=546,
    OBJ_BILDNIS_DES_VATERS=547,
    OBJ_GEHEIMES_GRAB=548,
    OBJ_KNOCHEN=549,
    OBJ_SCHAEDEL=550,
    OBJ_LEICHENHEMD=551,
    OBJ_ECTOPLASMA=552,
    OBJ_KNOCHENARMREIF=553,
    OBJ_SCHAEDELKERZE=554,
    OBJ_HEXERDOKUMENT_I=555,
    OBJ_DUNKLER_VERFALL=556,
    OBJ_HEXERDOKUMENT_II=557,
    OBJ_NEKROMANTENROBE=558,
    OBJ_STALLUNGEN=559,
    OBJ_EISENTUEREN=560,
    OBJ_SPIESSE=561,
    OBJ_REGENTONNE=562,
    OBJ_WACHHAUS=563,
    OBJ_EISENBAENDER=564,
    OBJ_HOFBRUNNEN=565,
    OBJ_SCHLOSSFALLEN=566,
    OBJ_FUNDAMENTVERSTAERKUNG=567,
    OBJ_ZISTERNE=568,
    OBJ_WEHRGANG=569,
    OBJ_MAUERVORBAUTEN=570,
    OBJ_SCHAUFELAUFZUG=571,
    OBJ_KONTOR=572,
    OBJ_KAMINSTELLE=573,
    OBJ_JOURNAL=574,
    OBJ_DER_KNOGGE=575,
    OBJ_STEINGEWICHTE_AM_BAND=576,
    OBJ_WANNENBAD=577,
    OBJ_ERFOLGSCHART=578,
    OBJ_WAPPENSAMMLUNG=579,
    OBJ_EISENGEWICHTESTANGE=580,
    OBJ_WANNENVORLEGER=581,
    OBJ_SCHIFFSMODELL_AUS_VENEDIG=582,
    OBJ_KAMPFMASCHINE=583,
    OBJ_WANDTEPPICHE=584,
    OBJ_INTRIGENABWEHR_I_BIS_IV=585,
    OBJ_DUFTOELZULEITUNG=586,
    OBJ_ALCHIMISTENKAMMER=587,
    OBJ_ALCHIMISTENVERTRAG=588,
    OBJ_OHRENSESSEL=589,
    OBJ_SCHUTZBRILLE=590,
    OBJ_SCHMUSEKATZE=591,
    OBJ_FUSSBANK=592,
    OBJ_VENTILKONSTRUKTION=593,
    OBJ_SUESSWERKKISTE=594,
    OBJ_WASSERPFEIFE=595,
    OBJ_RAUCHABZUG=596,
    OBJ_ZUBERSPUELUNG=597,
    OBJ_KANONENTURM=598,
    OBJ_STEINKUGEL=599,
    OBJ_EINFACHE_KANONE=600,
    OBJ_SCHWARZPULVERLADUNG=601,
    OBJ_EISENKUGEL=602,
    OBJ_LANGES_ROHR=603,
    OBJ_KIMME_UND_KORN=604,
    OBJ_KANLLGASBEHAELTER=605,
    OBJ_SCHRAPPNELL=606,
    OBJ_GEZOGENER_LAUF=607,
    OBJ_FADENKREUZ=608,
    OBJ_MELONITLADUNG=609,
    OBJ_HUNDERT_PFUENDER=610,
    OBJ_DOPPELKANONE=611,
    OBJ_KARTAESCHE=612,
    OBJ_DREIFACHKANONE=613,
    OBJ_GEHEIMKABINETT=614,
    OBJ_TANZBAERENKAEFIG=615,
    OBJ_WEINVORRAT=616,
    OBJ_LEIER=617,
    OBJ_TANZBAER=618,
    OBJ_SCHLINGENFALLE=619,
    OBJ_LAGERFEUER_DER_ZIGEUNER=620,
    OBJ_GEDICHTLESUNG_TRIBUENE=621,
    OBJ_HUNDEZWINGER=622,
    OBJ_INNEREIENFASS=623,
    OBJ_HOCHSEIL=624,
    OBJ_TRAUMFAENGER=625,
    OBJ_NETZFALLE=626,
    OBJ_BALDACHIN=627,
    OBJ_STEIN_DER_STRAFE=628,
    OBJ_FRATZENGESICHTER=629,
    OBJ_AELTESTENWAGEN=630,
    OBJ_ZIGEUNERSCHATULLE=631,
    OBJ_SIPPENTEPPICH=632,
    OBJ_BLUTDOLCH=633,
    OBJ_SIPPENBILDNIS=634,
    OBJ_SIPPENCHRONIK=635,
    OBJ_AELTESTENHAUT=636,
    OBJ_GLASAUGE_AUF_PODEST=637,
    OBJ_SPUCKNAPF=638,
    OBJ_ZIRKUSZELT=639,
    OBJ_ZELTBUEHNE=640,
    OBJ_SCHMINKTOEPFE=641,
    OBJ_POKERTISCH=642,
    OBJ_JONGLIERBAELLE=643,
    OBJ_MANUSKRIPTSAMMLUNG=644,
    OBJ_ZIGEUNER_SCHEMEL=645,
    OBJ_TASCHENSPIELERKASTEN=646,
    OBJ_KOSTUEMFUNDUS=647,
    OBJ_LIEGEKISSEN=648,
    OBJ_BUECHERSTAPEL=649,
    OBJ_WAHRSAGERWAGEN=650,
    OBJ_FEUERSTELLE=651,
    OBJ_AUSGESTOPFTER_BAER=652,
    OBJ_GLASKUGEL=653,
    OBJ_FAULIGES_GEBISS=654,
    OBJ_STERNENKARTE=655,
    OBJ_KRISTALLKUGEL=656,
    OBJ_KNOCHENFEUER=657,
    OBJ_GIFTDOLCHSAMMLUNG=658,
    OBJ_WEIDENHOLZ=659,
    OBJ_HASE=660,
    OBJ_VOGELBEERE=661,
    OBJ_LEDER=662,
    OBJ_FLOETE=663,
    OBJ_WEIDENRUTE=664,
    OBJ_HYPNOSEPENDEL=665,
    OBJ_DORNROESCHENSPINDEL=666,
    OBJ_KRISTALLKUGEL_OBJEKT=667,
    OBJ_VOODOOPUPPE=668,
    OBJ_SCHILD_SCHNEIDER=669,
    OBJ_SCHNEIDEREI_ARBEITSRAUM=670,
    OBJ_KLEIDERSCHRANK=671,
    OBJ_SICHEL=672,
    OBJ_SCHNITTMUSTERKATALOG=673,
    OBJ_FINGERHUT=674,
    OBJ_SITZECKE=675,
    OBJ_ZUTATENREGAL=676,
    OBJ_WALKTROMMEL=677,
    OBJ_NADELKISSEN=678,
    OBJ_UMKLEIDEKABINE=679,
    OBJ_WEBSTUHL=680,
    OBJ_NAEHMASCHINE=681,
    OBJ_CATWALK=682,
    OBJ_ANZIEHPUPPE=683,
    OBJ_WEINREGAL_SCHNEIDER=684,
    OBJ_SPIEGEL=685,
    OBJ_WOLLE=686,
    OBJ_FLACHS=687,
    OBJ_PFLANZENFARBSTOFF=688,
    OBJ_TUCH=689,
    OBJ_WARME_SOCKEN=690,
    OBJ_WOLLUMHANG=691,
    OBJ_LEDERWAMS=692,
    OBJ_WAFFENROCK=693,
    OBJ_GOLDGEWIRKTE_SCHAERPE=694,
    OBJ_ZAUBERHUT=695,
    OBJ_TRAUMGIFT=696,
    OBJ_WAFFENGIFT=697,
    OBJ_TRUNK_DER_ARBEITSFREUDE=698,
    OBJ_BRODEM_DER_VERGESSLICHKEIT=699,
    OBJ_BRODEM_DER_BERSERKERWUT=700,
    OBJ_BRODEM_DER_FAEULNIS=701,
    OBJ_DUFT_DER_WILLFAEHRIGKEIT=702,
    OBJ_DUFT_DER_BLINDEN_EIFERSUCHT=703,
    OBJ_DUFT_DER_MANIPULATION=704,
    OBJ_SCHLAFTRUNK=705,
    OBJ_LAEHMUNGSGIFT=706,
    OBJ_ANGSTGIFT=707,
    OBJ_ANTIDOT=708,
    OBJ_MAGISCHE_TINTE=709,
    OBJ_TRUNK_DES_7_SINNS=710,
    OBJ_HOLZSPLITTER_VOM_KREUZ_JESU=711,
    OBJ_SIEBENMEILENSTIEFEL=712,
    OBJ_RING_DER_NIBELUNGEN=713,
    OBJ_SCHWURDOLCH_HERZOG_WIDUKINDS=714,
    OBJ_SPEER_DES_HAGEN_VON_TRONJE=715,
    OBJ_SIEGEL_DER_TEMPELHERREN=716,
    OBJ_BUCH_DER_WEISHEITEN=717,
    OBJ_EISENHANDSCHUH_DES_SHERIFFS=718,
    OBJ_KRISTALLKUGEL_DER_HELLSICHT=719,
    OBJ_KRIEGSBANNER_KARLS_DES_GROSSEN=720,
    OBJ_DUELLPISTOLE_DES_HL_ZURRIO=721,
    OBJ_AMULET_DER_INTUITION=722,
    OBJ_CHARISMA_AMULET=723,
    OBJ_BALMUNG_SIEGFRIEDS_SCHWERT=724,
    OBJ_RECHENSCHIEBER_VON_JACOB_FUGGER=725,
    OBJ_TARNKAPPE_DER_NIBELUNGEN=726,
    OBJ_REISSBRETT_DES_LEONARDO_DA_VINCI=727,
    OBJ_AMULET_DES_GLUECKS=728,
    OBJ_ROBE_DES_LEONARDO_DA_VINCI=729,
    OBJ_STERN_VON_BETHLEHEM=730,
    OBJ_MARKTSTAND_OKKULT=731
} OBJECT_PROTOTYPE_4;
};

struct MaterialPriceInfo {
    enum OBJECT_PROTOTYPE_4 object_prot_index;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    undefined field21_0x18;
    undefined field22_0x19;
    undefined field23_0x1a;
    undefined field24_0x1b;
    undefined field25_0x1c;
    undefined field26_0x1d;
    undefined field27_0x1e;
    undefined field28_0x1f;
    undefined field29_0x20;
    undefined field30_0x21;
    undefined field31_0x22;
    undefined field32_0x23;
    undefined field33_0x24;
    undefined field34_0x25;
    undefined field35_0x26;
    undefined field36_0x27;
    undefined field37_0x28;
    undefined field38_0x29;
    undefined field39_0x2a;
    undefined field40_0x2b;
    undefined field41_0x2c;
    undefined field42_0x2d;
    undefined field43_0x2e;
    undefined field44_0x2f;
    float price; /* Multiplied by 32 */
    undefined field46_0x34;
    undefined field47_0x35;
    undefined field48_0x36;
    undefined field49_0x37;
    undefined field50_0x38;
    undefined field51_0x39;
    undefined field52_0x3a;
    undefined field53_0x3b;
    undefined field54_0x3c;
    undefined field55_0x3d;
    undefined field56_0x3e;
    undefined field57_0x3f;
    undefined field58_0x40;
    undefined field59_0x41;
    undefined field60_0x42;
    undefined field61_0x43;
    undefined field62_0x44;
    undefined field63_0x45;
    undefined field64_0x46;
    undefined field65_0x47;
    undefined field66_0x48;
    undefined field67_0x49;
    undefined field68_0x4a;
    undefined field69_0x4b;
    undefined field70_0x4c;
    undefined field71_0x4d;
    undefined field72_0x4e;
    undefined field73_0x4f;
    undefined field74_0x50;
    undefined field75_0x51;
    undefined field76_0x52;
    undefined field77_0x53;
    byte some_flags;
    undefined field79_0x55;
    undefined field80_0x56;
    undefined field81_0x57;
};

typedef struct ObjectPrototype_65 ObjectPrototype_65, *PObjectPrototype_65;

typedef enum ObjectType:char {
    IMPROVEMENT_0=0,
    IMPROVEMENT_FIRE=1,
    IMPROVEMENT_HOME_ROOM=2,
    IMPROVEMENT_BED=3,
    IMPROVEMENT_LIGHT=4,
    IMPROVEMENT_STORAGE=5,
    IMPROVEMENT_DIFFERENT=6,
    IMPROVEMENT_MONEY_STORAGE=7,
    BOOK=8,
    CURRENCY_OBJ=9,
    BARREL=10,
    CHAIR=11,
    WEAPON=12,
    GALGEN=13,
    CROSS=14,
    CANNON=15,
    WAAGE=16,
    WAREHOUSE_OR_TRANSPORT=17,
    WEIRD_STUFF=18,
    WELL_CHAIN=19,
    WEIHPLAKETTE=20,
    SEATS=21,
    BELL=22,
    RAW_MATERIAL=23,
    CAPABILITY=24,
    LICENSE=25,
    TABLE=26,
    CHAIR_2=27,
    DISHES=28,
    CART=29,
    LAW=30,
    ZOLLKASSE=31,
    PRODUCT=32,
    TALENT_1=33,
    TALENT_2=34,
    AMTSTRAEGER_OR_RAT=35,
    ACTION=36,
    MATERIAL=37,
    PROJECTILE=38,
    NEW_ALCHEMY_STUFF=39,
    UNIMPLEMENTED_ARTIFACTS=40
} ObjectType;

struct ObjectPrototype_65 {
    enum ObjectType type;
    char name[32];
    byte level;
    int time;
    short count_1;
    short count_2;
    short count_3;
    short count_4;
    short id_1;
    short id_2;
    short id_3;
    short id_4;
    short unknown;
    int price;
    int value;
    byte unkown_byte;
};

typedef struct OpenedFileMaybe OpenedFileMaybe, *POpenedFileMaybe;

/*
typedef struct _iobuf _iobuf, *P_iobuf;

typedef struct _iobuf FILE;
*/

struct OpenedFileMaybe {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined field140_0x8c;
    undefined field141_0x8d;
    undefined field142_0x8e;
    undefined field143_0x8f;
    undefined field144_0x90;
    undefined field145_0x91;
    undefined field146_0x92;
    undefined field147_0x93;
    undefined field148_0x94;
    undefined field149_0x95;
    undefined field150_0x96;
    undefined field151_0x97;
    undefined field152_0x98;
    undefined field153_0x99;
    undefined field154_0x9a;
    undefined field155_0x9b;
    undefined field156_0x9c;
    undefined field157_0x9d;
    undefined field158_0x9e;
    undefined field159_0x9f;
    undefined field160_0xa0;
    undefined field161_0xa1;
    undefined field162_0xa2;
    undefined field163_0xa3;
    undefined field164_0xa4;
    undefined field165_0xa5;
    undefined field166_0xa6;
    undefined field167_0xa7;
    undefined field168_0xa8;
    undefined field169_0xa9;
    undefined field170_0xaa;
    undefined field171_0xab;
    undefined field172_0xac;
    undefined field173_0xad;
    undefined field174_0xae;
    undefined field175_0xaf;
    undefined field176_0xb0;
    undefined field177_0xb1;
    undefined field178_0xb2;
    undefined field179_0xb3;
    undefined field180_0xb4;
    undefined field181_0xb5;
    undefined field182_0xb6;
    undefined field183_0xb7;
    undefined field184_0xb8;
    undefined field185_0xb9;
    undefined field186_0xba;
    undefined field187_0xbb;
    undefined field188_0xbc;
    undefined field189_0xbd;
    undefined field190_0xbe;
    undefined field191_0xbf;
    undefined field192_0xc0;
    undefined field193_0xc1;
    undefined field194_0xc2;
    undefined field195_0xc3;
    undefined field196_0xc4;
    undefined field197_0xc5;
    undefined field198_0xc6;
    undefined field199_0xc7;
    undefined field200_0xc8;
    undefined field201_0xc9;
    undefined field202_0xca;
    undefined field203_0xcb;
    undefined field204_0xcc;
    undefined field205_0xcd;
    undefined field206_0xce;
    undefined field207_0xcf;
    undefined field208_0xd0;
    undefined field209_0xd1;
    undefined field210_0xd2;
    undefined field211_0xd3;
    undefined field212_0xd4;
    undefined field213_0xd5;
    undefined field214_0xd6;
    undefined field215_0xd7;
    undefined field216_0xd8;
    undefined field217_0xd9;
    undefined field218_0xda;
    undefined field219_0xdb;
    undefined field220_0xdc;
    undefined field221_0xdd;
    undefined field222_0xde;
    undefined field223_0xdf;
    undefined field224_0xe0;
    undefined field225_0xe1;
    undefined field226_0xe2;
    undefined field227_0xe3;
    undefined field228_0xe4;
    undefined field229_0xe5;
    undefined field230_0xe6;
    undefined field231_0xe7;
    undefined field232_0xe8;
    undefined field233_0xe9;
    undefined field234_0xea;
    undefined field235_0xeb;
    undefined field236_0xec;
    undefined field237_0xed;
    undefined field238_0xee;
    undefined field239_0xef;
    undefined field240_0xf0;
    undefined field241_0xf1;
    undefined field242_0xf2;
    undefined field243_0xf3;
    undefined field244_0xf4;
    undefined field245_0xf5;
    undefined field246_0xf6;
    undefined field247_0xf7;
    undefined field248_0xf8;
    undefined field249_0xf9;
    undefined field250_0xfa;
    undefined field251_0xfb;
    undefined field252_0xfc;
    undefined field253_0xfd;
    undefined field254_0xfe;
    undefined field255_0xff;
    FILE * file_ptr;
    int field257_0x104;
    undefined * field258_0x108;
    undefined * field259_0x10c;
    undefined * field260_0x110;
    undefined field261_0x114;
    undefined field262_0x115;
    undefined field263_0x116;
    undefined field264_0x117;
    undefined field265_0x118;
    undefined field266_0x119;
    undefined field267_0x11a;
    undefined field268_0x11b;
    undefined field269_0x11c;
    undefined field270_0x11d;
    undefined field271_0x11e;
    undefined field272_0x11f;
    undefined field273_0x120;
    undefined field274_0x121;
    undefined field275_0x122;
    undefined field276_0x123;
    undefined field277_0x124;
    undefined field278_0x125;
    undefined field279_0x126;
    undefined field280_0x127;
    undefined field281_0x128;
    undefined field282_0x129;
    undefined field283_0x12a;
    undefined field284_0x12b;
    undefined field285_0x12c;
    undefined field286_0x12d;
    undefined field287_0x12e;
    undefined field288_0x12f;
    undefined field289_0x130;
    undefined field290_0x131;
    undefined field291_0x132;
    undefined field292_0x133;
    undefined field293_0x134;
    undefined field294_0x135;
    undefined field295_0x136;
    undefined field296_0x137;
    undefined field297_0x138;
    undefined field298_0x139;
    undefined field299_0x13a;
    undefined field300_0x13b;
    undefined field301_0x13c;
    undefined field302_0x13d;
    undefined field303_0x13e;
    undefined field304_0x13f;
};

/*
struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};
*/

typedef struct ProductionInfo ProductionInfo, *PProductionInfo;

struct ProductionInfo {
    enum BUILDING_PROTOTYPE building_prot_index;
    enum OBJECT_PROTOTYPE object_prot_indices[10];
};

typedef struct ProductionSetting ProductionSetting, *PProductionSetting;

struct ProductionSetting {
    int building_id;
    int random_int;
    byte production_pair_index;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    int production_pairs[14]; /* {obj_prot_index, production proportion} */
    float price_level_for_selling; /* From 0.5 to 1.5 (50% -> 150%) */
    struct ProductionSetting * next;
};

typedef struct ProductPriceInfo ProductPriceInfo, *PProductPriceInfo;

struct ProductPriceInfo {
    enum OBJECT_PROTOTYPE_4 object_prot_index;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    undefined field21_0x18;
    undefined field22_0x19;
    undefined field23_0x1a;
    undefined field24_0x1b;
    undefined field25_0x1c;
    undefined field26_0x1d;
    undefined field27_0x1e;
    undefined field28_0x1f;
    undefined field29_0x20;
    undefined field30_0x21;
    undefined field31_0x22;
    undefined field32_0x23;
    undefined field33_0x24;
    undefined field34_0x25;
    undefined field35_0x26;
    undefined field36_0x27;
    undefined field37_0x28;
    undefined field38_0x29;
    undefined field39_0x2a;
    undefined field40_0x2b;
    undefined field41_0x2c;
    undefined field42_0x2d;
    undefined field43_0x2e;
    undefined field44_0x2f;
    undefined field45_0x30;
    undefined field46_0x31;
    undefined field47_0x32;
    undefined field48_0x33;
    undefined field49_0x34;
    undefined field50_0x35;
    undefined field51_0x36;
    undefined field52_0x37;
    float price; /* Multiplied by 32 */
    undefined field54_0x3c;
    undefined field55_0x3d;
    undefined field56_0x3e;
    undefined field57_0x3f;
    undefined field58_0x40;
    undefined field59_0x41;
    undefined field60_0x42;
    undefined field61_0x43;
    undefined field62_0x44;
    undefined field63_0x45;
    undefined field64_0x46;
    undefined field65_0x47;
    undefined field66_0x48;
    undefined field67_0x49;
    undefined field68_0x4a;
    undefined field69_0x4b;
    undefined field70_0x4c;
    undefined field71_0x4d;
    undefined field72_0x4e;
    undefined field73_0x4f;
    undefined field74_0x50;
    undefined field75_0x51;
    undefined field76_0x52;
    undefined field77_0x53;
    undefined field78_0x54;
    undefined field79_0x55;
    undefined field80_0x56;
    undefined field81_0x57;
    undefined field82_0x58;
    undefined field83_0x59;
    undefined field84_0x5a;
    undefined field85_0x5b;
    undefined field86_0x5c;
    undefined field87_0x5d;
    undefined field88_0x5e;
    undefined field89_0x5f;
    undefined field90_0x60;
    undefined field91_0x61;
    undefined field92_0x62;
    undefined field93_0x63;
    undefined field94_0x64;
    undefined field95_0x65;
    undefined field96_0x66;
    undefined field97_0x67;
    undefined field98_0x68;
    undefined field99_0x69;
    undefined field100_0x6a;
    undefined field101_0x6b;
    undefined field102_0x6c;
    undefined field103_0x6d;
    undefined field104_0x6e;
    undefined field105_0x6f;
    undefined field106_0x70;
    undefined field107_0x71;
    undefined field108_0x72;
    undefined field109_0x73;
    undefined field110_0x74;
    undefined field111_0x75;
    undefined field112_0x76;
    undefined field113_0x77;
    undefined field114_0x78;
    undefined field115_0x79;
    undefined field116_0x7a;
    undefined field117_0x7b;
    undefined field118_0x7c;
    undefined field119_0x7d;
    undefined field120_0x7e;
    undefined field121_0x7f;
};

typedef struct RawMaterialInfo RawMaterialInfo, *PRawMaterialInfo;

struct RawMaterialInfo {
    enum OBJECT_PROTOTYPE_4 object_prot_index;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    undefined field21_0x18;
    undefined field22_0x19;
    undefined field23_0x1a;
    undefined field24_0x1b;
    float price; /* Multiplied by 32 */
    undefined field26_0x20;
    undefined field27_0x21;
    undefined field28_0x22;
    undefined field29_0x23;
    undefined field30_0x24;
    undefined field31_0x25;
    undefined field32_0x26;
    undefined field33_0x27;
    int count_1; /* Created by retype action */
    undefined field35_0x2c;
    undefined field36_0x2d;
    undefined field37_0x2e;
    undefined field38_0x2f;
    undefined field39_0x30;
    undefined field40_0x31;
    undefined field41_0x32;
    undefined field42_0x33;
    undefined field43_0x34;
    undefined field44_0x35;
    undefined field45_0x36;
    undefined field46_0x37;
    int count_2; /* Created by retype action */
    byte some_flags;
    undefined field49_0x3d;
    undefined field50_0x3e;
    undefined field51_0x3f;
};

typedef struct SampleMaybe SampleMaybe, *PSampleMaybe;

struct SampleMaybe { /* Unknown size */
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined field140_0x8c;
    undefined field141_0x8d;
    undefined field142_0x8e;
    undefined field143_0x8f;
    undefined field144_0x90;
    undefined field145_0x91;
    undefined field146_0x92;
    undefined field147_0x93;
    undefined field148_0x94;
    undefined field149_0x95;
    undefined field150_0x96;
    undefined field151_0x97;
    undefined field152_0x98;
    undefined field153_0x99;
    undefined field154_0x9a;
    undefined field155_0x9b;
    undefined field156_0x9c;
    undefined field157_0x9d;
    undefined field158_0x9e;
    undefined field159_0x9f;
    undefined field160_0xa0;
    undefined field161_0xa1;
    undefined field162_0xa2;
    undefined field163_0xa3;
    undefined field164_0xa4;
    undefined field165_0xa5;
    undefined field166_0xa6;
    undefined field167_0xa7;
    undefined field168_0xa8;
    undefined field169_0xa9;
    undefined field170_0xaa;
    undefined field171_0xab;
    undefined field172_0xac;
    undefined field173_0xad;
    undefined field174_0xae;
    undefined field175_0xaf;
    undefined field176_0xb0;
    undefined field177_0xb1;
    undefined field178_0xb2;
    undefined field179_0xb3;
    undefined field180_0xb4;
    undefined field181_0xb5;
    undefined field182_0xb6;
    undefined field183_0xb7;
    undefined field184_0xb8;
    undefined field185_0xb9;
    undefined field186_0xba;
    undefined field187_0xbb;
    undefined field188_0xbc;
    undefined field189_0xbd;
    undefined field190_0xbe;
    undefined field191_0xbf;
    undefined field192_0xc0;
    undefined field193_0xc1;
    undefined field194_0xc2;
    undefined field195_0xc3;
    undefined field196_0xc4;
    undefined field197_0xc5;
    undefined field198_0xc6;
    undefined field199_0xc7;
    undefined field200_0xc8;
    undefined field201_0xc9;
    undefined field202_0xca;
    undefined field203_0xcb;
    undefined field204_0xcc;
    undefined field205_0xcd;
    undefined field206_0xce;
    undefined field207_0xcf;
    undefined field208_0xd0;
    undefined field209_0xd1;
    undefined field210_0xd2;
    undefined field211_0xd3;
    undefined field212_0xd4;
    undefined field213_0xd5;
    undefined field214_0xd6;
    undefined field215_0xd7;
    undefined field216_0xd8;
    undefined field217_0xd9;
    undefined field218_0xda;
    undefined field219_0xdb;
    undefined field220_0xdc;
    undefined field221_0xdd;
    undefined field222_0xde;
    undefined field223_0xdf;
    undefined field224_0xe0;
    undefined field225_0xe1;
    undefined field226_0xe2;
    undefined field227_0xe3;
    undefined field228_0xe4;
    undefined field229_0xe5;
    undefined field230_0xe6;
    undefined field231_0xe7;
    undefined field232_0xe8;
    undefined field233_0xe9;
    undefined field234_0xea;
    undefined field235_0xeb;
    undefined field236_0xec;
    undefined field237_0xed;
    undefined field238_0xee;
    undefined field239_0xef;
    undefined field240_0xf0;
    undefined field241_0xf1;
    undefined field242_0xf2;
    undefined field243_0xf3;
    undefined field244_0xf4;
    undefined field245_0xf5;
    undefined field246_0xf6;
    undefined field247_0xf7;
    undefined field248_0xf8;
    undefined field249_0xf9;
    undefined field250_0xfa;
    undefined field251_0xfb;
    undefined field252_0xfc;
    undefined field253_0xfd;
    undefined field254_0xfe;
    undefined field255_0xff;
    undefined field256_0x100;
    undefined field257_0x101;
    undefined field258_0x102;
    undefined field259_0x103;
    undefined field260_0x104;
    undefined field261_0x105;
    undefined field262_0x106;
    undefined field263_0x107;
    undefined field264_0x108;
    undefined field265_0x109;
    undefined field266_0x10a;
    undefined field267_0x10b;
    undefined field268_0x10c;
    undefined field269_0x10d;
    undefined field270_0x10e;
    undefined field271_0x10f;
    undefined field272_0x110;
    undefined field273_0x111;
    undefined field274_0x112;
    undefined field275_0x113;
    undefined field276_0x114;
    undefined field277_0x115;
    undefined field278_0x116;
    undefined field279_0x117;
    undefined field280_0x118;
    undefined field281_0x119;
    undefined field282_0x11a;
    undefined field283_0x11b;
    undefined field284_0x11c;
    undefined field285_0x11d;
    undefined field286_0x11e;
    undefined field287_0x11f;
    undefined field288_0x120;
    undefined field289_0x121;
    undefined field290_0x122;
    undefined field291_0x123;
    undefined field292_0x124;
    undefined field293_0x125;
    undefined field294_0x126;
    undefined field295_0x127;
    undefined field296_0x128;
    undefined field297_0x129;
    undefined field298_0x12a;
    undefined field299_0x12b;
    undefined field300_0x12c;
    undefined field301_0x12d;
    undefined field302_0x12e;
    undefined field303_0x12f;
    undefined field304_0x130;
    undefined field305_0x131;
    undefined field306_0x132;
    undefined field307_0x133;
    int field308_0x134;
    undefined field309_0x138;
    undefined field310_0x139;
    undefined field311_0x13a;
    undefined field312_0x13b;
    struct SampleMaybe * ptr_to_same_struct;
};

typedef struct Script Script, *PScript;

typedef uint size_t;

struct Script {
    byte index;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined field140_0x8c;
    undefined field141_0x8d;
    undefined field142_0x8e;
    undefined field143_0x8f;
    undefined field144_0x90;
    undefined field145_0x91;
    undefined field146_0x92;
    undefined field147_0x93;
    undefined field148_0x94;
    undefined field149_0x95;
    undefined field150_0x96;
    undefined field151_0x97;
    undefined field152_0x98;
    undefined field153_0x99;
    undefined field154_0x9a;
    undefined field155_0x9b;
    undefined field156_0x9c;
    undefined field157_0x9d;
    undefined field158_0x9e;
    undefined field159_0x9f;
    undefined field160_0xa0;
    undefined field161_0xa1;
    undefined field162_0xa2;
    undefined field163_0xa3;
    undefined field164_0xa4;
    undefined field165_0xa5;
    undefined field166_0xa6;
    undefined field167_0xa7;
    undefined field168_0xa8;
    undefined field169_0xa9;
    undefined field170_0xaa;
    undefined field171_0xab;
    undefined field172_0xac;
    undefined field173_0xad;
    undefined field174_0xae;
    undefined field175_0xaf;
    undefined field176_0xb0;
    undefined field177_0xb1;
    undefined field178_0xb2;
    undefined field179_0xb3;
    undefined field180_0xb4;
    undefined field181_0xb5;
    undefined field182_0xb6;
    undefined field183_0xb7;
    undefined field184_0xb8;
    undefined field185_0xb9;
    undefined field186_0xba;
    undefined field187_0xbb;
    undefined field188_0xbc;
    undefined field189_0xbd;
    undefined field190_0xbe;
    undefined field191_0xbf;
    undefined field192_0xc0;
    undefined field193_0xc1;
    undefined field194_0xc2;
    undefined field195_0xc3;
    undefined field196_0xc4;
    undefined field197_0xc5;
    undefined field198_0xc6;
    undefined field199_0xc7;
    undefined field200_0xc8;
    undefined field201_0xc9;
    undefined field202_0xca;
    undefined field203_0xcb;
    undefined field204_0xcc;
    undefined field205_0xcd;
    undefined field206_0xce;
    undefined field207_0xcf;
    undefined field208_0xd0;
    undefined field209_0xd1;
    undefined field210_0xd2;
    undefined field211_0xd3;
    undefined field212_0xd4;
    undefined field213_0xd5;
    undefined field214_0xd6;
    undefined field215_0xd7;
    undefined field216_0xd8;
    undefined field217_0xd9;
    undefined field218_0xda;
    undefined field219_0xdb;
    undefined field220_0xdc;
    undefined field221_0xdd;
    undefined field222_0xde;
    undefined field223_0xdf;
    undefined field224_0xe0;
    undefined field225_0xe1;
    undefined field226_0xe2;
    undefined field227_0xe3;
    undefined field228_0xe4;
    undefined field229_0xe5;
    undefined field230_0xe6;
    undefined field231_0xe7;
    undefined field232_0xe8;
    undefined field233_0xe9;
    undefined field234_0xea;
    undefined field235_0xeb;
    undefined field236_0xec;
    undefined field237_0xed;
    undefined field238_0xee;
    undefined field239_0xef;
    undefined field240_0xf0;
    undefined field241_0xf1;
    undefined field242_0xf2;
    undefined field243_0xf3;
    undefined field244_0xf4;
    undefined field245_0xf5;
    undefined field246_0xf6;
    undefined field247_0xf7;
    undefined field248_0xf8;
    undefined field249_0xf9;
    undefined field250_0xfa;
    undefined field251_0xfb;
    undefined field252_0xfc;
    undefined field253_0xfd;
    undefined field254_0xfe;
    undefined field255_0xff;
    int id_or_index;
    undefined field257_0x104;
    undefined field258_0x105;
    undefined field259_0x106;
    undefined field260_0x107;
    undefined field261_0x108;
    undefined field262_0x109;
    undefined field263_0x10a;
    undefined field264_0x10b;
    undefined field265_0x10c;
    undefined field266_0x10d;
    undefined field267_0x10e;
    undefined field268_0x10f;
    undefined field269_0x110;
    undefined field270_0x111;
    undefined field271_0x112;
    undefined field272_0x113;
    undefined field273_0x114;
    undefined field274_0x115;
    undefined field275_0x116;
    undefined field276_0x117;
    char * also_source_code;
    char * source_code; /* Created by retype action */
    size_t source_code_size; /* Created by retype action */
    undefined field280_0x124;
    undefined field281_0x125;
    undefined field282_0x126;
    undefined field283_0x127;
    undefined field284_0x128;
    undefined field285_0x129;
    undefined field286_0x12a;
    undefined field287_0x12b;
    undefined field288_0x12c;
    undefined field289_0x12d;
    undefined field290_0x12e;
    undefined field291_0x12f;
    undefined field292_0x130;
    undefined field293_0x131;
    undefined field294_0x132;
    undefined field295_0x133;
    undefined field296_0x134;
    undefined field297_0x135;
    undefined field298_0x136;
    undefined field299_0x137;
    undefined field300_0x138;
    undefined field301_0x139;
    undefined field302_0x13a;
    undefined field303_0x13b;
    undefined field304_0x13c;
    undefined field305_0x13d;
    undefined field306_0x13e;
    undefined field307_0x13f;
    undefined field308_0x140;
    undefined field309_0x141;
    undefined field310_0x142;
    undefined field311_0x143;
    undefined field312_0x144;
    undefined field313_0x145;
    undefined field314_0x146;
    undefined field315_0x147;
    undefined field316_0x148;
    undefined field317_0x149;
    undefined field318_0x14a;
    undefined field319_0x14b;
    undefined field320_0x14c;
    undefined field321_0x14d;
    undefined field322_0x14e;
    undefined field323_0x14f;
    undefined field324_0x150;
    undefined field325_0x151;
    undefined field326_0x152;
    undefined field327_0x153;
    undefined field328_0x154;
    undefined field329_0x155;
    undefined field330_0x156;
    undefined field331_0x157;
    undefined field332_0x158;
    undefined field333_0x159;
    undefined field334_0x15a;
    undefined field335_0x15b;
    undefined field336_0x15c;
    undefined field337_0x15d;
    undefined field338_0x15e;
    undefined field339_0x15f;
    undefined field340_0x160;
    undefined field341_0x161;
    undefined field342_0x162;
    undefined field343_0x163;
    undefined field344_0x164;
    undefined field345_0x165;
    undefined field346_0x166;
    undefined field347_0x167;
    undefined field348_0x168;
    undefined field349_0x169;
    undefined field350_0x16a;
    undefined field351_0x16b;
    undefined field352_0x16c;
    undefined field353_0x16d;
    undefined field354_0x16e;
    undefined field355_0x16f;
    undefined field356_0x170;
    undefined field357_0x171;
    undefined field358_0x172;
    undefined field359_0x173;
    undefined field360_0x174;
    undefined field361_0x175;
    undefined field362_0x176;
    undefined field363_0x177;
    undefined field364_0x178;
    undefined field365_0x179;
    undefined field366_0x17a;
    undefined field367_0x17b;
    undefined field368_0x17c;
    undefined field369_0x17d;
    undefined field370_0x17e;
    undefined field371_0x17f;
    undefined field372_0x180;
    undefined field373_0x181;
    undefined field374_0x182;
    undefined field375_0x183;
    undefined field376_0x184;
    undefined field377_0x185;
    undefined field378_0x186;
    undefined field379_0x187;
    undefined field380_0x188;
    undefined field381_0x189;
    undefined field382_0x18a;
    undefined field383_0x18b;
    undefined field384_0x18c;
    undefined field385_0x18d;
    undefined field386_0x18e;
    undefined field387_0x18f;
    undefined field388_0x190;
    undefined field389_0x191;
    undefined field390_0x192;
    undefined field391_0x193;
    undefined field392_0x194;
    undefined field393_0x195;
    undefined field394_0x196;
    undefined field395_0x197;
    undefined field396_0x198;
    undefined field397_0x199;
    undefined field398_0x19a;
    undefined field399_0x19b;
    undefined field400_0x19c;
    undefined field401_0x19d;
    undefined field402_0x19e;
    undefined field403_0x19f;
    undefined field404_0x1a0;
    undefined field405_0x1a1;
    undefined field406_0x1a2;
    undefined field407_0x1a3;
    undefined field408_0x1a4;
    undefined field409_0x1a5;
    undefined field410_0x1a6;
    undefined field411_0x1a7;
    undefined field412_0x1a8;
    undefined field413_0x1a9;
    undefined field414_0x1aa;
    undefined field415_0x1ab;
    undefined field416_0x1ac;
    undefined field417_0x1ad;
    undefined field418_0x1ae;
    undefined field419_0x1af;
    undefined field420_0x1b0;
    undefined field421_0x1b1;
    undefined field422_0x1b2;
    undefined field423_0x1b3;
    undefined field424_0x1b4;
    undefined field425_0x1b5;
    undefined field426_0x1b6;
    undefined field427_0x1b7;
    undefined field428_0x1b8;
    undefined field429_0x1b9;
    undefined field430_0x1ba;
    undefined field431_0x1bb;
    undefined field432_0x1bc;
    undefined field433_0x1bd;
    undefined field434_0x1be;
    undefined field435_0x1bf;
    undefined field436_0x1c0;
    undefined field437_0x1c1;
    undefined field438_0x1c2;
    undefined field439_0x1c3;
    undefined field440_0x1c4;
    undefined field441_0x1c5;
    undefined field442_0x1c6;
    undefined field443_0x1c7;
    undefined field444_0x1c8;
    undefined field445_0x1c9;
    undefined field446_0x1ca;
    undefined field447_0x1cb;
    undefined field448_0x1cc;
    undefined field449_0x1cd;
    undefined field450_0x1ce;
    undefined field451_0x1cf;
    undefined field452_0x1d0;
    undefined field453_0x1d1;
    undefined field454_0x1d2;
    undefined field455_0x1d3;
    undefined field456_0x1d4;
    undefined field457_0x1d5;
    undefined field458_0x1d6;
    undefined field459_0x1d7;
    undefined field460_0x1d8;
    undefined field461_0x1d9;
    undefined field462_0x1da;
    undefined field463_0x1db;
    undefined field464_0x1dc;
    undefined field465_0x1dd;
    undefined field466_0x1de;
    undefined field467_0x1df;
    undefined field468_0x1e0;
    undefined field469_0x1e1;
    undefined field470_0x1e2;
    undefined field471_0x1e3;
    undefined field472_0x1e4;
    undefined field473_0x1e5;
    undefined field474_0x1e6;
    undefined field475_0x1e7;
    undefined field476_0x1e8;
    undefined field477_0x1e9;
    undefined field478_0x1ea;
    undefined field479_0x1eb;
    undefined field480_0x1ec;
    undefined field481_0x1ed;
    undefined field482_0x1ee;
    undefined field483_0x1ef;
    undefined field484_0x1f0;
    undefined field485_0x1f1;
    undefined field486_0x1f2;
    undefined field487_0x1f3;
    undefined field488_0x1f4;
    undefined field489_0x1f5;
    undefined field490_0x1f6;
    undefined field491_0x1f7;
    undefined field492_0x1f8;
    undefined field493_0x1f9;
    undefined field494_0x1fa;
    undefined field495_0x1fb;
    undefined field496_0x1fc;
    undefined field497_0x1fd;
    undefined field498_0x1fe;
    undefined field499_0x1ff;
    undefined field500_0x200;
    undefined field501_0x201;
    undefined field502_0x202;
    undefined field503_0x203;
    undefined field504_0x204;
    undefined field505_0x205;
    undefined field506_0x206;
    undefined field507_0x207;
    undefined field508_0x208;
    undefined field509_0x209;
    undefined field510_0x20a;
    undefined field511_0x20b;
    undefined field512_0x20c;
    undefined field513_0x20d;
    undefined field514_0x20e;
    undefined field515_0x20f;
    undefined field516_0x210;
    undefined field517_0x211;
    undefined field518_0x212;
    undefined field519_0x213;
    undefined field520_0x214;
    undefined field521_0x215;
    undefined field522_0x216;
    undefined field523_0x217;
    undefined field524_0x218;
    undefined field525_0x219;
    undefined field526_0x21a;
    undefined field527_0x21b;
    undefined field528_0x21c;
    undefined field529_0x21d;
    undefined field530_0x21e;
    undefined field531_0x21f;
    undefined field532_0x220;
    undefined field533_0x221;
    undefined field534_0x222;
    undefined field535_0x223;
    undefined field536_0x224;
    undefined field537_0x225;
    undefined field538_0x226;
    undefined field539_0x227;
    undefined field540_0x228;
    undefined field541_0x229;
    undefined field542_0x22a;
    undefined field543_0x22b;
    undefined field544_0x22c;
    undefined field545_0x22d;
    undefined field546_0x22e;
    undefined field547_0x22f;
    undefined field548_0x230;
    undefined field549_0x231;
    undefined field550_0x232;
    undefined field551_0x233;
    undefined field552_0x234;
    undefined field553_0x235;
    undefined field554_0x236;
    undefined field555_0x237;
    undefined field556_0x238;
    undefined field557_0x239;
    undefined field558_0x23a;
    undefined field559_0x23b;
    undefined field560_0x23c;
    undefined field561_0x23d;
    undefined field562_0x23e;
    undefined field563_0x23f;
    undefined field564_0x240;
    undefined field565_0x241;
    undefined field566_0x242;
    undefined field567_0x243;
    undefined field568_0x244;
    undefined field569_0x245;
    undefined field570_0x246;
    undefined field571_0x247;
    undefined field572_0x248;
    undefined field573_0x249;
    undefined field574_0x24a;
    undefined field575_0x24b;
    undefined field576_0x24c;
    undefined field577_0x24d;
    undefined field578_0x24e;
    undefined field579_0x24f;
    undefined field580_0x250;
    undefined field581_0x251;
    undefined field582_0x252;
    undefined field583_0x253;
    undefined field584_0x254;
    undefined field585_0x255;
    undefined field586_0x256;
    undefined field587_0x257;
    undefined field588_0x258;
    undefined field589_0x259;
    undefined field590_0x25a;
    undefined field591_0x25b;
    undefined field592_0x25c;
    undefined field593_0x25d;
    undefined field594_0x25e;
    undefined field595_0x25f;
    undefined field596_0x260;
    undefined field597_0x261;
    undefined field598_0x262;
    undefined field599_0x263;
    undefined field600_0x264;
    undefined field601_0x265;
    undefined field602_0x266;
    undefined field603_0x267;
    undefined field604_0x268;
    undefined field605_0x269;
    undefined field606_0x26a;
    undefined field607_0x26b;
    undefined field608_0x26c;
    undefined field609_0x26d;
    undefined field610_0x26e;
    undefined field611_0x26f;
    undefined field612_0x270;
    undefined field613_0x271;
    undefined field614_0x272;
    undefined field615_0x273;
    undefined field616_0x274;
    undefined field617_0x275;
    undefined field618_0x276;
    undefined field619_0x277;
    undefined field620_0x278;
    undefined field621_0x279;
    undefined field622_0x27a;
    undefined field623_0x27b;
    undefined field624_0x27c;
    undefined field625_0x27d;
    undefined field626_0x27e;
    undefined field627_0x27f;
    undefined field628_0x280;
    undefined field629_0x281;
    undefined field630_0x282;
    undefined field631_0x283;
    undefined field632_0x284;
    undefined field633_0x285;
    undefined field634_0x286;
    undefined field635_0x287;
    undefined field636_0x288;
    undefined field637_0x289;
    undefined field638_0x28a;
    undefined field639_0x28b;
    undefined field640_0x28c;
    undefined field641_0x28d;
    undefined field642_0x28e;
    undefined field643_0x28f;
    undefined field644_0x290;
    undefined field645_0x291;
    undefined field646_0x292;
    undefined field647_0x293;
    undefined field648_0x294;
    undefined field649_0x295;
    undefined field650_0x296;
    undefined field651_0x297;
    undefined field652_0x298;
    undefined field653_0x299;
    undefined field654_0x29a;
    undefined field655_0x29b;
    undefined field656_0x29c;
    undefined field657_0x29d;
    undefined field658_0x29e;
    undefined field659_0x29f;
    undefined field660_0x2a0;
    undefined field661_0x2a1;
    undefined field662_0x2a2;
    undefined field663_0x2a3;
    undefined field664_0x2a4;
    undefined field665_0x2a5;
    undefined field666_0x2a6;
    undefined field667_0x2a7;
    undefined field668_0x2a8;
    undefined field669_0x2a9;
    undefined field670_0x2aa;
    undefined field671_0x2ab;
    undefined field672_0x2ac;
    undefined field673_0x2ad;
    undefined field674_0x2ae;
    undefined field675_0x2af;
    undefined field676_0x2b0;
    undefined field677_0x2b1;
    undefined field678_0x2b2;
    undefined field679_0x2b3;
    undefined field680_0x2b4;
    undefined field681_0x2b5;
    undefined field682_0x2b6;
    undefined field683_0x2b7;
    undefined field684_0x2b8;
    undefined field685_0x2b9;
    undefined field686_0x2ba;
    undefined field687_0x2bb;
    undefined field688_0x2bc;
    undefined field689_0x2bd;
    undefined field690_0x2be;
    undefined field691_0x2bf;
    undefined field692_0x2c0;
    undefined field693_0x2c1;
    undefined field694_0x2c2;
    undefined field695_0x2c3;
    undefined field696_0x2c4;
    undefined field697_0x2c5;
    undefined field698_0x2c6;
    undefined field699_0x2c7;
    undefined field700_0x2c8;
    undefined field701_0x2c9;
    undefined field702_0x2ca;
    undefined field703_0x2cb;
    undefined field704_0x2cc;
    undefined field705_0x2cd;
    undefined field706_0x2ce;
    undefined field707_0x2cf;
    undefined field708_0x2d0;
    undefined field709_0x2d1;
    undefined field710_0x2d2;
    undefined field711_0x2d3;
    undefined field712_0x2d4;
    undefined field713_0x2d5;
    undefined field714_0x2d6;
    undefined field715_0x2d7;
    undefined field716_0x2d8;
    undefined field717_0x2d9;
    undefined field718_0x2da;
    undefined field719_0x2db;
    undefined field720_0x2dc;
    undefined field721_0x2dd;
    undefined field722_0x2de;
    undefined field723_0x2df;
    undefined field724_0x2e0;
    undefined field725_0x2e1;
    undefined field726_0x2e2;
    undefined field727_0x2e3;
    undefined field728_0x2e4;
    undefined field729_0x2e5;
    undefined field730_0x2e6;
    undefined field731_0x2e7;
    undefined field732_0x2e8;
    undefined field733_0x2e9;
    undefined field734_0x2ea;
    undefined field735_0x2eb;
    undefined field736_0x2ec;
    undefined field737_0x2ed;
    undefined field738_0x2ee;
    undefined field739_0x2ef;
    undefined field740_0x2f0;
    undefined field741_0x2f1;
    undefined field742_0x2f2;
    undefined field743_0x2f3;
    undefined field744_0x2f4;
    undefined field745_0x2f5;
    undefined field746_0x2f6;
    undefined field747_0x2f7;
    undefined field748_0x2f8;
    undefined field749_0x2f9;
    undefined field750_0x2fa;
    undefined field751_0x2fb;
    undefined field752_0x2fc;
    undefined field753_0x2fd;
    undefined field754_0x2fe;
    undefined field755_0x2ff;
    undefined field756_0x300;
    undefined field757_0x301;
    undefined field758_0x302;
    undefined field759_0x303;
    undefined field760_0x304;
    undefined field761_0x305;
    undefined field762_0x306;
    undefined field763_0x307;
    undefined field764_0x308;
    undefined field765_0x309;
    undefined field766_0x30a;
    undefined field767_0x30b;
    undefined field768_0x30c;
    undefined field769_0x30d;
    undefined field770_0x30e;
    undefined field771_0x30f;
    undefined field772_0x310;
    undefined field773_0x311;
    undefined field774_0x312;
    undefined field775_0x313;
    undefined field776_0x314;
    undefined field777_0x315;
    undefined field778_0x316;
    undefined field779_0x317;
    undefined field780_0x318;
    undefined field781_0x319;
    undefined field782_0x31a;
    undefined field783_0x31b;
    undefined field784_0x31c;
    undefined field785_0x31d;
    undefined field786_0x31e;
    undefined field787_0x31f;
    undefined field788_0x320;
    undefined field789_0x321;
    undefined field790_0x322;
    undefined field791_0x323;
    undefined field792_0x324;
    undefined field793_0x325;
    undefined field794_0x326;
    undefined field795_0x327;
    undefined field796_0x328;
    undefined field797_0x329;
    undefined field798_0x32a;
    undefined field799_0x32b;
    undefined field800_0x32c;
    undefined field801_0x32d;
    undefined field802_0x32e;
    undefined field803_0x32f;
    undefined field804_0x330;
    undefined field805_0x331;
    undefined field806_0x332;
    undefined field807_0x333;
    undefined field808_0x334;
    undefined field809_0x335;
    undefined field810_0x336;
    undefined field811_0x337;
    undefined field812_0x338;
    undefined field813_0x339;
    undefined field814_0x33a;
    undefined field815_0x33b;
    undefined field816_0x33c;
    undefined field817_0x33d;
    undefined field818_0x33e;
    undefined field819_0x33f;
    undefined field820_0x340;
    undefined field821_0x341;
    undefined field822_0x342;
    undefined field823_0x343;
    undefined field824_0x344;
    undefined field825_0x345;
    undefined field826_0x346;
    undefined field827_0x347;
    undefined field828_0x348;
    undefined field829_0x349;
    undefined field830_0x34a;
    undefined field831_0x34b;
    undefined field832_0x34c;
    undefined field833_0x34d;
    undefined field834_0x34e;
    undefined field835_0x34f;
    undefined field836_0x350;
    undefined field837_0x351;
    undefined field838_0x352;
    undefined field839_0x353;
    undefined field840_0x354;
    undefined field841_0x355;
    undefined field842_0x356;
    undefined field843_0x357;
    undefined field844_0x358;
    undefined field845_0x359;
    undefined field846_0x35a;
    undefined field847_0x35b;
    undefined field848_0x35c;
    undefined field849_0x35d;
    undefined field850_0x35e;
    undefined field851_0x35f;
    undefined field852_0x360;
    undefined field853_0x361;
    undefined field854_0x362;
    undefined field855_0x363;
    undefined field856_0x364;
    undefined field857_0x365;
    undefined field858_0x366;
    undefined field859_0x367;
    undefined field860_0x368;
    undefined field861_0x369;
    undefined field862_0x36a;
    undefined field863_0x36b;
    undefined field864_0x36c;
    undefined field865_0x36d;
    undefined field866_0x36e;
    undefined field867_0x36f;
    undefined field868_0x370;
    undefined field869_0x371;
    undefined field870_0x372;
    undefined field871_0x373;
    undefined field872_0x374;
    undefined field873_0x375;
    undefined field874_0x376;
    undefined field875_0x377;
    undefined field876_0x378;
    undefined field877_0x379;
    undefined field878_0x37a;
    undefined field879_0x37b;
    undefined field880_0x37c;
    undefined field881_0x37d;
    undefined field882_0x37e;
    undefined field883_0x37f;
    undefined field884_0x380;
    undefined field885_0x381;
    undefined field886_0x382;
    undefined field887_0x383;
    undefined field888_0x384;
    undefined field889_0x385;
    undefined field890_0x386;
    undefined field891_0x387;
    undefined field892_0x388;
    undefined field893_0x389;
    undefined field894_0x38a;
    undefined field895_0x38b;
    undefined field896_0x38c;
    undefined field897_0x38d;
    undefined field898_0x38e;
    undefined field899_0x38f;
    undefined field900_0x390;
    undefined field901_0x391;
    undefined field902_0x392;
    undefined field903_0x393;
    undefined field904_0x394;
    undefined field905_0x395;
    undefined field906_0x396;
    undefined field907_0x397;
    undefined field908_0x398;
    undefined field909_0x399;
    undefined field910_0x39a;
    undefined field911_0x39b;
    undefined field912_0x39c;
    undefined field913_0x39d;
    undefined field914_0x39e;
    undefined field915_0x39f;
    undefined field916_0x3a0;
    undefined field917_0x3a1;
    undefined field918_0x3a2;
    undefined field919_0x3a3;
    undefined field920_0x3a4;
    undefined field921_0x3a5;
    undefined field922_0x3a6;
    undefined field923_0x3a7;
    undefined field924_0x3a8;
    undefined field925_0x3a9;
    undefined field926_0x3aa;
    undefined field927_0x3ab;
    undefined field928_0x3ac;
    undefined field929_0x3ad;
    undefined field930_0x3ae;
    undefined field931_0x3af;
    undefined field932_0x3b0;
    undefined field933_0x3b1;
    undefined field934_0x3b2;
    undefined field935_0x3b3;
    undefined field936_0x3b4;
    undefined field937_0x3b5;
    undefined field938_0x3b6;
    undefined field939_0x3b7;
    undefined field940_0x3b8;
    undefined field941_0x3b9;
    undefined field942_0x3ba;
    undefined field943_0x3bb;
    undefined field944_0x3bc;
    undefined field945_0x3bd;
    undefined field946_0x3be;
    undefined field947_0x3bf;
    undefined field948_0x3c0;
    undefined field949_0x3c1;
    undefined field950_0x3c2;
    undefined field951_0x3c3;
    undefined field952_0x3c4;
    undefined field953_0x3c5;
    undefined field954_0x3c6;
    undefined field955_0x3c7;
    undefined field956_0x3c8;
    undefined field957_0x3c9;
    undefined field958_0x3ca;
    undefined field959_0x3cb;
    undefined field960_0x3cc;
    undefined field961_0x3cd;
    undefined field962_0x3ce;
    undefined field963_0x3cf;
    undefined field964_0x3d0;
    undefined field965_0x3d1;
    undefined field966_0x3d2;
    undefined field967_0x3d3;
    undefined field968_0x3d4;
    undefined field969_0x3d5;
    undefined field970_0x3d6;
    undefined field971_0x3d7;
    undefined field972_0x3d8;
    undefined field973_0x3d9;
    undefined field974_0x3da;
    undefined field975_0x3db;
    undefined field976_0x3dc;
    undefined field977_0x3dd;
    undefined field978_0x3de;
    undefined field979_0x3df;
    undefined field980_0x3e0;
    undefined field981_0x3e1;
    undefined field982_0x3e2;
    undefined field983_0x3e3;
    undefined field984_0x3e4;
    undefined field985_0x3e5;
    undefined field986_0x3e6;
    undefined field987_0x3e7;
    undefined field988_0x3e8;
    undefined field989_0x3e9;
    undefined field990_0x3ea;
    undefined field991_0x3eb;
    undefined field992_0x3ec;
    undefined field993_0x3ed;
    undefined field994_0x3ee;
    undefined field995_0x3ef;
    undefined field996_0x3f0;
    undefined field997_0x3f1;
    undefined field998_0x3f2;
    undefined field999_0x3f3;
    undefined field1000_0x3f4;
    undefined field1001_0x3f5;
    undefined field1002_0x3f6;
    undefined field1003_0x3f7;
    undefined field1004_0x3f8;
    undefined field1005_0x3f9;
    undefined field1006_0x3fa;
    undefined field1007_0x3fb;
    undefined field1008_0x3fc;
    undefined field1009_0x3fd;
    undefined field1010_0x3fe;
    undefined field1011_0x3ff;
    undefined field1012_0x400;
    undefined field1013_0x401;
    undefined field1014_0x402;
    undefined field1015_0x403;
    undefined field1016_0x404;
    undefined field1017_0x405;
    undefined field1018_0x406;
    undefined field1019_0x407;
    undefined field1020_0x408;
    undefined field1021_0x409;
    undefined field1022_0x40a;
    undefined field1023_0x40b;
    undefined field1024_0x40c;
    undefined field1025_0x40d;
    undefined field1026_0x40e;
    undefined field1027_0x40f;
    undefined field1028_0x410;
    undefined field1029_0x411;
    undefined field1030_0x412;
    undefined field1031_0x413;
    undefined field1032_0x414;
    undefined field1033_0x415;
    undefined field1034_0x416;
    undefined field1035_0x417;
    undefined field1036_0x418;
    undefined field1037_0x419;
    undefined field1038_0x41a;
    undefined field1039_0x41b;
    undefined field1040_0x41c;
    undefined field1041_0x41d;
    undefined field1042_0x41e;
    undefined field1043_0x41f;
    undefined field1044_0x420;
    undefined field1045_0x421;
    undefined field1046_0x422;
    undefined field1047_0x423;
    undefined field1048_0x424;
    undefined field1049_0x425;
    undefined field1050_0x426;
    undefined field1051_0x427;
    undefined field1052_0x428;
    undefined field1053_0x429;
    undefined field1054_0x42a;
    undefined field1055_0x42b;
    undefined field1056_0x42c;
    undefined field1057_0x42d;
    undefined field1058_0x42e;
    undefined field1059_0x42f;
    undefined field1060_0x430;
    undefined field1061_0x431;
    undefined field1062_0x432;
    undefined field1063_0x433;
    undefined field1064_0x434;
    undefined field1065_0x435;
    undefined field1066_0x436;
    undefined field1067_0x437;
    undefined field1068_0x438;
    undefined field1069_0x439;
    undefined field1070_0x43a;
    undefined field1071_0x43b;
    undefined field1072_0x43c;
    undefined field1073_0x43d;
    undefined field1074_0x43e;
    undefined field1075_0x43f;
    undefined field1076_0x440;
    undefined field1077_0x441;
    undefined field1078_0x442;
    undefined field1079_0x443;
    undefined field1080_0x444;
    undefined field1081_0x445;
    undefined field1082_0x446;
    undefined field1083_0x447;
    undefined field1084_0x448;
    undefined field1085_0x449;
    undefined field1086_0x44a;
    undefined field1087_0x44b;
    undefined field1088_0x44c;
    undefined field1089_0x44d;
    undefined field1090_0x44e;
    undefined field1091_0x44f;
    undefined field1092_0x450;
    undefined field1093_0x451;
    undefined field1094_0x452;
    undefined field1095_0x453;
    undefined field1096_0x454;
    undefined field1097_0x455;
    undefined field1098_0x456;
    undefined field1099_0x457;
    undefined field1100_0x458;
    undefined field1101_0x459;
    undefined field1102_0x45a;
    undefined field1103_0x45b;
    undefined field1104_0x45c;
    undefined field1105_0x45d;
    undefined field1106_0x45e;
    undefined field1107_0x45f;
    undefined field1108_0x460;
    undefined field1109_0x461;
    undefined field1110_0x462;
    undefined field1111_0x463;
    undefined field1112_0x464;
    undefined field1113_0x465;
    undefined field1114_0x466;
    undefined field1115_0x467;
    undefined field1116_0x468;
    undefined field1117_0x469;
    undefined field1118_0x46a;
    undefined field1119_0x46b;
    undefined field1120_0x46c;
    undefined field1121_0x46d;
    undefined field1122_0x46e;
    undefined field1123_0x46f;
    undefined field1124_0x470;
    undefined field1125_0x471;
    undefined field1126_0x472;
    undefined field1127_0x473;
    undefined field1128_0x474;
    undefined field1129_0x475;
    undefined field1130_0x476;
    undefined field1131_0x477;
    undefined field1132_0x478;
    undefined field1133_0x479;
    undefined field1134_0x47a;
    undefined field1135_0x47b;
    undefined field1136_0x47c;
    undefined field1137_0x47d;
    undefined field1138_0x47e;
    undefined field1139_0x47f;
    undefined field1140_0x480;
    undefined field1141_0x481;
    undefined field1142_0x482;
    undefined field1143_0x483;
    undefined field1144_0x484;
    undefined field1145_0x485;
    undefined field1146_0x486;
    undefined field1147_0x487;
    undefined field1148_0x488;
    undefined field1149_0x489;
    undefined field1150_0x48a;
    undefined field1151_0x48b;
    undefined field1152_0x48c;
    undefined field1153_0x48d;
    undefined field1154_0x48e;
    undefined field1155_0x48f;
    undefined field1156_0x490;
    undefined field1157_0x491;
    undefined field1158_0x492;
    undefined field1159_0x493;
    undefined field1160_0x494;
    undefined field1161_0x495;
    undefined field1162_0x496;
    undefined field1163_0x497;
    undefined field1164_0x498;
    undefined field1165_0x499;
    undefined field1166_0x49a;
    undefined field1167_0x49b;
    undefined field1168_0x49c;
    undefined field1169_0x49d;
    undefined field1170_0x49e;
    undefined field1171_0x49f;
    undefined field1172_0x4a0;
    undefined field1173_0x4a1;
    undefined field1174_0x4a2;
    undefined field1175_0x4a3;
    undefined field1176_0x4a4;
    undefined field1177_0x4a5;
    undefined field1178_0x4a6;
    undefined field1179_0x4a7;
    undefined field1180_0x4a8;
    undefined field1181_0x4a9;
    undefined field1182_0x4aa;
    undefined field1183_0x4ab;
    undefined field1184_0x4ac;
    undefined field1185_0x4ad;
    undefined field1186_0x4ae;
    undefined field1187_0x4af;
    undefined field1188_0x4b0;
    undefined field1189_0x4b1;
    undefined field1190_0x4b2;
    undefined field1191_0x4b3;
    undefined field1192_0x4b4;
    undefined field1193_0x4b5;
    undefined field1194_0x4b6;
    undefined field1195_0x4b7;
    undefined field1196_0x4b8;
    undefined field1197_0x4b9;
    undefined field1198_0x4ba;
    undefined field1199_0x4bb;
    undefined field1200_0x4bc;
    undefined field1201_0x4bd;
    undefined field1202_0x4be;
    undefined field1203_0x4bf;
    undefined field1204_0x4c0;
    undefined field1205_0x4c1;
    undefined field1206_0x4c2;
    undefined field1207_0x4c3;
    undefined field1208_0x4c4;
    undefined field1209_0x4c5;
    undefined field1210_0x4c6;
    undefined field1211_0x4c7;
    undefined field1212_0x4c8;
    undefined field1213_0x4c9;
    undefined field1214_0x4ca;
    undefined field1215_0x4cb;
    undefined field1216_0x4cc;
    undefined field1217_0x4cd;
    undefined field1218_0x4ce;
    undefined field1219_0x4cf;
    undefined field1220_0x4d0;
    undefined field1221_0x4d1;
    undefined field1222_0x4d2;
    undefined field1223_0x4d3;
    undefined field1224_0x4d4;
    undefined field1225_0x4d5;
    undefined field1226_0x4d6;
    undefined field1227_0x4d7;
    undefined field1228_0x4d8;
    undefined field1229_0x4d9;
    undefined field1230_0x4da;
    undefined field1231_0x4db;
    undefined field1232_0x4dc;
    undefined field1233_0x4dd;
    undefined field1234_0x4de;
    undefined field1235_0x4df;
    undefined field1236_0x4e0;
    undefined field1237_0x4e1;
    undefined field1238_0x4e2;
    undefined field1239_0x4e3;
    undefined field1240_0x4e4;
    undefined field1241_0x4e5;
    undefined field1242_0x4e6;
    undefined field1243_0x4e7;
    undefined field1244_0x4e8;
    undefined field1245_0x4e9;
    undefined field1246_0x4ea;
    undefined field1247_0x4eb;
    undefined field1248_0x4ec;
    undefined field1249_0x4ed;
    undefined field1250_0x4ee;
    undefined field1251_0x4ef;
    undefined field1252_0x4f0;
    undefined field1253_0x4f1;
    undefined field1254_0x4f2;
    undefined field1255_0x4f3;
    undefined field1256_0x4f4;
    undefined field1257_0x4f5;
    undefined field1258_0x4f6;
    undefined field1259_0x4f7;
    undefined field1260_0x4f8;
    undefined field1261_0x4f9;
    undefined field1262_0x4fa;
    undefined field1263_0x4fb;
    undefined field1264_0x4fc;
    undefined field1265_0x4fd;
    undefined field1266_0x4fe;
    undefined field1267_0x4ff;
    undefined field1268_0x500;
    undefined field1269_0x501;
    undefined field1270_0x502;
    undefined field1271_0x503;
    undefined field1272_0x504;
    undefined field1273_0x505;
    undefined field1274_0x506;
    undefined field1275_0x507;
    undefined field1276_0x508;
    undefined field1277_0x509;
    undefined field1278_0x50a;
    undefined field1279_0x50b;
    undefined field1280_0x50c;
    undefined field1281_0x50d;
    undefined field1282_0x50e;
    undefined field1283_0x50f;
    undefined field1284_0x510;
    undefined field1285_0x511;
    undefined field1286_0x512;
    undefined field1287_0x513;
    undefined field1288_0x514;
    undefined field1289_0x515;
    undefined field1290_0x516;
    undefined field1291_0x517;
    undefined field1292_0x518;
    undefined field1293_0x519;
    undefined field1294_0x51a;
    undefined field1295_0x51b;
    undefined field1296_0x51c;
    undefined field1297_0x51d;
    undefined field1298_0x51e;
    undefined field1299_0x51f;
    undefined field1300_0x520;
    undefined field1301_0x521;
    undefined field1302_0x522;
    undefined field1303_0x523;
    undefined field1304_0x524;
    undefined field1305_0x525;
    undefined field1306_0x526;
    undefined field1307_0x527;
    undefined field1308_0x528;
    undefined field1309_0x529;
    undefined field1310_0x52a;
    undefined field1311_0x52b;
    undefined field1312_0x52c;
    undefined field1313_0x52d;
    undefined field1314_0x52e;
    undefined field1315_0x52f;
    undefined field1316_0x530;
    undefined field1317_0x531;
    undefined field1318_0x532;
    undefined field1319_0x533;
    undefined field1320_0x534;
    undefined field1321_0x535;
    undefined field1322_0x536;
    undefined field1323_0x537;
    undefined field1324_0x538;
    undefined field1325_0x539;
    undefined field1326_0x53a;
    undefined field1327_0x53b;
    undefined field1328_0x53c;
    undefined field1329_0x53d;
    undefined field1330_0x53e;
    undefined field1331_0x53f;
    undefined field1332_0x540;
    undefined field1333_0x541;
    undefined field1334_0x542;
    undefined field1335_0x543;
    undefined field1336_0x544;
    undefined field1337_0x545;
    undefined field1338_0x546;
    undefined field1339_0x547;
    undefined field1340_0x548;
    undefined field1341_0x549;
    undefined field1342_0x54a;
    undefined field1343_0x54b;
    undefined field1344_0x54c;
    undefined field1345_0x54d;
    undefined field1346_0x54e;
    undefined field1347_0x54f;
    undefined field1348_0x550;
    undefined field1349_0x551;
    undefined field1350_0x552;
    undefined field1351_0x553;
    undefined field1352_0x554;
    undefined field1353_0x555;
    undefined field1354_0x556;
    undefined field1355_0x557;
    undefined field1356_0x558;
    undefined field1357_0x559;
    undefined field1358_0x55a;
    undefined field1359_0x55b;
    undefined field1360_0x55c;
    undefined field1361_0x55d;
    undefined field1362_0x55e;
    undefined field1363_0x55f;
    undefined field1364_0x560;
    undefined field1365_0x561;
    undefined field1366_0x562;
    undefined field1367_0x563;
    undefined field1368_0x564;
    undefined field1369_0x565;
    undefined field1370_0x566;
    undefined field1371_0x567;
    undefined field1372_0x568;
    undefined field1373_0x569;
    undefined field1374_0x56a;
    undefined field1375_0x56b;
    undefined field1376_0x56c;
    undefined field1377_0x56d;
    undefined field1378_0x56e;
    undefined field1379_0x56f;
    undefined field1380_0x570;
    undefined field1381_0x571;
    undefined field1382_0x572;
    undefined field1383_0x573;
    undefined field1384_0x574;
    undefined field1385_0x575;
    undefined field1386_0x576;
    undefined field1387_0x577;
    undefined field1388_0x578;
    undefined field1389_0x579;
    undefined field1390_0x57a;
    undefined field1391_0x57b;
    undefined field1392_0x57c;
    undefined field1393_0x57d;
    undefined field1394_0x57e;
    undefined field1395_0x57f;
    undefined field1396_0x580;
    undefined field1397_0x581;
    undefined field1398_0x582;
    undefined field1399_0x583;
    undefined field1400_0x584;
    undefined field1401_0x585;
    undefined field1402_0x586;
    undefined field1403_0x587;
    undefined field1404_0x588;
    undefined field1405_0x589;
    undefined field1406_0x58a;
    undefined field1407_0x58b;
    undefined field1408_0x58c;
    undefined field1409_0x58d;
    undefined field1410_0x58e;
    undefined field1411_0x58f;
    undefined field1412_0x590;
    undefined field1413_0x591;
    undefined field1414_0x592;
    undefined field1415_0x593;
    undefined field1416_0x594;
    undefined field1417_0x595;
    undefined field1418_0x596;
    undefined field1419_0x597;
    undefined field1420_0x598;
    undefined field1421_0x599;
    undefined field1422_0x59a;
    undefined field1423_0x59b;
    undefined field1424_0x59c;
    undefined field1425_0x59d;
    undefined field1426_0x59e;
    undefined field1427_0x59f;
    undefined field1428_0x5a0;
    undefined field1429_0x5a1;
    undefined field1430_0x5a2;
    undefined field1431_0x5a3;
    undefined field1432_0x5a4;
    undefined field1433_0x5a5;
    undefined field1434_0x5a6;
    undefined field1435_0x5a7;
    undefined field1436_0x5a8;
    undefined field1437_0x5a9;
    undefined field1438_0x5aa;
    undefined field1439_0x5ab;
    undefined field1440_0x5ac;
    undefined field1441_0x5ad;
    undefined field1442_0x5ae;
    undefined field1443_0x5af;
    undefined field1444_0x5b0;
    undefined field1445_0x5b1;
    undefined field1446_0x5b2;
    undefined field1447_0x5b3;
    undefined field1448_0x5b4;
    undefined field1449_0x5b5;
    undefined field1450_0x5b6;
    undefined field1451_0x5b7;
    undefined field1452_0x5b8;
    undefined field1453_0x5b9;
    undefined field1454_0x5ba;
    undefined field1455_0x5bb;
    undefined field1456_0x5bc;
    undefined field1457_0x5bd;
    undefined field1458_0x5be;
    undefined field1459_0x5bf;
    undefined field1460_0x5c0;
    undefined field1461_0x5c1;
    undefined field1462_0x5c2;
    undefined field1463_0x5c3;
    undefined field1464_0x5c4;
    undefined field1465_0x5c5;
    undefined field1466_0x5c6;
    undefined field1467_0x5c7;
    undefined field1468_0x5c8;
    undefined field1469_0x5c9;
    undefined field1470_0x5ca;
    undefined field1471_0x5cb;
    undefined field1472_0x5cc;
    undefined field1473_0x5cd;
    undefined field1474_0x5ce;
    undefined field1475_0x5cf;
    undefined field1476_0x5d0;
    undefined field1477_0x5d1;
    undefined field1478_0x5d2;
    undefined field1479_0x5d3;
    undefined field1480_0x5d4;
    undefined field1481_0x5d5;
    undefined field1482_0x5d6;
    undefined field1483_0x5d7;
    undefined field1484_0x5d8;
    undefined field1485_0x5d9;
    undefined field1486_0x5da;
    undefined field1487_0x5db;
    undefined field1488_0x5dc;
    undefined field1489_0x5dd;
    undefined field1490_0x5de;
    undefined field1491_0x5df;
    undefined field1492_0x5e0;
    undefined field1493_0x5e1;
    undefined field1494_0x5e2;
    undefined field1495_0x5e3;
    undefined field1496_0x5e4;
    undefined field1497_0x5e5;
    undefined field1498_0x5e6;
    undefined field1499_0x5e7;
    undefined field1500_0x5e8;
    undefined field1501_0x5e9;
    undefined field1502_0x5ea;
    undefined field1503_0x5eb;
    undefined field1504_0x5ec;
    undefined field1505_0x5ed;
    undefined field1506_0x5ee;
    undefined field1507_0x5ef;
    undefined field1508_0x5f0;
    undefined field1509_0x5f1;
    undefined field1510_0x5f2;
    undefined field1511_0x5f3;
    undefined field1512_0x5f4;
    undefined field1513_0x5f5;
    undefined field1514_0x5f6;
    undefined field1515_0x5f7;
    undefined field1516_0x5f8;
    undefined field1517_0x5f9;
    undefined field1518_0x5fa;
    undefined field1519_0x5fb;
    undefined field1520_0x5fc;
    undefined field1521_0x5fd;
    undefined field1522_0x5fe;
    undefined field1523_0x5ff;
    undefined field1524_0x600;
    undefined field1525_0x601;
    undefined field1526_0x602;
    undefined field1527_0x603;
    undefined field1528_0x604;
    undefined field1529_0x605;
    undefined field1530_0x606;
    undefined field1531_0x607;
    undefined field1532_0x608;
    undefined field1533_0x609;
    undefined field1534_0x60a;
    undefined field1535_0x60b;
    undefined field1536_0x60c;
    undefined field1537_0x60d;
    undefined field1538_0x60e;
    undefined field1539_0x60f;
    undefined field1540_0x610;
    undefined field1541_0x611;
    undefined field1542_0x612;
    undefined field1543_0x613;
    undefined field1544_0x614;
    undefined field1545_0x615;
    undefined field1546_0x616;
    undefined field1547_0x617;
    undefined field1548_0x618;
    undefined field1549_0x619;
    undefined field1550_0x61a;
    undefined field1551_0x61b;
    undefined field1552_0x61c;
    undefined field1553_0x61d;
    undefined field1554_0x61e;
    undefined field1555_0x61f;
    undefined field1556_0x620;
    undefined field1557_0x621;
    undefined field1558_0x622;
    undefined field1559_0x623;
    undefined field1560_0x624;
    undefined field1561_0x625;
    undefined field1562_0x626;
    undefined field1563_0x627;
    undefined field1564_0x628;
    undefined field1565_0x629;
    undefined field1566_0x62a;
    undefined field1567_0x62b;
    undefined field1568_0x62c;
    undefined field1569_0x62d;
    undefined field1570_0x62e;
    undefined field1571_0x62f;
    undefined field1572_0x630;
    undefined field1573_0x631;
    undefined field1574_0x632;
    undefined field1575_0x633;
    undefined field1576_0x634;
    undefined field1577_0x635;
    undefined field1578_0x636;
    undefined field1579_0x637;
    undefined field1580_0x638;
    undefined field1581_0x639;
    undefined field1582_0x63a;
    undefined field1583_0x63b;
    undefined field1584_0x63c;
    undefined field1585_0x63d;
    undefined field1586_0x63e;
    undefined field1587_0x63f;
    undefined field1588_0x640;
    undefined field1589_0x641;
    undefined field1590_0x642;
    undefined field1591_0x643;
    undefined field1592_0x644;
    undefined field1593_0x645;
    undefined field1594_0x646;
    undefined field1595_0x647;
    undefined field1596_0x648;
    undefined field1597_0x649;
    undefined field1598_0x64a;
    undefined field1599_0x64b;
    undefined field1600_0x64c;
    undefined field1601_0x64d;
    undefined field1602_0x64e;
    undefined field1603_0x64f;
    undefined field1604_0x650;
    undefined field1605_0x651;
    undefined field1606_0x652;
    undefined field1607_0x653;
    undefined field1608_0x654;
    undefined field1609_0x655;
    undefined field1610_0x656;
    undefined field1611_0x657;
    undefined field1612_0x658;
    undefined field1613_0x659;
    undefined field1614_0x65a;
    undefined field1615_0x65b;
    undefined field1616_0x65c;
    undefined field1617_0x65d;
    undefined field1618_0x65e;
    undefined field1619_0x65f;
    undefined field1620_0x660;
    undefined field1621_0x661;
    undefined field1622_0x662;
    undefined field1623_0x663;
    undefined field1624_0x664;
    undefined field1625_0x665;
    undefined field1626_0x666;
    undefined field1627_0x667;
    undefined field1628_0x668;
    undefined field1629_0x669;
    undefined field1630_0x66a;
    undefined field1631_0x66b;
    undefined field1632_0x66c;
    undefined field1633_0x66d;
    undefined field1634_0x66e;
    undefined field1635_0x66f;
    undefined field1636_0x670;
    undefined field1637_0x671;
    undefined field1638_0x672;
    undefined field1639_0x673;
    undefined field1640_0x674;
    undefined field1641_0x675;
    undefined field1642_0x676;
    undefined field1643_0x677;
    undefined field1644_0x678;
    undefined field1645_0x679;
    undefined field1646_0x67a;
    undefined field1647_0x67b;
    undefined field1648_0x67c;
    undefined field1649_0x67d;
    undefined field1650_0x67e;
    undefined field1651_0x67f;
    undefined field1652_0x680;
    undefined field1653_0x681;
    undefined field1654_0x682;
    undefined field1655_0x683;
    undefined field1656_0x684;
    undefined field1657_0x685;
    undefined field1658_0x686;
    undefined field1659_0x687;
    undefined field1660_0x688;
    undefined field1661_0x689;
    undefined field1662_0x68a;
    undefined field1663_0x68b;
    undefined field1664_0x68c;
    undefined field1665_0x68d;
    undefined field1666_0x68e;
    undefined field1667_0x68f;
    undefined field1668_0x690;
    undefined field1669_0x691;
    undefined field1670_0x692;
    undefined field1671_0x693;
    undefined field1672_0x694;
    undefined field1673_0x695;
    undefined field1674_0x696;
    undefined field1675_0x697;
    undefined field1676_0x698;
    undefined field1677_0x699;
    undefined field1678_0x69a;
    undefined field1679_0x69b;
    undefined field1680_0x69c;
    undefined field1681_0x69d;
    undefined field1682_0x69e;
    undefined field1683_0x69f;
    undefined field1684_0x6a0;
    undefined field1685_0x6a1;
    undefined field1686_0x6a2;
    undefined field1687_0x6a3;
    undefined field1688_0x6a4;
    undefined field1689_0x6a5;
    undefined field1690_0x6a6;
    undefined field1691_0x6a7;
    undefined field1692_0x6a8;
    undefined field1693_0x6a9;
    undefined field1694_0x6aa;
    undefined field1695_0x6ab;
    undefined field1696_0x6ac;
    undefined field1697_0x6ad;
    undefined field1698_0x6ae;
    undefined field1699_0x6af;
    undefined field1700_0x6b0;
    undefined field1701_0x6b1;
    undefined field1702_0x6b2;
    undefined field1703_0x6b3;
    undefined field1704_0x6b4;
    undefined field1705_0x6b5;
    undefined field1706_0x6b6;
    undefined field1707_0x6b7;
    undefined field1708_0x6b8;
    undefined field1709_0x6b9;
    undefined field1710_0x6ba;
    undefined field1711_0x6bb;
    undefined field1712_0x6bc;
    undefined field1713_0x6bd;
    undefined field1714_0x6be;
    undefined field1715_0x6bf;
    undefined field1716_0x6c0;
    undefined field1717_0x6c1;
    undefined field1718_0x6c2;
    undefined field1719_0x6c3;
    undefined field1720_0x6c4;
    undefined field1721_0x6c5;
    undefined field1722_0x6c6;
    undefined field1723_0x6c7;
    undefined field1724_0x6c8;
    undefined field1725_0x6c9;
    undefined field1726_0x6ca;
    undefined field1727_0x6cb;
    undefined field1728_0x6cc;
    undefined field1729_0x6cd;
    undefined field1730_0x6ce;
    undefined field1731_0x6cf;
    undefined field1732_0x6d0;
    undefined field1733_0x6d1;
    undefined field1734_0x6d2;
    undefined field1735_0x6d3;
    undefined field1736_0x6d4;
    undefined field1737_0x6d5;
    undefined field1738_0x6d6;
    undefined field1739_0x6d7;
    undefined field1740_0x6d8;
    undefined field1741_0x6d9;
    undefined field1742_0x6da;
    undefined field1743_0x6db;
    undefined field1744_0x6dc;
    undefined field1745_0x6dd;
    undefined field1746_0x6de;
    undefined field1747_0x6df;
    undefined field1748_0x6e0;
    undefined field1749_0x6e1;
    undefined field1750_0x6e2;
    undefined field1751_0x6e3;
    undefined field1752_0x6e4;
    undefined field1753_0x6e5;
    undefined field1754_0x6e6;
    undefined field1755_0x6e7;
    undefined field1756_0x6e8;
    undefined field1757_0x6e9;
    undefined field1758_0x6ea;
    undefined field1759_0x6eb;
    undefined field1760_0x6ec;
    undefined field1761_0x6ed;
    undefined field1762_0x6ee;
    undefined field1763_0x6ef;
    undefined field1764_0x6f0;
    undefined field1765_0x6f1;
    undefined field1766_0x6f2;
    undefined field1767_0x6f3;
    undefined field1768_0x6f4;
    undefined field1769_0x6f5;
    undefined field1770_0x6f6;
    undefined field1771_0x6f7;
    undefined field1772_0x6f8;
    undefined field1773_0x6f9;
    undefined field1774_0x6fa;
    undefined field1775_0x6fb;
    undefined field1776_0x6fc;
    undefined field1777_0x6fd;
    undefined field1778_0x6fe;
    undefined field1779_0x6ff;
    undefined field1780_0x700;
    undefined field1781_0x701;
    undefined field1782_0x702;
    undefined field1783_0x703;
    undefined field1784_0x704;
    undefined field1785_0x705;
    undefined field1786_0x706;
    undefined field1787_0x707;
    undefined field1788_0x708;
    undefined field1789_0x709;
    undefined field1790_0x70a;
    undefined field1791_0x70b;
    undefined field1792_0x70c;
    undefined field1793_0x70d;
    undefined field1794_0x70e;
    undefined field1795_0x70f;
    undefined field1796_0x710;
    undefined field1797_0x711;
    undefined field1798_0x712;
    undefined field1799_0x713;
    undefined field1800_0x714;
    undefined field1801_0x715;
    undefined field1802_0x716;
    undefined field1803_0x717;
    undefined field1804_0x718;
    undefined field1805_0x719;
    undefined field1806_0x71a;
    undefined field1807_0x71b;
    undefined field1808_0x71c;
    undefined field1809_0x71d;
    undefined field1810_0x71e;
    undefined field1811_0x71f;
    undefined field1812_0x720;
    undefined field1813_0x721;
    undefined field1814_0x722;
    undefined field1815_0x723;
    undefined field1816_0x724;
    undefined field1817_0x725;
    undefined field1818_0x726;
    undefined field1819_0x727;
    undefined field1820_0x728;
    undefined field1821_0x729;
    undefined field1822_0x72a;
    undefined field1823_0x72b;
    undefined field1824_0x72c;
    undefined field1825_0x72d;
    undefined field1826_0x72e;
    undefined field1827_0x72f;
    undefined field1828_0x730;
    undefined field1829_0x731;
    undefined field1830_0x732;
    undefined field1831_0x733;
    undefined field1832_0x734;
    undefined field1833_0x735;
    undefined field1834_0x736;
    undefined field1835_0x737;
    undefined field1836_0x738;
    undefined field1837_0x739;
    undefined field1838_0x73a;
    undefined field1839_0x73b;
    undefined field1840_0x73c;
    undefined field1841_0x73d;
    undefined field1842_0x73e;
    undefined field1843_0x73f;
    undefined field1844_0x740;
    undefined field1845_0x741;
    undefined field1846_0x742;
    undefined field1847_0x743;
    undefined field1848_0x744;
    undefined field1849_0x745;
    undefined field1850_0x746;
    undefined field1851_0x747;
    undefined field1852_0x748;
    undefined field1853_0x749;
    undefined field1854_0x74a;
    undefined field1855_0x74b;
    undefined field1856_0x74c;
    undefined field1857_0x74d;
    undefined field1858_0x74e;
    undefined field1859_0x74f;
    undefined field1860_0x750;
    undefined field1861_0x751;
    undefined field1862_0x752;
    undefined field1863_0x753;
    undefined field1864_0x754;
    undefined field1865_0x755;
    undefined field1866_0x756;
    undefined field1867_0x757;
    undefined field1868_0x758;
    undefined field1869_0x759;
    undefined field1870_0x75a;
    undefined field1871_0x75b;
    undefined field1872_0x75c;
    undefined field1873_0x75d;
    undefined field1874_0x75e;
    undefined field1875_0x75f;
    undefined field1876_0x760;
    undefined field1877_0x761;
    undefined field1878_0x762;
    undefined field1879_0x763;
    undefined field1880_0x764;
    undefined field1881_0x765;
    undefined field1882_0x766;
    undefined field1883_0x767;
    undefined field1884_0x768;
    undefined field1885_0x769;
    undefined field1886_0x76a;
    undefined field1887_0x76b;
    undefined field1888_0x76c;
    undefined field1889_0x76d;
    undefined field1890_0x76e;
    undefined field1891_0x76f;
    undefined field1892_0x770;
    undefined field1893_0x771;
    undefined field1894_0x772;
    undefined field1895_0x773;
    undefined field1896_0x774;
    undefined field1897_0x775;
    undefined field1898_0x776;
    undefined field1899_0x777;
    undefined field1900_0x778;
    undefined field1901_0x779;
    undefined field1902_0x77a;
    undefined field1903_0x77b;
    undefined field1904_0x77c;
    undefined field1905_0x77d;
    undefined field1906_0x77e;
    undefined field1907_0x77f;
    undefined field1908_0x780;
    undefined field1909_0x781;
    undefined field1910_0x782;
    undefined field1911_0x783;
    undefined field1912_0x784;
    undefined field1913_0x785;
    undefined field1914_0x786;
    undefined field1915_0x787;
    undefined field1916_0x788;
    undefined field1917_0x789;
    undefined field1918_0x78a;
    undefined field1919_0x78b;
    undefined field1920_0x78c;
    undefined field1921_0x78d;
    undefined field1922_0x78e;
    undefined field1923_0x78f;
    undefined field1924_0x790;
    undefined field1925_0x791;
    undefined field1926_0x792;
    undefined field1927_0x793;
    undefined field1928_0x794;
    undefined field1929_0x795;
    undefined field1930_0x796;
    undefined field1931_0x797;
    undefined field1932_0x798;
    undefined field1933_0x799;
    undefined field1934_0x79a;
    undefined field1935_0x79b;
    undefined field1936_0x79c;
    undefined field1937_0x79d;
    undefined field1938_0x79e;
    undefined field1939_0x79f;
    undefined field1940_0x7a0;
    undefined field1941_0x7a1;
    undefined field1942_0x7a2;
    undefined field1943_0x7a3;
    undefined field1944_0x7a4;
    undefined field1945_0x7a5;
    undefined field1946_0x7a6;
    undefined field1947_0x7a7;
    undefined field1948_0x7a8;
    undefined field1949_0x7a9;
    undefined field1950_0x7aa;
    undefined field1951_0x7ab;
    undefined field1952_0x7ac;
    undefined field1953_0x7ad;
    undefined field1954_0x7ae;
    undefined field1955_0x7af;
    undefined field1956_0x7b0;
    undefined field1957_0x7b1;
    undefined field1958_0x7b2;
    undefined field1959_0x7b3;
    undefined field1960_0x7b4;
    undefined field1961_0x7b5;
    undefined field1962_0x7b6;
    undefined field1963_0x7b7;
    undefined field1964_0x7b8;
    undefined field1965_0x7b9;
    undefined field1966_0x7ba;
    undefined field1967_0x7bb;
    undefined field1968_0x7bc;
    undefined field1969_0x7bd;
    undefined field1970_0x7be;
    undefined field1971_0x7bf;
    undefined field1972_0x7c0;
    undefined field1973_0x7c1;
    undefined field1974_0x7c2;
    undefined field1975_0x7c3;
    undefined field1976_0x7c4;
    undefined field1977_0x7c5;
    undefined field1978_0x7c6;
    undefined field1979_0x7c7;
    undefined field1980_0x7c8;
    undefined field1981_0x7c9;
    undefined field1982_0x7ca;
    undefined field1983_0x7cb;
    undefined field1984_0x7cc;
    undefined field1985_0x7cd;
    undefined field1986_0x7ce;
    undefined field1987_0x7cf;
    undefined field1988_0x7d0;
    undefined field1989_0x7d1;
    undefined field1990_0x7d2;
    undefined field1991_0x7d3;
    undefined field1992_0x7d4;
    undefined field1993_0x7d5;
    undefined field1994_0x7d6;
    undefined field1995_0x7d7;
    undefined field1996_0x7d8;
    undefined field1997_0x7d9;
    undefined field1998_0x7da;
    undefined field1999_0x7db;
    undefined field2000_0x7dc;
    undefined field2001_0x7dd;
    undefined field2002_0x7de;
    undefined field2003_0x7df;
    undefined field2004_0x7e0;
    undefined field2005_0x7e1;
    undefined field2006_0x7e2;
    undefined field2007_0x7e3;
    undefined field2008_0x7e4;
    undefined field2009_0x7e5;
    undefined field2010_0x7e6;
    undefined field2011_0x7e7;
    undefined field2012_0x7e8;
    undefined field2013_0x7e9;
    undefined field2014_0x7ea;
    undefined field2015_0x7eb;
    undefined field2016_0x7ec;
    undefined field2017_0x7ed;
    undefined field2018_0x7ee;
    undefined field2019_0x7ef;
    undefined field2020_0x7f0;
    undefined field2021_0x7f1;
    undefined field2022_0x7f2;
    undefined field2023_0x7f3;
    undefined field2024_0x7f4;
    undefined field2025_0x7f5;
    undefined field2026_0x7f6;
    undefined field2027_0x7f7;
    undefined field2028_0x7f8;
    undefined field2029_0x7f9;
    undefined field2030_0x7fa;
    undefined field2031_0x7fb;
    undefined field2032_0x7fc;
    undefined field2033_0x7fd;
    undefined field2034_0x7fe;
    undefined field2035_0x7ff;
    undefined field2036_0x800;
    undefined field2037_0x801;
    undefined field2038_0x802;
    undefined field2039_0x803;
    undefined field2040_0x804;
    undefined field2041_0x805;
    undefined field2042_0x806;
    undefined field2043_0x807;
    undefined field2044_0x808;
    undefined field2045_0x809;
    undefined field2046_0x80a;
    undefined field2047_0x80b;
    undefined field2048_0x80c;
    undefined field2049_0x80d;
    undefined field2050_0x80e;
    undefined field2051_0x80f;
    undefined field2052_0x810;
    undefined field2053_0x811;
    undefined field2054_0x812;
    undefined field2055_0x813;
    undefined field2056_0x814;
    undefined field2057_0x815;
    undefined field2058_0x816;
    undefined field2059_0x817;
    undefined field2060_0x818;
    undefined field2061_0x819;
    undefined field2062_0x81a;
    undefined field2063_0x81b;
    undefined field2064_0x81c;
    undefined field2065_0x81d;
    undefined field2066_0x81e;
    undefined field2067_0x81f;
    undefined field2068_0x820;
    undefined field2069_0x821;
    undefined field2070_0x822;
    undefined field2071_0x823;
    undefined field2072_0x824;
    undefined field2073_0x825;
    undefined field2074_0x826;
    undefined field2075_0x827;
    undefined field2076_0x828;
    undefined field2077_0x829;
    undefined field2078_0x82a;
    undefined field2079_0x82b;
    undefined field2080_0x82c;
    undefined field2081_0x82d;
    undefined field2082_0x82e;
    undefined field2083_0x82f;
    undefined field2084_0x830;
    undefined field2085_0x831;
    undefined field2086_0x832;
    undefined field2087_0x833;
    undefined field2088_0x834;
    undefined field2089_0x835;
    undefined field2090_0x836;
    undefined field2091_0x837;
    undefined field2092_0x838;
    undefined field2093_0x839;
    undefined field2094_0x83a;
    undefined field2095_0x83b;
    undefined field2096_0x83c;
    undefined field2097_0x83d;
    undefined field2098_0x83e;
    undefined field2099_0x83f;
    undefined field2100_0x840;
    undefined field2101_0x841;
    undefined field2102_0x842;
    undefined field2103_0x843;
    undefined field2104_0x844;
    undefined field2105_0x845;
    undefined field2106_0x846;
    undefined field2107_0x847;
    undefined field2108_0x848;
    undefined field2109_0x849;
    undefined field2110_0x84a;
    undefined field2111_0x84b;
    undefined field2112_0x84c;
    undefined field2113_0x84d;
    undefined field2114_0x84e;
    undefined field2115_0x84f;
    undefined field2116_0x850;
    undefined field2117_0x851;
    undefined field2118_0x852;
    undefined field2119_0x853;
    undefined field2120_0x854;
    undefined field2121_0x855;
    undefined field2122_0x856;
    undefined field2123_0x857;
    undefined field2124_0x858;
    undefined field2125_0x859;
    undefined field2126_0x85a;
    undefined field2127_0x85b;
    undefined field2128_0x85c;
    undefined field2129_0x85d;
    undefined field2130_0x85e;
    undefined field2131_0x85f;
    undefined field2132_0x860;
    undefined field2133_0x861;
    undefined field2134_0x862;
    undefined field2135_0x863;
    undefined field2136_0x864;
    undefined field2137_0x865;
    undefined field2138_0x866;
    undefined field2139_0x867;
    undefined field2140_0x868;
    undefined field2141_0x869;
    undefined field2142_0x86a;
    undefined field2143_0x86b;
    undefined field2144_0x86c;
    undefined field2145_0x86d;
    undefined field2146_0x86e;
    undefined field2147_0x86f;
    undefined field2148_0x870;
    undefined field2149_0x871;
    undefined field2150_0x872;
    undefined field2151_0x873;
    undefined field2152_0x874;
    undefined field2153_0x875;
    undefined field2154_0x876;
    undefined field2155_0x877;
    undefined field2156_0x878;
    undefined field2157_0x879;
    undefined field2158_0x87a;
    undefined field2159_0x87b;
    undefined field2160_0x87c;
    undefined field2161_0x87d;
    undefined field2162_0x87e;
    undefined field2163_0x87f;
    undefined field2164_0x880;
    undefined field2165_0x881;
    undefined field2166_0x882;
    undefined field2167_0x883;
    undefined field2168_0x884;
    undefined field2169_0x885;
    undefined field2170_0x886;
    undefined field2171_0x887;
    undefined field2172_0x888;
    undefined field2173_0x889;
    undefined field2174_0x88a;
    undefined field2175_0x88b;
    undefined field2176_0x88c;
    undefined field2177_0x88d;
    undefined field2178_0x88e;
    undefined field2179_0x88f;
    undefined field2180_0x890;
    undefined field2181_0x891;
    undefined field2182_0x892;
    undefined field2183_0x893;
    undefined field2184_0x894;
    undefined field2185_0x895;
    undefined field2186_0x896;
    undefined field2187_0x897;
    undefined field2188_0x898;
    undefined field2189_0x899;
    undefined field2190_0x89a;
    undefined field2191_0x89b;
    undefined field2192_0x89c;
    undefined field2193_0x89d;
    undefined field2194_0x89e;
    undefined field2195_0x89f;
    undefined field2196_0x8a0;
    undefined field2197_0x8a1;
    undefined field2198_0x8a2;
    undefined field2199_0x8a3;
    undefined field2200_0x8a4;
    undefined field2201_0x8a5;
    undefined field2202_0x8a6;
    undefined field2203_0x8a7;
    undefined field2204_0x8a8;
    undefined field2205_0x8a9;
    undefined field2206_0x8aa;
    undefined field2207_0x8ab;
    undefined field2208_0x8ac;
    undefined field2209_0x8ad;
    undefined field2210_0x8ae;
    undefined field2211_0x8af;
    undefined field2212_0x8b0;
    undefined field2213_0x8b1;
    undefined field2214_0x8b2;
    undefined field2215_0x8b3;
    undefined field2216_0x8b4;
    undefined field2217_0x8b5;
    undefined field2218_0x8b6;
    undefined field2219_0x8b7;
    undefined field2220_0x8b8;
    undefined field2221_0x8b9;
    undefined field2222_0x8ba;
    undefined field2223_0x8bb;
    undefined field2224_0x8bc;
    undefined field2225_0x8bd;
    undefined field2226_0x8be;
    undefined field2227_0x8bf;
    undefined field2228_0x8c0;
    undefined field2229_0x8c1;
    undefined field2230_0x8c2;
    undefined field2231_0x8c3;
    undefined field2232_0x8c4;
    undefined field2233_0x8c5;
    undefined field2234_0x8c6;
    undefined field2235_0x8c7;
    undefined field2236_0x8c8;
    undefined field2237_0x8c9;
    undefined field2238_0x8ca;
    undefined field2239_0x8cb;
    undefined field2240_0x8cc;
    undefined field2241_0x8cd;
    undefined field2242_0x8ce;
    undefined field2243_0x8cf;
    undefined field2244_0x8d0;
    undefined field2245_0x8d1;
    undefined field2246_0x8d2;
    undefined field2247_0x8d3;
    undefined field2248_0x8d4;
    undefined field2249_0x8d5;
    undefined field2250_0x8d6;
    undefined field2251_0x8d7;
    undefined field2252_0x8d8;
    undefined field2253_0x8d9;
    undefined field2254_0x8da;
    undefined field2255_0x8db;
    undefined field2256_0x8dc;
    undefined field2257_0x8dd;
    undefined field2258_0x8de;
    undefined field2259_0x8df;
    undefined field2260_0x8e0;
    undefined field2261_0x8e1;
    undefined field2262_0x8e2;
    undefined field2263_0x8e3;
    undefined field2264_0x8e4;
    undefined field2265_0x8e5;
    undefined field2266_0x8e6;
    undefined field2267_0x8e7;
    undefined field2268_0x8e8;
    undefined field2269_0x8e9;
    undefined field2270_0x8ea;
    undefined field2271_0x8eb;
    undefined field2272_0x8ec;
    undefined field2273_0x8ed;
    undefined field2274_0x8ee;
    undefined field2275_0x8ef;
    undefined field2276_0x8f0;
    undefined field2277_0x8f1;
    undefined field2278_0x8f2;
    undefined field2279_0x8f3;
    undefined field2280_0x8f4;
    undefined field2281_0x8f5;
    undefined field2282_0x8f6;
    undefined field2283_0x8f7;
    undefined field2284_0x8f8;
    undefined field2285_0x8f9;
    undefined field2286_0x8fa;
    undefined field2287_0x8fb;
    undefined field2288_0x8fc;
    undefined field2289_0x8fd;
    undefined field2290_0x8fe;
    undefined field2291_0x8ff;
    undefined field2292_0x900;
    undefined field2293_0x901;
    undefined field2294_0x902;
    undefined field2295_0x903;
    undefined field2296_0x904;
    undefined field2297_0x905;
    undefined field2298_0x906;
    undefined field2299_0x907;
    undefined field2300_0x908;
    undefined field2301_0x909;
    undefined field2302_0x90a;
    undefined field2303_0x90b;
    undefined field2304_0x90c;
    undefined field2305_0x90d;
    undefined field2306_0x90e;
    undefined field2307_0x90f;
    undefined field2308_0x910;
    undefined field2309_0x911;
    undefined field2310_0x912;
    undefined field2311_0x913;
    undefined field2312_0x914;
    undefined field2313_0x915;
    undefined field2314_0x916;
    undefined field2315_0x917;
    undefined field2316_0x918;
    undefined field2317_0x919;
    undefined field2318_0x91a;
    undefined field2319_0x91b;
    undefined field2320_0x91c;
    undefined field2321_0x91d;
    undefined field2322_0x91e;
    undefined field2323_0x91f;
    undefined field2324_0x920;
    undefined field2325_0x921;
    undefined field2326_0x922;
    undefined field2327_0x923;
    undefined field2328_0x924;
    undefined field2329_0x925;
    undefined field2330_0x926;
    undefined field2331_0x927;
    undefined field2332_0x928;
    undefined field2333_0x929;
    undefined field2334_0x92a;
    undefined field2335_0x92b;
    undefined field2336_0x92c;
    undefined field2337_0x92d;
    undefined field2338_0x92e;
    undefined field2339_0x92f;
    undefined field2340_0x930;
    undefined field2341_0x931;
    undefined field2342_0x932;
    undefined field2343_0x933;
    undefined field2344_0x934;
    undefined field2345_0x935;
    undefined field2346_0x936;
    undefined field2347_0x937;
    undefined field2348_0x938;
    undefined field2349_0x939;
    undefined field2350_0x93a;
    undefined field2351_0x93b;
    undefined field2352_0x93c;
    undefined field2353_0x93d;
    undefined field2354_0x93e;
    undefined field2355_0x93f;
    undefined field2356_0x940;
    undefined field2357_0x941;
    undefined field2358_0x942;
    undefined field2359_0x943;
    undefined field2360_0x944;
    undefined field2361_0x945;
    undefined field2362_0x946;
    undefined field2363_0x947;
    undefined field2364_0x948;
    undefined field2365_0x949;
    undefined field2366_0x94a;
    undefined field2367_0x94b;
    undefined field2368_0x94c;
    undefined field2369_0x94d;
    undefined field2370_0x94e;
    undefined field2371_0x94f;
    undefined field2372_0x950;
    undefined field2373_0x951;
    undefined field2374_0x952;
    undefined field2375_0x953;
    undefined field2376_0x954;
    undefined field2377_0x955;
    undefined field2378_0x956;
    undefined field2379_0x957;
    undefined field2380_0x958;
    undefined field2381_0x959;
    undefined field2382_0x95a;
    undefined field2383_0x95b;
    undefined field2384_0x95c;
    undefined field2385_0x95d;
    undefined field2386_0x95e;
    undefined field2387_0x95f;
    undefined field2388_0x960;
    undefined field2389_0x961;
    undefined field2390_0x962;
    undefined field2391_0x963;
    undefined field2392_0x964;
    undefined field2393_0x965;
    undefined field2394_0x966;
    undefined field2395_0x967;
    undefined field2396_0x968;
    undefined field2397_0x969;
    undefined field2398_0x96a;
    undefined field2399_0x96b;
    undefined field2400_0x96c;
    undefined field2401_0x96d;
    undefined field2402_0x96e;
    undefined field2403_0x96f;
    undefined field2404_0x970;
    undefined field2405_0x971;
    undefined field2406_0x972;
    undefined field2407_0x973;
    undefined field2408_0x974;
    undefined field2409_0x975;
    undefined field2410_0x976;
    undefined field2411_0x977;
    undefined field2412_0x978;
    undefined field2413_0x979;
    undefined field2414_0x97a;
    undefined field2415_0x97b;
    undefined field2416_0x97c;
    undefined field2417_0x97d;
    undefined field2418_0x97e;
    undefined field2419_0x97f;
    undefined field2420_0x980;
    undefined field2421_0x981;
    undefined field2422_0x982;
    undefined field2423_0x983;
    undefined field2424_0x984;
    undefined field2425_0x985;
    undefined field2426_0x986;
    undefined field2427_0x987;
    undefined field2428_0x988;
    undefined field2429_0x989;
    undefined field2430_0x98a;
    undefined field2431_0x98b;
    undefined field2432_0x98c;
    undefined field2433_0x98d;
    undefined field2434_0x98e;
    undefined field2435_0x98f;
    undefined field2436_0x990;
    undefined field2437_0x991;
    undefined field2438_0x992;
    undefined field2439_0x993;
    undefined field2440_0x994;
    undefined field2441_0x995;
    undefined field2442_0x996;
    undefined field2443_0x997;
    undefined field2444_0x998;
    undefined field2445_0x999;
    undefined field2446_0x99a;
    undefined field2447_0x99b;
    undefined field2448_0x99c;
    undefined field2449_0x99d;
    undefined field2450_0x99e;
    undefined field2451_0x99f;
    undefined field2452_0x9a0;
    undefined field2453_0x9a1;
    undefined field2454_0x9a2;
    undefined field2455_0x9a3;
    undefined field2456_0x9a4;
    undefined field2457_0x9a5;
    undefined field2458_0x9a6;
    undefined field2459_0x9a7;
    undefined field2460_0x9a8;
    undefined field2461_0x9a9;
    undefined field2462_0x9aa;
    undefined field2463_0x9ab;
    undefined field2464_0x9ac;
    undefined field2465_0x9ad;
    undefined field2466_0x9ae;
    undefined field2467_0x9af;
    undefined field2468_0x9b0;
    undefined field2469_0x9b1;
    undefined field2470_0x9b2;
    undefined field2471_0x9b3;
    undefined field2472_0x9b4;
    undefined field2473_0x9b5;
    undefined field2474_0x9b6;
    undefined field2475_0x9b7;
    undefined field2476_0x9b8;
    undefined field2477_0x9b9;
    undefined field2478_0x9ba;
    undefined field2479_0x9bb;
    undefined field2480_0x9bc;
    undefined field2481_0x9bd;
    undefined field2482_0x9be;
    undefined field2483_0x9bf;
    undefined field2484_0x9c0;
    undefined field2485_0x9c1;
    undefined field2486_0x9c2;
    undefined field2487_0x9c3;
    undefined field2488_0x9c4;
    undefined field2489_0x9c5;
    undefined field2490_0x9c6;
    undefined field2491_0x9c7;
    undefined field2492_0x9c8;
    undefined field2493_0x9c9;
    undefined field2494_0x9ca;
    undefined field2495_0x9cb;
    undefined field2496_0x9cc;
    undefined field2497_0x9cd;
    undefined field2498_0x9ce;
    undefined field2499_0x9cf;
    undefined field2500_0x9d0;
    undefined field2501_0x9d1;
    undefined field2502_0x9d2;
    undefined field2503_0x9d3;
    undefined field2504_0x9d4;
    undefined field2505_0x9d5;
    undefined field2506_0x9d6;
    undefined field2507_0x9d7;
    undefined field2508_0x9d8;
    undefined field2509_0x9d9;
    undefined field2510_0x9da;
    undefined field2511_0x9db;
    undefined field2512_0x9dc;
    undefined field2513_0x9dd;
    undefined field2514_0x9de;
    undefined field2515_0x9df;
    undefined field2516_0x9e0;
    undefined field2517_0x9e1;
    undefined field2518_0x9e2;
    undefined field2519_0x9e3;
    undefined field2520_0x9e4;
    undefined field2521_0x9e5;
    undefined field2522_0x9e6;
    undefined field2523_0x9e7;
    undefined field2524_0x9e8;
    undefined field2525_0x9e9;
    undefined field2526_0x9ea;
    undefined field2527_0x9eb;
    undefined field2528_0x9ec;
    undefined field2529_0x9ed;
    undefined field2530_0x9ee;
    undefined field2531_0x9ef;
    undefined field2532_0x9f0;
    undefined field2533_0x9f1;
    undefined field2534_0x9f2;
    undefined field2535_0x9f3;
    undefined field2536_0x9f4;
    undefined field2537_0x9f5;
    undefined field2538_0x9f6;
    undefined field2539_0x9f7;
    undefined field2540_0x9f8;
    undefined field2541_0x9f9;
    undefined field2542_0x9fa;
    undefined field2543_0x9fb;
    undefined field2544_0x9fc;
    undefined field2545_0x9fd;
    undefined field2546_0x9fe;
    undefined field2547_0x9ff;
    undefined field2548_0xa00;
    undefined field2549_0xa01;
    undefined field2550_0xa02;
    undefined field2551_0xa03;
    undefined field2552_0xa04;
    undefined field2553_0xa05;
    undefined field2554_0xa06;
    undefined field2555_0xa07;
    undefined field2556_0xa08;
    undefined field2557_0xa09;
    undefined field2558_0xa0a;
    undefined field2559_0xa0b;
    undefined field2560_0xa0c;
    undefined field2561_0xa0d;
    undefined field2562_0xa0e;
    undefined field2563_0xa0f;
    undefined field2564_0xa10;
    undefined field2565_0xa11;
    undefined field2566_0xa12;
    undefined field2567_0xa13;
    undefined field2568_0xa14;
    undefined field2569_0xa15;
    undefined field2570_0xa16;
    undefined field2571_0xa17;
    undefined field2572_0xa18;
    undefined field2573_0xa19;
    undefined field2574_0xa1a;
    undefined field2575_0xa1b;
    undefined field2576_0xa1c;
    undefined field2577_0xa1d;
    undefined field2578_0xa1e;
    undefined field2579_0xa1f;
    undefined field2580_0xa20;
    undefined field2581_0xa21;
    undefined field2582_0xa22;
    undefined field2583_0xa23;
    undefined field2584_0xa24;
    undefined field2585_0xa25;
    undefined field2586_0xa26;
    undefined field2587_0xa27;
    undefined field2588_0xa28;
    undefined field2589_0xa29;
    undefined field2590_0xa2a;
    undefined field2591_0xa2b;
    undefined field2592_0xa2c;
    undefined field2593_0xa2d;
    undefined field2594_0xa2e;
    undefined field2595_0xa2f;
    undefined field2596_0xa30;
    undefined field2597_0xa31;
    undefined field2598_0xa32;
    undefined field2599_0xa33;
    undefined field2600_0xa34;
    undefined field2601_0xa35;
    undefined field2602_0xa36;
    undefined field2603_0xa37;
    undefined field2604_0xa38;
    undefined field2605_0xa39;
    undefined field2606_0xa3a;
    undefined field2607_0xa3b;
    undefined field2608_0xa3c;
    undefined field2609_0xa3d;
    undefined field2610_0xa3e;
    undefined field2611_0xa3f;
    undefined field2612_0xa40;
    undefined field2613_0xa41;
    undefined field2614_0xa42;
    undefined field2615_0xa43;
    undefined field2616_0xa44;
    undefined field2617_0xa45;
    undefined field2618_0xa46;
    undefined field2619_0xa47;
    undefined field2620_0xa48;
    undefined field2621_0xa49;
    undefined field2622_0xa4a;
    undefined field2623_0xa4b;
    undefined field2624_0xa4c;
    undefined field2625_0xa4d;
    undefined field2626_0xa4e;
    undefined field2627_0xa4f;
    undefined field2628_0xa50;
    undefined field2629_0xa51;
    undefined field2630_0xa52;
    undefined field2631_0xa53;
    undefined field2632_0xa54;
    undefined field2633_0xa55;
    undefined field2634_0xa56;
    undefined field2635_0xa57;
    undefined field2636_0xa58;
    undefined field2637_0xa59;
    undefined field2638_0xa5a;
    undefined field2639_0xa5b;
    undefined field2640_0xa5c;
    undefined field2641_0xa5d;
    undefined field2642_0xa5e;
    undefined field2643_0xa5f;
    undefined field2644_0xa60;
    undefined field2645_0xa61;
    undefined field2646_0xa62;
    undefined field2647_0xa63;
    undefined field2648_0xa64;
    undefined field2649_0xa65;
    undefined field2650_0xa66;
    undefined field2651_0xa67;
    undefined field2652_0xa68;
    undefined field2653_0xa69;
    undefined field2654_0xa6a;
    undefined field2655_0xa6b;
    undefined field2656_0xa6c;
    undefined field2657_0xa6d;
    undefined field2658_0xa6e;
    undefined field2659_0xa6f;
    undefined field2660_0xa70;
    undefined field2661_0xa71;
    undefined field2662_0xa72;
    undefined field2663_0xa73;
    undefined field2664_0xa74;
    undefined field2665_0xa75;
    undefined field2666_0xa76;
    undefined field2667_0xa77;
    undefined field2668_0xa78;
    undefined field2669_0xa79;
    undefined field2670_0xa7a;
    undefined field2671_0xa7b;
    undefined field2672_0xa7c;
    undefined field2673_0xa7d;
    undefined field2674_0xa7e;
    undefined field2675_0xa7f;
    undefined field2676_0xa80;
    undefined field2677_0xa81;
    undefined field2678_0xa82;
    undefined field2679_0xa83;
    undefined field2680_0xa84;
    undefined field2681_0xa85;
    undefined field2682_0xa86;
    undefined field2683_0xa87;
    undefined field2684_0xa88;
    undefined field2685_0xa89;
    undefined field2686_0xa8a;
    undefined field2687_0xa8b;
    undefined field2688_0xa8c;
    undefined field2689_0xa8d;
    undefined field2690_0xa8e;
    undefined field2691_0xa8f;
    undefined field2692_0xa90;
    undefined field2693_0xa91;
    undefined field2694_0xa92;
    undefined field2695_0xa93;
    undefined field2696_0xa94;
    undefined field2697_0xa95;
    undefined field2698_0xa96;
    undefined field2699_0xa97;
    undefined field2700_0xa98;
    undefined field2701_0xa99;
    undefined field2702_0xa9a;
    undefined field2703_0xa9b;
    undefined field2704_0xa9c;
    undefined field2705_0xa9d;
    undefined field2706_0xa9e;
    undefined field2707_0xa9f;
    undefined field2708_0xaa0;
    undefined field2709_0xaa1;
    undefined field2710_0xaa2;
    undefined field2711_0xaa3;
    undefined field2712_0xaa4;
    undefined field2713_0xaa5;
    undefined field2714_0xaa6;
    undefined field2715_0xaa7;
    undefined field2716_0xaa8;
    undefined field2717_0xaa9;
    undefined field2718_0xaaa;
    undefined field2719_0xaab;
    undefined field2720_0xaac;
    undefined field2721_0xaad;
    undefined field2722_0xaae;
    undefined field2723_0xaaf;
    undefined field2724_0xab0;
    undefined field2725_0xab1;
    undefined field2726_0xab2;
    undefined field2727_0xab3;
    undefined field2728_0xab4;
    undefined field2729_0xab5;
    undefined field2730_0xab6;
    undefined field2731_0xab7;
    undefined field2732_0xab8;
    undefined field2733_0xab9;
    undefined field2734_0xaba;
    undefined field2735_0xabb;
    undefined field2736_0xabc;
    undefined field2737_0xabd;
    undefined field2738_0xabe;
    undefined field2739_0xabf;
    undefined field2740_0xac0;
    undefined field2741_0xac1;
    undefined field2742_0xac2;
    undefined field2743_0xac3;
    undefined field2744_0xac4;
    undefined field2745_0xac5;
    undefined field2746_0xac6;
    undefined field2747_0xac7;
    undefined field2748_0xac8;
    undefined field2749_0xac9;
    undefined field2750_0xaca;
    undefined field2751_0xacb;
    undefined field2752_0xacc;
    undefined field2753_0xacd;
    undefined field2754_0xace;
    undefined field2755_0xacf;
    undefined field2756_0xad0;
    undefined field2757_0xad1;
    undefined field2758_0xad2;
    undefined field2759_0xad3;
    undefined field2760_0xad4;
    undefined field2761_0xad5;
    undefined field2762_0xad6;
    undefined field2763_0xad7;
    undefined field2764_0xad8;
    undefined field2765_0xad9;
    undefined field2766_0xada;
    undefined field2767_0xadb;
    undefined field2768_0xadc;
    undefined field2769_0xadd;
    undefined field2770_0xade;
    undefined field2771_0xadf;
    undefined field2772_0xae0;
    undefined field2773_0xae1;
    undefined field2774_0xae2;
    undefined field2775_0xae3;
    undefined field2776_0xae4;
    undefined field2777_0xae5;
    undefined field2778_0xae6;
    undefined field2779_0xae7;
    undefined field2780_0xae8;
    undefined field2781_0xae9;
    undefined field2782_0xaea;
    undefined field2783_0xaeb;
    undefined field2784_0xaec;
    undefined field2785_0xaed;
    undefined field2786_0xaee;
    undefined field2787_0xaef;
    undefined field2788_0xaf0;
    undefined field2789_0xaf1;
    undefined field2790_0xaf2;
    undefined field2791_0xaf3;
    undefined field2792_0xaf4;
    undefined field2793_0xaf5;
    undefined field2794_0xaf6;
    undefined field2795_0xaf7;
    undefined field2796_0xaf8;
    undefined field2797_0xaf9;
    undefined field2798_0xafa;
    undefined field2799_0xafb;
    undefined field2800_0xafc;
    undefined field2801_0xafd;
    undefined field2802_0xafe;
    undefined field2803_0xaff;
    undefined field2804_0xb00;
    undefined field2805_0xb01;
    undefined field2806_0xb02;
    undefined field2807_0xb03;
    undefined field2808_0xb04;
    undefined field2809_0xb05;
    undefined field2810_0xb06;
    undefined field2811_0xb07;
    undefined field2812_0xb08;
    undefined field2813_0xb09;
    undefined field2814_0xb0a;
    undefined field2815_0xb0b;
    undefined field2816_0xb0c;
    undefined field2817_0xb0d;
    undefined field2818_0xb0e;
    undefined field2819_0xb0f;
    undefined field2820_0xb10;
    undefined field2821_0xb11;
    undefined field2822_0xb12;
    undefined field2823_0xb13;
    undefined field2824_0xb14;
    undefined field2825_0xb15;
    undefined field2826_0xb16;
    undefined field2827_0xb17;
    undefined field2828_0xb18;
    undefined field2829_0xb19;
    undefined field2830_0xb1a;
    undefined field2831_0xb1b;
    undefined field2832_0xb1c;
    undefined field2833_0xb1d;
    undefined field2834_0xb1e;
    undefined field2835_0xb1f;
    undefined field2836_0xb20;
    undefined field2837_0xb21;
    undefined field2838_0xb22;
    undefined field2839_0xb23;
    undefined field2840_0xb24;
    undefined field2841_0xb25;
    undefined field2842_0xb26;
    undefined field2843_0xb27;
    undefined field2844_0xb28;
    undefined field2845_0xb29;
    undefined field2846_0xb2a;
    undefined field2847_0xb2b;
    undefined field2848_0xb2c;
    undefined field2849_0xb2d;
    undefined field2850_0xb2e;
    undefined field2851_0xb2f;
    undefined field2852_0xb30;
    undefined field2853_0xb31;
    undefined field2854_0xb32;
    undefined field2855_0xb33;
    undefined field2856_0xb34;
    undefined field2857_0xb35;
    undefined field2858_0xb36;
    undefined field2859_0xb37;
    undefined field2860_0xb38;
    undefined field2861_0xb39;
    undefined field2862_0xb3a;
    undefined field2863_0xb3b;
    undefined field2864_0xb3c;
    undefined field2865_0xb3d;
    undefined field2866_0xb3e;
    undefined field2867_0xb3f;
    undefined field2868_0xb40;
    undefined field2869_0xb41;
    undefined field2870_0xb42;
    undefined field2871_0xb43;
    undefined field2872_0xb44;
    undefined field2873_0xb45;
    undefined field2874_0xb46;
    undefined field2875_0xb47;
    undefined field2876_0xb48;
    undefined field2877_0xb49;
    undefined field2878_0xb4a;
    undefined field2879_0xb4b;
    undefined field2880_0xb4c;
    undefined field2881_0xb4d;
    undefined field2882_0xb4e;
    undefined field2883_0xb4f;
    undefined field2884_0xb50;
    undefined field2885_0xb51;
    undefined field2886_0xb52;
    undefined field2887_0xb53;
    undefined field2888_0xb54;
    undefined field2889_0xb55;
    undefined field2890_0xb56;
    undefined field2891_0xb57;
    undefined field2892_0xb58;
    undefined field2893_0xb59;
    undefined field2894_0xb5a;
    undefined field2895_0xb5b;
    undefined field2896_0xb5c;
    undefined field2897_0xb5d;
    undefined field2898_0xb5e;
    undefined field2899_0xb5f;
    undefined field2900_0xb60;
    undefined field2901_0xb61;
    undefined field2902_0xb62;
    undefined field2903_0xb63;
    undefined field2904_0xb64;
    undefined field2905_0xb65;
    undefined field2906_0xb66;
    undefined field2907_0xb67;
    undefined field2908_0xb68;
    undefined field2909_0xb69;
    undefined field2910_0xb6a;
    undefined field2911_0xb6b;
    undefined field2912_0xb6c;
    undefined field2913_0xb6d;
    undefined field2914_0xb6e;
    undefined field2915_0xb6f;
    undefined field2916_0xb70;
    undefined field2917_0xb71;
    undefined field2918_0xb72;
    undefined field2919_0xb73;
    undefined field2920_0xb74;
    undefined field2921_0xb75;
    undefined field2922_0xb76;
    undefined field2923_0xb77;
    undefined field2924_0xb78;
    undefined field2925_0xb79;
    undefined field2926_0xb7a;
    undefined field2927_0xb7b;
    undefined field2928_0xb7c;
    undefined field2929_0xb7d;
    undefined field2930_0xb7e;
    undefined field2931_0xb7f;
    undefined field2932_0xb80;
    undefined field2933_0xb81;
    undefined field2934_0xb82;
    undefined field2935_0xb83;
    undefined field2936_0xb84;
    undefined field2937_0xb85;
    undefined field2938_0xb86;
    undefined field2939_0xb87;
    undefined field2940_0xb88;
    undefined field2941_0xb89;
    undefined field2942_0xb8a;
    undefined field2943_0xb8b;
    undefined field2944_0xb8c;
    undefined field2945_0xb8d;
    undefined field2946_0xb8e;
    undefined field2947_0xb8f;
    undefined field2948_0xb90;
    undefined field2949_0xb91;
    undefined field2950_0xb92;
    undefined field2951_0xb93;
    undefined field2952_0xb94;
    undefined field2953_0xb95;
    undefined field2954_0xb96;
    undefined field2955_0xb97;
    undefined field2956_0xb98;
    undefined field2957_0xb99;
    undefined field2958_0xb9a;
    undefined field2959_0xb9b;
    undefined field2960_0xb9c;
    undefined field2961_0xb9d;
    undefined field2962_0xb9e;
    undefined field2963_0xb9f;
    undefined field2964_0xba0;
    undefined field2965_0xba1;
    undefined field2966_0xba2;
    undefined field2967_0xba3;
    undefined field2968_0xba4;
    undefined field2969_0xba5;
    undefined field2970_0xba6;
    undefined field2971_0xba7;
    undefined field2972_0xba8;
    undefined field2973_0xba9;
    undefined field2974_0xbaa;
    undefined field2975_0xbab;
    undefined field2976_0xbac;
    undefined field2977_0xbad;
    undefined field2978_0xbae;
    undefined field2979_0xbaf;
    undefined field2980_0xbb0;
    undefined field2981_0xbb1;
    undefined field2982_0xbb2;
    undefined field2983_0xbb3;
    undefined field2984_0xbb4;
    undefined field2985_0xbb5;
    undefined field2986_0xbb6;
    undefined field2987_0xbb7;
    undefined field2988_0xbb8;
    undefined field2989_0xbb9;
    undefined field2990_0xbba;
    undefined field2991_0xbbb;
    undefined field2992_0xbbc;
    undefined field2993_0xbbd;
    undefined field2994_0xbbe;
    undefined field2995_0xbbf;
    undefined field2996_0xbc0;
    undefined field2997_0xbc1;
    undefined field2998_0xbc2;
    undefined field2999_0xbc3;
    undefined field3000_0xbc4;
    undefined field3001_0xbc5;
    undefined field3002_0xbc6;
    undefined field3003_0xbc7;
    undefined field3004_0xbc8;
    undefined field3005_0xbc9;
    undefined field3006_0xbca;
    undefined field3007_0xbcb;
    undefined field3008_0xbcc;
    undefined field3009_0xbcd;
    undefined field3010_0xbce;
    undefined field3011_0xbcf;
    undefined field3012_0xbd0;
    undefined field3013_0xbd1;
    undefined field3014_0xbd2;
    undefined field3015_0xbd3;
    undefined field3016_0xbd4;
    undefined field3017_0xbd5;
    undefined field3018_0xbd6;
    undefined field3019_0xbd7;
    undefined field3020_0xbd8;
    undefined field3021_0xbd9;
    undefined field3022_0xbda;
    undefined field3023_0xbdb;
    undefined field3024_0xbdc;
    undefined field3025_0xbdd;
    undefined field3026_0xbde;
    undefined field3027_0xbdf;
    undefined field3028_0xbe0;
    undefined field3029_0xbe1;
    undefined field3030_0xbe2;
    undefined field3031_0xbe3;
    undefined field3032_0xbe4;
    undefined field3033_0xbe5;
    undefined field3034_0xbe6;
    undefined field3035_0xbe7;
    undefined field3036_0xbe8;
    undefined field3037_0xbe9;
    undefined field3038_0xbea;
    undefined field3039_0xbeb;
    undefined field3040_0xbec;
    undefined field3041_0xbed;
    undefined field3042_0xbee;
    undefined field3043_0xbef;
    undefined field3044_0xbf0;
    undefined field3045_0xbf1;
    undefined field3046_0xbf2;
    undefined field3047_0xbf3;
    undefined field3048_0xbf4;
    undefined field3049_0xbf5;
    undefined field3050_0xbf6;
    undefined field3051_0xbf7;
    undefined field3052_0xbf8;
    undefined field3053_0xbf9;
    undefined field3054_0xbfa;
    undefined field3055_0xbfb;
    undefined field3056_0xbfc;
    undefined field3057_0xbfd;
    undefined field3058_0xbfe;
    undefined field3059_0xbff;
    undefined field3060_0xc00;
    undefined field3061_0xc01;
    undefined field3062_0xc02;
    undefined field3063_0xc03;
    undefined field3064_0xc04;
    undefined field3065_0xc05;
    undefined field3066_0xc06;
    undefined field3067_0xc07;
    undefined field3068_0xc08;
    undefined field3069_0xc09;
    undefined field3070_0xc0a;
    undefined field3071_0xc0b;
    undefined field3072_0xc0c;
    undefined field3073_0xc0d;
    undefined field3074_0xc0e;
    undefined field3075_0xc0f;
    undefined field3076_0xc10;
    undefined field3077_0xc11;
    undefined field3078_0xc12;
    undefined field3079_0xc13;
    undefined field3080_0xc14;
    undefined field3081_0xc15;
    undefined field3082_0xc16;
    undefined field3083_0xc17;
    undefined field3084_0xc18;
    undefined field3085_0xc19;
    undefined field3086_0xc1a;
    undefined field3087_0xc1b;
    undefined field3088_0xc1c;
    undefined field3089_0xc1d;
    undefined field3090_0xc1e;
    undefined field3091_0xc1f;
    undefined field3092_0xc20;
    undefined field3093_0xc21;
    undefined field3094_0xc22;
    undefined field3095_0xc23;
    undefined field3096_0xc24;
    undefined field3097_0xc25;
    undefined field3098_0xc26;
    undefined field3099_0xc27;
    undefined field3100_0xc28;
    undefined field3101_0xc29;
    undefined field3102_0xc2a;
    undefined field3103_0xc2b;
    int debug_info_count;
    int * debug_info; /* Created by retype action */
    undefined * stack_1; /* 1024 bytes */
    undefined * stack_2; /* 1024 bytes */
    undefined field3108_0xc3c;
    undefined field3109_0xc3d;
    undefined field3110_0xc3e;
    undefined field3111_0xc3f;
    undefined field3112_0xc40;
    undefined field3113_0xc41;
    undefined field3114_0xc42;
    undefined field3115_0xc43;
    undefined field3116_0xc44;
    undefined field3117_0xc45;
    undefined field3118_0xc46;
    undefined field3119_0xc47;
    undefined field3120_0xc48;
    undefined field3121_0xc49;
    undefined field3122_0xc4a;
    undefined field3123_0xc4b;
    undefined field3124_0xc4c;
    undefined field3125_0xc4d;
    undefined field3126_0xc4e;
    undefined field3127_0xc4f;
    undefined field3128_0xc50;
    undefined field3129_0xc51;
    undefined field3130_0xc52;
    undefined field3131_0xc53;
    undefined field3132_0xc54;
    undefined field3133_0xc55;
    undefined field3134_0xc56;
    undefined field3135_0xc57;
    undefined field3136_0xc58;
    undefined field3137_0xc59;
    undefined field3138_0xc5a;
    undefined field3139_0xc5b;
    undefined field3140_0xc5c;
    undefined field3141_0xc5d;
    undefined field3142_0xc5e;
    undefined field3143_0xc5f;
    undefined * callback; /* Created by retype action */
    undefined field3145_0xc64;
    undefined field3146_0xc65;
    undefined field3147_0xc66;
    undefined field3148_0xc67;
    undefined field3149_0xc68;
    undefined field3150_0xc69;
    undefined field3151_0xc6a;
    undefined field3152_0xc6b;
    undefined field3153_0xc6c;
    undefined field3154_0xc6d;
    undefined field3155_0xc6e;
    undefined field3156_0xc6f;
    undefined field3157_0xc70;
    undefined field3158_0xc71;
    undefined field3159_0xc72;
    undefined field3160_0xc73;
    undefined field3161_0xc74;
    undefined field3162_0xc75;
    undefined field3163_0xc76;
    undefined field3164_0xc77;
    undefined field3165_0xc78;
    undefined field3166_0xc79;
    undefined field3167_0xc7a;
    undefined field3168_0xc7b;
    undefined field3169_0xc7c;
    undefined field3170_0xc7d;
    undefined field3171_0xc7e;
    undefined field3172_0xc7f;
    undefined field3173_0xc80;
    undefined field3174_0xc81;
    undefined field3175_0xc82;
    undefined field3176_0xc83;
    undefined field3177_0xc84;
    undefined field3178_0xc85;
    undefined field3179_0xc86;
    undefined field3180_0xc87;
    undefined field3181_0xc88;
    undefined field3182_0xc89;
    undefined field3183_0xc8a;
    undefined field3184_0xc8b;
    undefined field3185_0xc8c;
    undefined field3186_0xc8d;
    undefined field3187_0xc8e;
    undefined field3188_0xc8f;
    undefined field3189_0xc90;
    undefined field3190_0xc91;
    undefined field3191_0xc92;
    undefined field3192_0xc93;
    undefined field3193_0xc94;
    undefined field3194_0xc95;
    undefined field3195_0xc96;
    undefined field3196_0xc97;
};

typedef struct StructWithFile_100 StructWithFile_100, *PStructWithFile_100;

struct StructWithFile_100 {
    void * some_ptr;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    undefined field21_0x18;
    undefined field22_0x19;
    undefined field23_0x1a;
    undefined field24_0x1b;
    undefined field25_0x1c;
    undefined field26_0x1d;
    undefined field27_0x1e;
    undefined field28_0x1f;
    undefined field29_0x20;
    undefined field30_0x21;
    undefined field31_0x22;
    undefined field32_0x23;
    undefined field33_0x24;
    undefined field34_0x25;
    undefined field35_0x26;
    undefined field36_0x27;
    undefined field37_0x28;
    undefined field38_0x29;
    undefined field39_0x2a;
    undefined field40_0x2b;
    undefined field41_0x2c;
    undefined field42_0x2d;
    undefined field43_0x2e;
    undefined field44_0x2f;
    undefined field45_0x30;
    undefined field46_0x31;
    undefined field47_0x32;
    undefined field48_0x33;
    undefined field49_0x34;
    undefined field50_0x35;
    undefined field51_0x36;
    undefined field52_0x37;
    undefined field53_0x38;
    undefined field54_0x39;
    undefined field55_0x3a;
    undefined field56_0x3b;
    undefined field57_0x3c;
    undefined field58_0x3d;
    undefined field59_0x3e;
    undefined field60_0x3f;
    FILE * file_ptr;
    void * field62_0x44;
    undefined field63_0x48;
    undefined field64_0x49;
    undefined field65_0x4a;
    undefined field66_0x4b;
    undefined field67_0x4c;
    undefined field68_0x4d;
    undefined field69_0x4e;
    undefined field70_0x4f;
    undefined field71_0x50;
    undefined field72_0x51;
    undefined field73_0x52;
    undefined field74_0x53;
    undefined field75_0x54;
    undefined field76_0x55;
    undefined field77_0x56;
    undefined field78_0x57;
    undefined field79_0x58;
    undefined field80_0x59;
    undefined field81_0x5a;
    undefined field82_0x5b;
    undefined field83_0x5c;
    undefined field84_0x5d;
    undefined field85_0x5e;
    undefined field86_0x5f;
    undefined field87_0x60;
    undefined field88_0x61;
    undefined field89_0x62;
    undefined field90_0x63;
};

typedef struct Thingy_148 Thingy_148, *PThingy_148;

struct Thingy_148 {
    byte index_or_id;
    char name[32];
    undefined field2_0x21;
    undefined field3_0x22;
    undefined field4_0x23;
    undefined field5_0x24;
    undefined field6_0x25;
    undefined field7_0x26;
    undefined field8_0x27;
    undefined field9_0x28;
    undefined field10_0x29;
    undefined field11_0x2a;
    undefined field12_0x2b;
    undefined * func;
    undefined field14_0x30;
    undefined field15_0x31;
    undefined field16_0x32;
    undefined field17_0x33;
    undefined field18_0x34;
    undefined field19_0x35;
    undefined field20_0x36;
    undefined field21_0x37;
    undefined field22_0x38;
    undefined field23_0x39;
    undefined field24_0x3a;
    undefined field25_0x3b;
    undefined field26_0x3c;
    undefined field27_0x3d;
    undefined field28_0x3e;
    undefined field29_0x3f;
    undefined field30_0x40;
    undefined field31_0x41;
    undefined field32_0x42;
    undefined field33_0x43;
    undefined field34_0x44;
    undefined field35_0x45;
    undefined field36_0x46;
    undefined field37_0x47;
    undefined field38_0x48;
    undefined field39_0x49;
    undefined field40_0x4a;
    undefined field41_0x4b;
    undefined field42_0x4c;
    undefined field43_0x4d;
    undefined field44_0x4e;
    undefined field45_0x4f;
    undefined field46_0x50;
    undefined field47_0x51;
    undefined field48_0x52;
    undefined field49_0x53;
    undefined field50_0x54;
    undefined field51_0x55;
    undefined field52_0x56;
    undefined field53_0x57;
    undefined field54_0x58;
    undefined field55_0x59;
    undefined field56_0x5a;
    undefined field57_0x5b;
    undefined field58_0x5c;
    undefined field59_0x5d;
    undefined field60_0x5e;
    undefined field61_0x5f;
    undefined field62_0x60;
    undefined field63_0x61;
    undefined field64_0x62;
    undefined field65_0x63;
    undefined field66_0x64;
    undefined field67_0x65;
    undefined field68_0x66;
    undefined field69_0x67;
    undefined field70_0x68;
    undefined field71_0x69;
    undefined field72_0x6a;
    undefined field73_0x6b;
    undefined field74_0x6c;
    undefined field75_0x6d;
    undefined field76_0x6e;
    undefined field77_0x6f;
    undefined field78_0x70;
    undefined field79_0x71;
    undefined field80_0x72;
    undefined field81_0x73;
    undefined field82_0x74;
    undefined field83_0x75;
    undefined field84_0x76;
    undefined field85_0x77;
    undefined field86_0x78;
    undefined field87_0x79;
    undefined field88_0x7a;
    undefined field89_0x7b;
    undefined field90_0x7c;
    undefined field91_0x7d;
    undefined field92_0x7e;
    undefined field93_0x7f;
    undefined field94_0x80;
    undefined field95_0x81;
    undefined field96_0x82;
    undefined field97_0x83;
    undefined field98_0x84;
    undefined field99_0x85;
    undefined field100_0x86;
    undefined field101_0x87;
    undefined field102_0x88;
    undefined field103_0x89;
    undefined field104_0x8a;
    undefined field105_0x8b;
    undefined field106_0x8c;
    undefined field107_0x8d;
    undefined field108_0x8e;
    undefined field109_0x8f;
    undefined field110_0x90;
    undefined field111_0x91;
    undefined field112_0x92;
    undefined field113_0x93;
};

typedef struct UnknownStruct_860 UnknownStruct_860, *PUnknownStruct_860;

struct UnknownStruct_860 { /* There are 16 of them starting at 0x9b0e20 */
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined field140_0x8c;
    undefined field141_0x8d;
    undefined field142_0x8e;
    undefined field143_0x8f;
    undefined field144_0x90;
    undefined field145_0x91;
    undefined field146_0x92;
    undefined field147_0x93;
    undefined field148_0x94;
    undefined field149_0x95;
    undefined field150_0x96;
    undefined field151_0x97;
    undefined field152_0x98;
    undefined field153_0x99;
    undefined field154_0x9a;
    undefined field155_0x9b;
    undefined field156_0x9c;
    undefined field157_0x9d;
    undefined field158_0x9e;
    undefined field159_0x9f;
    undefined field160_0xa0;
    undefined field161_0xa1;
    undefined field162_0xa2;
    undefined field163_0xa3;
    undefined field164_0xa4;
    undefined field165_0xa5;
    undefined field166_0xa6;
    undefined field167_0xa7;
    undefined field168_0xa8;
    undefined field169_0xa9;
    undefined field170_0xaa;
    undefined field171_0xab;
    undefined field172_0xac;
    undefined field173_0xad;
    undefined field174_0xae;
    undefined field175_0xaf;
    undefined field176_0xb0;
    undefined field177_0xb1;
    undefined field178_0xb2;
    undefined field179_0xb3;
    undefined field180_0xb4;
    undefined field181_0xb5;
    undefined field182_0xb6;
    undefined field183_0xb7;
    undefined field184_0xb8;
    undefined field185_0xb9;
    undefined field186_0xba;
    undefined field187_0xbb;
    undefined field188_0xbc;
    undefined field189_0xbd;
    undefined field190_0xbe;
    undefined field191_0xbf;
    undefined field192_0xc0;
    undefined field193_0xc1;
    undefined field194_0xc2;
    undefined field195_0xc3;
    undefined field196_0xc4;
    undefined field197_0xc5;
    undefined field198_0xc6;
    undefined field199_0xc7;
    undefined field200_0xc8;
    undefined field201_0xc9;
    undefined field202_0xca;
    undefined field203_0xcb;
    undefined field204_0xcc;
    undefined field205_0xcd;
    undefined field206_0xce;
    undefined field207_0xcf;
    undefined field208_0xd0;
    undefined field209_0xd1;
    undefined field210_0xd2;
    undefined field211_0xd3;
    undefined field212_0xd4;
    undefined field213_0xd5;
    undefined field214_0xd6;
    undefined field215_0xd7;
    undefined field216_0xd8;
    undefined field217_0xd9;
    undefined field218_0xda;
    undefined field219_0xdb;
    undefined field220_0xdc;
    undefined field221_0xdd;
    undefined field222_0xde;
    undefined field223_0xdf;
    undefined field224_0xe0;
    undefined field225_0xe1;
    undefined field226_0xe2;
    undefined field227_0xe3;
    undefined field228_0xe4;
    undefined field229_0xe5;
    undefined field230_0xe6;
    undefined field231_0xe7;
    undefined field232_0xe8;
    undefined field233_0xe9;
    undefined field234_0xea;
    undefined field235_0xeb;
    undefined field236_0xec;
    undefined field237_0xed;
    undefined field238_0xee;
    undefined field239_0xef;
    undefined field240_0xf0;
    undefined field241_0xf1;
    undefined field242_0xf2;
    undefined field243_0xf3;
    undefined field244_0xf4;
    undefined field245_0xf5;
    undefined field246_0xf6;
    undefined field247_0xf7;
    undefined field248_0xf8;
    undefined field249_0xf9;
    undefined field250_0xfa;
    undefined field251_0xfb;
    undefined field252_0xfc;
    undefined field253_0xfd;
    undefined field254_0xfe;
    undefined field255_0xff;
    undefined field256_0x100;
    undefined field257_0x101;
    undefined field258_0x102;
    undefined field259_0x103;
    undefined field260_0x104;
    undefined field261_0x105;
    undefined field262_0x106;
    undefined field263_0x107;
    undefined field264_0x108;
    undefined field265_0x109;
    undefined field266_0x10a;
    undefined field267_0x10b;
    undefined field268_0x10c;
    undefined field269_0x10d;
    undefined field270_0x10e;
    undefined field271_0x10f;
    undefined field272_0x110;
    undefined field273_0x111;
    undefined field274_0x112;
    undefined field275_0x113;
    undefined field276_0x114;
    undefined field277_0x115;
    undefined field278_0x116;
    undefined field279_0x117;
    undefined field280_0x118;
    undefined field281_0x119;
    undefined field282_0x11a;
    undefined field283_0x11b;
    undefined field284_0x11c;
    undefined field285_0x11d;
    undefined field286_0x11e;
    undefined field287_0x11f;
    undefined field288_0x120;
    undefined field289_0x121;
    undefined field290_0x122;
    undefined field291_0x123;
    undefined field292_0x124;
    undefined field293_0x125;
    undefined field294_0x126;
    undefined field295_0x127;
    undefined field296_0x128;
    undefined field297_0x129;
    undefined field298_0x12a;
    undefined field299_0x12b;
    undefined field300_0x12c;
    undefined field301_0x12d;
    undefined field302_0x12e;
    undefined field303_0x12f;
    undefined field304_0x130;
    undefined field305_0x131;
    undefined field306_0x132;
    undefined field307_0x133;
    undefined field308_0x134;
    undefined field309_0x135;
    undefined field310_0x136;
    undefined field311_0x137;
    undefined field312_0x138;
    undefined field313_0x139;
    undefined field314_0x13a;
    undefined field315_0x13b;
    undefined field316_0x13c;
    undefined field317_0x13d;
    undefined field318_0x13e;
    undefined field319_0x13f;
    undefined field320_0x140;
    undefined field321_0x141;
    undefined field322_0x142;
    undefined field323_0x143;
    undefined field324_0x144;
    undefined field325_0x145;
    undefined field326_0x146;
    undefined field327_0x147;
    undefined field328_0x148;
    undefined field329_0x149;
    undefined field330_0x14a;
    undefined field331_0x14b;
    undefined field332_0x14c;
    undefined field333_0x14d;
    undefined field334_0x14e;
    undefined field335_0x14f;
    undefined field336_0x150;
    undefined field337_0x151;
    undefined field338_0x152;
    undefined field339_0x153;
    undefined field340_0x154;
    undefined field341_0x155;
    undefined field342_0x156;
    undefined field343_0x157;
    undefined field344_0x158;
    undefined field345_0x159;
    undefined field346_0x15a;
    undefined field347_0x15b;
    undefined field348_0x15c;
    undefined field349_0x15d;
    undefined field350_0x15e;
    undefined field351_0x15f;
    undefined field352_0x160;
    undefined field353_0x161;
    undefined field354_0x162;
    undefined field355_0x163;
    undefined field356_0x164;
    undefined field357_0x165;
    undefined field358_0x166;
    undefined field359_0x167;
    undefined field360_0x168;
    undefined field361_0x169;
    undefined field362_0x16a;
    undefined field363_0x16b;
    undefined field364_0x16c;
    undefined field365_0x16d;
    undefined field366_0x16e;
    undefined field367_0x16f;
    undefined field368_0x170;
    undefined field369_0x171;
    undefined field370_0x172;
    undefined field371_0x173;
    undefined field372_0x174;
    undefined field373_0x175;
    undefined field374_0x176;
    undefined field375_0x177;
    undefined field376_0x178;
    undefined field377_0x179;
    undefined field378_0x17a;
    undefined field379_0x17b;
    undefined field380_0x17c;
    undefined field381_0x17d;
    undefined field382_0x17e;
    undefined field383_0x17f;
    undefined field384_0x180;
    undefined field385_0x181;
    undefined field386_0x182;
    undefined field387_0x183;
    undefined field388_0x184;
    undefined field389_0x185;
    undefined field390_0x186;
    undefined field391_0x187;
    undefined field392_0x188;
    undefined field393_0x189;
    undefined field394_0x18a;
    undefined field395_0x18b;
    undefined field396_0x18c;
    undefined field397_0x18d;
    undefined field398_0x18e;
    undefined field399_0x18f;
    undefined field400_0x190;
    undefined field401_0x191;
    undefined field402_0x192;
    undefined field403_0x193;
    undefined field404_0x194;
    undefined field405_0x195;
    undefined field406_0x196;
    undefined field407_0x197;
    undefined field408_0x198;
    undefined field409_0x199;
    undefined field410_0x19a;
    undefined field411_0x19b;
    undefined field412_0x19c;
    undefined field413_0x19d;
    undefined field414_0x19e;
    undefined field415_0x19f;
    undefined field416_0x1a0;
    undefined field417_0x1a1;
    undefined field418_0x1a2;
    undefined field419_0x1a3;
    undefined field420_0x1a4;
    undefined field421_0x1a5;
    undefined field422_0x1a6;
    undefined field423_0x1a7;
    undefined field424_0x1a8;
    undefined field425_0x1a9;
    undefined field426_0x1aa;
    undefined field427_0x1ab;
    undefined field428_0x1ac;
    undefined field429_0x1ad;
    undefined field430_0x1ae;
    undefined field431_0x1af;
    undefined field432_0x1b0;
    undefined field433_0x1b1;
    undefined field434_0x1b2;
    undefined field435_0x1b3;
    undefined field436_0x1b4;
    undefined field437_0x1b5;
    undefined field438_0x1b6;
    undefined field439_0x1b7;
    undefined field440_0x1b8;
    undefined field441_0x1b9;
    undefined field442_0x1ba;
    undefined field443_0x1bb;
    undefined field444_0x1bc;
    undefined field445_0x1bd;
    undefined field446_0x1be;
    undefined field447_0x1bf;
    undefined field448_0x1c0;
    undefined field449_0x1c1;
    undefined field450_0x1c2;
    undefined field451_0x1c3;
    undefined field452_0x1c4;
    undefined field453_0x1c5;
    undefined field454_0x1c6;
    undefined field455_0x1c7;
    undefined field456_0x1c8;
    undefined field457_0x1c9;
    undefined field458_0x1ca;
    undefined field459_0x1cb;
    undefined field460_0x1cc;
    undefined field461_0x1cd;
    undefined field462_0x1ce;
    undefined field463_0x1cf;
    undefined field464_0x1d0;
    undefined field465_0x1d1;
    undefined field466_0x1d2;
    undefined field467_0x1d3;
    undefined field468_0x1d4;
    undefined field469_0x1d5;
    undefined field470_0x1d6;
    undefined field471_0x1d7;
    undefined field472_0x1d8;
    undefined field473_0x1d9;
    undefined field474_0x1da;
    undefined field475_0x1db;
    undefined field476_0x1dc;
    undefined field477_0x1dd;
    undefined field478_0x1de;
    undefined field479_0x1df;
    undefined field480_0x1e0;
    undefined field481_0x1e1;
    undefined field482_0x1e2;
    undefined field483_0x1e3;
    undefined field484_0x1e4;
    undefined field485_0x1e5;
    undefined field486_0x1e6;
    undefined field487_0x1e7;
    undefined field488_0x1e8;
    undefined field489_0x1e9;
    undefined field490_0x1ea;
    undefined field491_0x1eb;
    undefined field492_0x1ec;
    undefined field493_0x1ed;
    undefined field494_0x1ee;
    undefined field495_0x1ef;
    undefined field496_0x1f0;
    undefined field497_0x1f1;
    undefined field498_0x1f2;
    undefined field499_0x1f3;
    undefined field500_0x1f4;
    undefined field501_0x1f5;
    undefined field502_0x1f6;
    undefined field503_0x1f7;
    undefined field504_0x1f8;
    undefined field505_0x1f9;
    undefined field506_0x1fa;
    undefined field507_0x1fb;
    undefined field508_0x1fc;
    undefined field509_0x1fd;
    undefined field510_0x1fe;
    undefined field511_0x1ff;
    undefined field512_0x200;
    undefined field513_0x201;
    undefined field514_0x202;
    undefined field515_0x203;
    undefined field516_0x204;
    undefined field517_0x205;
    undefined field518_0x206;
    undefined field519_0x207;
    undefined field520_0x208;
    undefined field521_0x209;
    undefined field522_0x20a;
    undefined field523_0x20b;
    undefined field524_0x20c;
    undefined field525_0x20d;
    undefined field526_0x20e;
    undefined field527_0x20f;
    undefined field528_0x210;
    undefined field529_0x211;
    undefined field530_0x212;
    undefined field531_0x213;
    undefined field532_0x214;
    undefined field533_0x215;
    undefined field534_0x216;
    undefined field535_0x217;
    undefined field536_0x218;
    undefined field537_0x219;
    undefined field538_0x21a;
    undefined field539_0x21b;
    undefined field540_0x21c;
    undefined field541_0x21d;
    undefined field542_0x21e;
    undefined field543_0x21f;
    undefined field544_0x220;
    undefined field545_0x221;
    undefined field546_0x222;
    undefined field547_0x223;
    undefined field548_0x224;
    undefined field549_0x225;
    undefined field550_0x226;
    undefined field551_0x227;
    undefined field552_0x228;
    undefined field553_0x229;
    undefined field554_0x22a;
    undefined field555_0x22b;
    undefined field556_0x22c;
    undefined field557_0x22d;
    undefined field558_0x22e;
    undefined field559_0x22f;
    undefined field560_0x230;
    undefined field561_0x231;
    undefined field562_0x232;
    undefined field563_0x233;
    undefined field564_0x234;
    undefined field565_0x235;
    undefined field566_0x236;
    undefined field567_0x237;
    undefined field568_0x238;
    undefined field569_0x239;
    undefined field570_0x23a;
    undefined field571_0x23b;
    undefined field572_0x23c;
    undefined field573_0x23d;
    undefined field574_0x23e;
    undefined field575_0x23f;
    undefined field576_0x240;
    undefined field577_0x241;
    undefined field578_0x242;
    undefined field579_0x243;
    undefined field580_0x244;
    undefined field581_0x245;
    undefined field582_0x246;
    undefined field583_0x247;
    undefined field584_0x248;
    undefined field585_0x249;
    undefined field586_0x24a;
    undefined field587_0x24b;
    undefined field588_0x24c;
    undefined field589_0x24d;
    undefined field590_0x24e;
    undefined field591_0x24f;
    undefined field592_0x250;
    undefined field593_0x251;
    undefined field594_0x252;
    undefined field595_0x253;
    undefined field596_0x254;
    undefined field597_0x255;
    undefined field598_0x256;
    undefined field599_0x257;
    undefined field600_0x258;
    undefined field601_0x259;
    undefined field602_0x25a;
    undefined field603_0x25b;
    undefined field604_0x25c;
    undefined field605_0x25d;
    undefined field606_0x25e;
    undefined field607_0x25f;
    undefined field608_0x260;
    undefined field609_0x261;
    undefined field610_0x262;
    undefined field611_0x263;
    undefined field612_0x264;
    undefined field613_0x265;
    undefined field614_0x266;
    undefined field615_0x267;
    undefined field616_0x268;
    undefined field617_0x269;
    undefined field618_0x26a;
    undefined field619_0x26b;
    undefined field620_0x26c;
    undefined field621_0x26d;
    undefined field622_0x26e;
    undefined field623_0x26f;
    undefined field624_0x270;
    undefined field625_0x271;
    undefined field626_0x272;
    undefined field627_0x273;
    undefined field628_0x274;
    undefined field629_0x275;
    undefined field630_0x276;
    undefined field631_0x277;
    undefined field632_0x278;
    undefined field633_0x279;
    undefined field634_0x27a;
    undefined field635_0x27b;
    undefined field636_0x27c;
    undefined field637_0x27d;
    undefined field638_0x27e;
    undefined field639_0x27f;
    undefined field640_0x280;
    undefined field641_0x281;
    undefined field642_0x282;
    undefined field643_0x283;
    undefined field644_0x284;
    undefined field645_0x285;
    undefined field646_0x286;
    undefined field647_0x287;
    undefined field648_0x288;
    undefined field649_0x289;
    undefined field650_0x28a;
    undefined field651_0x28b;
    undefined field652_0x28c;
    undefined field653_0x28d;
    undefined field654_0x28e;
    undefined field655_0x28f;
    undefined field656_0x290;
    undefined field657_0x291;
    undefined field658_0x292;
    undefined field659_0x293;
    undefined field660_0x294;
    undefined field661_0x295;
    undefined field662_0x296;
    undefined field663_0x297;
    undefined field664_0x298;
    undefined field665_0x299;
    undefined field666_0x29a;
    undefined field667_0x29b;
    undefined field668_0x29c;
    undefined field669_0x29d;
    undefined field670_0x29e;
    undefined field671_0x29f;
    undefined field672_0x2a0;
    undefined field673_0x2a1;
    undefined field674_0x2a2;
    undefined field675_0x2a3;
    undefined field676_0x2a4;
    undefined field677_0x2a5;
    undefined field678_0x2a6;
    undefined field679_0x2a7;
    undefined field680_0x2a8;
    undefined field681_0x2a9;
    undefined field682_0x2aa;
    undefined field683_0x2ab;
    undefined field684_0x2ac;
    undefined field685_0x2ad;
    undefined field686_0x2ae;
    undefined field687_0x2af;
    undefined field688_0x2b0;
    undefined field689_0x2b1;
    undefined field690_0x2b2;
    undefined field691_0x2b3;
    undefined field692_0x2b4;
    undefined field693_0x2b5;
    undefined field694_0x2b6;
    undefined field695_0x2b7;
    undefined field696_0x2b8;
    undefined field697_0x2b9;
    undefined field698_0x2ba;
    undefined field699_0x2bb;
    undefined field700_0x2bc;
    undefined field701_0x2bd;
    undefined field702_0x2be;
    undefined field703_0x2bf;
    undefined field704_0x2c0;
    undefined field705_0x2c1;
    undefined field706_0x2c2;
    undefined field707_0x2c3;
    undefined field708_0x2c4;
    undefined field709_0x2c5;
    undefined field710_0x2c6;
    undefined field711_0x2c7;
    undefined field712_0x2c8;
    undefined field713_0x2c9;
    undefined field714_0x2ca;
    undefined field715_0x2cb;
    undefined field716_0x2cc;
    undefined field717_0x2cd;
    undefined field718_0x2ce;
    undefined field719_0x2cf;
    undefined field720_0x2d0;
    undefined field721_0x2d1;
    undefined field722_0x2d2;
    undefined field723_0x2d3;
    undefined field724_0x2d4;
    undefined field725_0x2d5;
    undefined field726_0x2d6;
    undefined field727_0x2d7;
    undefined field728_0x2d8;
    undefined field729_0x2d9;
    undefined field730_0x2da;
    undefined field731_0x2db;
    undefined field732_0x2dc;
    undefined field733_0x2dd;
    undefined field734_0x2de;
    undefined field735_0x2df;
    undefined field736_0x2e0;
    undefined field737_0x2e1;
    undefined field738_0x2e2;
    undefined field739_0x2e3;
    undefined field740_0x2e4;
    undefined field741_0x2e5;
    undefined field742_0x2e6;
    undefined field743_0x2e7;
    undefined field744_0x2e8;
    undefined field745_0x2e9;
    undefined field746_0x2ea;
    undefined field747_0x2eb;
    undefined field748_0x2ec;
    undefined field749_0x2ed;
    undefined field750_0x2ee;
    undefined field751_0x2ef;
    undefined field752_0x2f0;
    undefined field753_0x2f1;
    undefined field754_0x2f2;
    undefined field755_0x2f3;
    undefined field756_0x2f4;
    undefined field757_0x2f5;
    undefined field758_0x2f6;
    undefined field759_0x2f7;
    undefined field760_0x2f8;
    undefined field761_0x2f9;
    undefined field762_0x2fa;
    undefined field763_0x2fb;
    undefined field764_0x2fc;
    undefined field765_0x2fd;
    undefined field766_0x2fe;
    undefined field767_0x2ff;
    undefined field768_0x300;
    undefined field769_0x301;
    undefined field770_0x302;
    undefined field771_0x303;
    undefined field772_0x304;
    undefined field773_0x305;
    undefined field774_0x306;
    undefined field775_0x307;
    undefined field776_0x308;
    undefined field777_0x309;
    undefined field778_0x30a;
    undefined field779_0x30b;
    undefined field780_0x30c;
    undefined field781_0x30d;
    undefined field782_0x30e;
    undefined field783_0x30f;
    undefined field784_0x310;
    undefined field785_0x311;
    undefined field786_0x312;
    undefined field787_0x313;
    undefined field788_0x314;
    undefined field789_0x315;
    undefined field790_0x316;
    undefined field791_0x317;
    undefined field792_0x318;
    undefined field793_0x319;
    undefined field794_0x31a;
    undefined field795_0x31b;
    undefined field796_0x31c;
    undefined field797_0x31d;
    undefined field798_0x31e;
    undefined field799_0x31f;
    undefined field800_0x320;
    undefined field801_0x321;
    undefined field802_0x322;
    undefined field803_0x323;
    undefined field804_0x324;
    undefined field805_0x325;
    undefined field806_0x326;
    undefined field807_0x327;
    undefined field808_0x328;
    undefined field809_0x329;
    undefined field810_0x32a;
    undefined field811_0x32b;
    undefined field812_0x32c;
    undefined field813_0x32d;
    undefined field814_0x32e;
    undefined field815_0x32f;
    undefined field816_0x330;
    undefined field817_0x331;
    undefined field818_0x332;
    undefined field819_0x333;
    undefined field820_0x334;
    undefined field821_0x335;
    undefined field822_0x336;
    undefined field823_0x337;
    undefined field824_0x338;
    undefined field825_0x339;
    undefined field826_0x33a;
    undefined field827_0x33b;
    undefined field828_0x33c;
    undefined field829_0x33d;
    undefined field830_0x33e;
    undefined field831_0x33f;
    undefined field832_0x340;
    undefined field833_0x341;
    undefined field834_0x342;
    undefined field835_0x343;
    undefined field836_0x344;
    undefined field837_0x345;
    undefined field838_0x346;
    undefined field839_0x347;
    undefined field840_0x348;
    undefined field841_0x349;
    undefined field842_0x34a;
    undefined field843_0x34b;
    undefined field844_0x34c;
    undefined field845_0x34d;
    undefined field846_0x34e;
    undefined field847_0x34f;
    undefined field848_0x350;
    undefined field849_0x351;
    undefined field850_0x352;
    undefined field851_0x353;
    undefined field852_0x354;
    undefined field853_0x355;
    undefined field854_0x356;
    undefined field855_0x357;
    undefined field856_0x358;
    undefined field857_0x359;
    undefined field858_0x35a;
    undefined field859_0x35b;
};

typedef struct UnknownStructure_172 UnknownStructure_172, *PUnknownStructure_172;

struct UnknownStructure_172 {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    byte some_bytes[16]; /* Maybe an enum from Character* */
    undefined field117_0x84;
    undefined field118_0x85;
    undefined field119_0x86;
    undefined field120_0x87;
    undefined field121_0x88;
    undefined field122_0x89;
    undefined field123_0x8a;
    undefined field124_0x8b;
    undefined field125_0x8c;
    undefined field126_0x8d;
    undefined field127_0x8e;
    undefined field128_0x8f;
    undefined field129_0x90;
    undefined field130_0x91;
    undefined field131_0x92;
    undefined field132_0x93;
    undefined field133_0x94;
    undefined field134_0x95;
    undefined field135_0x96;
    undefined field136_0x97;
    undefined field137_0x98;
    undefined field138_0x99;
    undefined field139_0x9a;
    undefined field140_0x9b;
    undefined field141_0x9c;
    undefined field142_0x9d;
    undefined field143_0x9e;
    undefined field144_0x9f;
    undefined field145_0xa0;
    undefined field146_0xa1;
    undefined field147_0xa2;
    undefined field148_0xa3;
    undefined field149_0xa4;
    undefined field150_0xa5;
    undefined field151_0xa6;
    undefined field152_0xa7;
    undefined field153_0xa8;
    undefined field154_0xa9;
    undefined field155_0xaa;
    undefined field156_0xab;
};

