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
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP,        castle_geo_000F18),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND,  castle_geo_001530),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND,    castle_geo_001548),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM,     castle_geo_001518),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR,        castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR,        wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR,         metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS,       castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR,        castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS,       castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR,           key_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS,  castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(28, castle_door_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(39, wooden_door_geo),
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,0,0,650),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x14c1700),
TERRAIN(col_castle_inside_1_0xe01ddd8),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,-2071,520,-1790,0,0,0,0x180a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1480,828,-3025,0,26,0,0x180b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1480,828,-3025,0,-26,0,0x180c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2071,520,-1790,0,0,0,0x180d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,5,-539,0,180,0,0x60000, bhvInstantActiveWarp,31),
OBJECT_WITH_ACTS(0,-2067,520,-1150,0,180,0,0x320000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-2071,520,-1150,0,180,0,0x640000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(24,1304,8,-1475,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-1304,8,-1475,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,600,495,-3175,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-600,495,-3175,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,0,250,-2516,0,0,0,0x18050000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1340,812,-2403,0,180,0,0x330000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-1340,812,-2403,0,180,0,0x650000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,1340,812,-2403,0,180,0,0x340000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1340,812,-2403,0,180,0,0x660000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,2071,520,-1150,0,180,0,0x350000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,2071,520,-1150,0,180,0,0x670000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,0,330,-539,0,180,0,0x360000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,0,330,-539,0,180,0,0x680000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,0,812,-4993,0,180,0,0x370000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,0,812,-4993,0,180,0,0x690000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,0,813,-5691,0,0,0,0x18090000, bhvWarp,31),
OBJECT_WITH_ACTS(213,-79,488,-3430,0,0,0,0x1e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(213,79,488,-3430,0,180,0,0x1e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(120,0,61,-847,0,0,0,0x0, bhvRecoveryHeart,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(51,6,1,10,0),
WARP_NODE(101,6,1,10,0),
WARP_NODE(52,6,1,10,0),
WARP_NODE(102,6,1,10,0),
WARP_NODE(53,6,1,10,0),
WARP_NODE(103,6,1,10,0),
WARP_NODE(54,6,1,10,0),
WARP_NODE(104,6,1,10,0),
WARP_NODE(55,6,1,10,0),
WARP_NODE(105,6,1,10,0),
WARP_NODE(22,9,1,10,0),
WARP_NODE(23,9,1,10,0),
WARP_NODE(24,9,1,10,0),
WARP_NODE(25,9,1,10,0),
WARP_NODE(9,21,1,10,0),
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,24,1,10,0),
WARP_NODE(12,12,1,10,0),
WARP_NODE(13,5,1,10,0),
WARP_NODE(100,6,1,10,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
WARP_NODE(50,6,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,25,1,10,0),
WARP_NODE(5,27,1,10,0),
WARP_NODE(6,6,1,10,0),
RETURN()
};