#pragma once

#include "TileType.h"
#include <array>
#include "Tile.h"
#include <vector>

class TileManager
{
public:
	TileManager();
	TileManager(int mapSizeX, int mapSizeY);
	~TileManager();

	std::vector<std::vector<Tile>> tileMap;
};
