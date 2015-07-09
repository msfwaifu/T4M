#pragma once
typedef enum assetType_e
{
	ASSET_TYPE_PHYSPRESET = 0,
	ASSET_TYPE_PHYSCONSTRAINTS = 1,
	ASSET_TYPE_DESTRUCTIBLEDEF = 2,
	ASSET_TYPE_XANIM = 3,
	ASSET_TYPE_XMODEL = 4,
	ASSET_TYPE_MATERIAL = 5,
	ASSET_TYPE_PIXELSHADER = 6,
	ASSET_TYPE_VERTEXSHADER = 7,
	ASSET_TYPE_TECHSET = 8,
	ASSET_TYPE_IMAGE = 9,
	ASSET_TYPE_SOUND = 10,
	ASSET_TYPE_LOADED_SOUND = 11,
	ASSET_TYPE_COL_MAP_SP = 12,
	ASSET_TYPE_COL_MAP_MP = 13,
	ASSET_TYPE_COM_MAP = 14,
	ASSET_TYPE_GAME_MAP_SP = 15,
	ASSET_TYPE_GAME_MAP_MP = 16,
	ASSET_TYPE_MAP_ENTS = 17,
	ASSET_TYPE_GFX_MAP = 18,
	ASSET_TYPE_LIGHTDEF = 19,
	ASSET_TYPE_FONT = 20,
	ASSET_TYPE_MENUFILE = 21,
	ASSET_TYPE_MENU = 22,
	ASSET_TYPE_LOCALIZE = 23,
	ASSET_TYPE_WEAPON = 24,
	ASSET_TYPE_SNDDRIVERGLOBALS = 25,
	ASSET_TYPE_FX = 26,
	ASSET_TYPE_IMPACTFX = 27,
	ASSET_TYPE_RAWFILE = 28,
	ASSET_TYPE_STRINGTABLE = 29,
	ASSET_TYPE_PACKINDEX = 30
} assetType_t;

void* ReallocateAssetPool(assetType_t type, unsigned int newSize);