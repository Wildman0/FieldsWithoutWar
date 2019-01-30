#pragma once
#include "TileManager.h"

class Tile
{
public:
	Tile();
	~Tile();

	TileType setTileType(TileType t) { tileType = t; }
	TileType getTileType() { return tileType; }

private:
	TileType tileType;
};

