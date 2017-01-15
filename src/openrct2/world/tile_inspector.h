#pragma region Copyright (c) 2014-2016 OpenRCT2 Developers
/*****************************************************************************
* OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
*
* OpenRCT2 is the work of many authors, a full list can be found in contributors.md
* For more information, visit https://github.com/OpenRCT2/OpenRCT2
*
* OpenRCT2 is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* A full copy of the GNU General Public License can be found in licence.txt
*****************************************************************************/
#pragma endregion

#pragma once

#include "../common.h"

typedef enum {
	TILE_INSPECTOR_ELEMENT_ANY = 0,
	TILE_INSPECTOR_ELEMENT_SURFACE,
	TILE_INSPECTOR_ELEMENT_PATH,
	TILE_INSPECTOR_ELEMENT_TRACK,
	TILE_INSPECTOR_ELEMENT_SCENERY,
	TILE_INSPECTOR_ELEMENT_ENTRANCE,
	TILE_INSPECTOR_ELEMENT_FENCE,
	TILE_INSPECTOR_ELEMENT_SCENERYMULTIPLE,
	TILE_INSPECTOR_ELEMENT_BANNER,
	TILE_INSPECTOR_ELEMENT_CORRUPT,
} tile_inspector_element_type;

sint32 tile_inspector_insert_corrupt_at(sint32 x, sint32 y, sint16 element_index, sint32 flags);
