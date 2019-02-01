#include "TileRenderer.h"
#include "Tile.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <iostream>

TileRenderer::TileRenderer()
{
}

//Renders all tiles in a multidimensional tile vector
void TileRenderer::renderTileMap(TileManager tileManager, sf::RenderWindow* window)
{
	for (size_t i = 0; i < tileManager.tileMap.capacity(); i++)
	{
		for (size_t j = 0; j < tileManager.tileMap[0].capacity(); j++)
		{
			sf::Sprite s;

			s = *tileManager.tileSprites[grass];
			//s.setTexture(*tileManager.tileTextures[grass]);
			s.setTexture(tileManager.tileMap[i][j].texture);
			s.setPosition(i * 35, j * 35);

			window->draw(s);
		}
	}
}

TileRenderer::~TileRenderer()
{
}
