#pragma once
#include "TileType.h"

class Tile
{
public:
	Tile();
	Tile(TileType t);
	~Tile();

	void setTileType(TileType t) { tileType = t; }
	TileType getTileType() { return tileType; }

private:
	TileType tileType;
};

