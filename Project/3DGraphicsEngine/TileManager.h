#pragma once

#include "TileType.h"
#include <array>
#include "Tile.h"
#include <vector>
#include <SFML/System/Utf.hpp>
#include <SFML/Graphics/Texture.hpp>

class TileManager
{
public:
	TileManager();
	TileManager(int mapSizeX, int mapSizeY);
	~TileManager();

	std::vector<std::vector<Tile>> tileMap;
	std::vector<sf::Texture> tileTextures;

private:
	void start();
	void setTileTextures();

	sf::Uint8 mapSizeX;
	sf::Uint8 mapSizeY;
};
