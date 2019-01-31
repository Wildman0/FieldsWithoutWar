#pragma once

#include <vector>
#include <SFML/Graphics.hpp>
#include "Tile.h"

class TileRenderer
{
public:
	TileRenderer();
	~TileRenderer();

	void renderTileMap(std::vector<std::vector<Tile>> tileMap, sf::RenderWindow* window);
};

