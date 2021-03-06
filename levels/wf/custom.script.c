#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/sl/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _slSegmentRomStart, _slSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group16_mio0SegmentRomStart,_group16_mio0SegmentRomEnd),
LOAD_RAW(13,_group16_geoSegmentRomStart,_group16_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE,      sl_geo_000390),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE,        sl_geo_000360),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK,  sl_geo_000378),
    LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE,          snow_tree_geo),
LOAD_MODEL_FROM_GEO(18, snow_tree_geo),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(100,0x06003754),
// LOAD_MODEL_FROM_GEO(101,0x06003874),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_17),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x2d81700),
TERRAIN(col_wf_1_0xe021c88),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,-5484,2971,8940,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(87,51,2328,-14,0,-57,0,0x1000000, bhvTuxiesMother,31),
OBJECT_WITH_ACTS(18,190,2035,1329,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-1173,1785,-120,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(84,-598,2048,1577,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(137,-2297,2134,629,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(129,-3247,1012,-1051,0,-10,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(215,-3247,1012,-1051,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,583,1804,3232,0,-10,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(215,583,1804,3232,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(86,-2406,1804,-252,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(129,-3878,1408,716,0,10,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(215,-3878,1408,716,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,-3052,1408,2139,0,62,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(215,-3052,1408,2139,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(18,-3434,1388,-116,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-1867,1388,2478,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,-490,1920,2789,0,-116,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,823,2243,923,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,830,2155,1612,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,394,2091,2145,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(137,-649,1327,4422,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(84,-1351,1012,4061,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(0,-3204,1136,3697,0,-103,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,-2857,1560,-1699,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-3778,1351,-2228,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-4777,1136,-1934,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-14965,2728,1973,0,0,0,0x2000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(0,-3498,1015,5195,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-3498,1015,5195,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-6787,1015,5512,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-6787,1015,5512,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-8642,1015,2511,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-8642,1015,2511,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-10302,1015,-482,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-10302,1015,-482,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-13220,1015,-173,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-13220,1015,-173,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(101,-5673,1950,2912,0,0,0,0x0, bhvBigChillBully,31),
OBJECT_WITH_ACTS(0,-5437,1140,191,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5437,1369,191,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(87,1036,1011,4827,0,-105,0,0x0, bhvSmallPenguin,31),
OBJECT_WITH_ACTS(137,-5558,2313,10377,0,-94,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(18,748,996,4098,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(129,-1320,1011,2918,0,10,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(215,-1320,1011,2918,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,-423,1011,5417,0,20,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(215,-423,1011,5417,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-649,1060,4422,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,-6338,1011,-933,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(215,-6338,1011,-933,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,-1485,1804,-786,0,-30,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(215,-1485,1804,-786,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,-287,3131,8056,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(140,-2405,1407,7390,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(0,-2405,1407,7390,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(118,-3849,1712,8265,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-5484,2063,8894,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-7098,1712,8203,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(18,-5777,996,-1506,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-7623,996,1876,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-4374,996,5130,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-3459,1697,8558,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-7258,1695,8690,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-6646,996,4723,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-300,1392,7132,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(86,-4344,1011,-900,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(84,-7310,1011,3465,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,-5211,1011,4815,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(202,-10629,1726,6190,0,-136,0,0x280000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(86,-5439,1407,7750,0,-20,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(0,-8780,1407,6119,0,-136,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-9779,1745,5047,0,45,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(18,-6105,2002,9855,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,-9004,2600,7632,0,25,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(207,-10262,3846,5222,0,7,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-10870,3600,8453,0,-136,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(122,-12103,4089,9677,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(18,-9904,1394,3691,0,0,0,0x0, bhvTree,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,51,0),
WARP_NODE(241,6,1,101,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
