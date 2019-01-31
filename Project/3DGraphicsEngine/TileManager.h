#pragma once

#include "TileType.h"
#include <array>
#include "Tile.h"
#include <vector>
#include <SFML/System/Utf.hpp>

class TileManager
{
public:
	TileManager();
	TileManager(uint8_t mapSizeX, uint8_t mapSizeY);
	~TileManager();

	std::vector<std::vector<Tile>> tileMap;

private:
	void start();

	uint8_t mapSizeX;
	uint8_t mapSizeY;
};
