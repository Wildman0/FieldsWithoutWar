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
	TileManager(int mapSizeX, int mapSizeY);
	~TileManager();

	std::vector<std::vector<Tile>> tileMap;

private:
	void start();

	sf::Uint8 mapSizeX;
	sf::Uint8 mapSizeY;
};
