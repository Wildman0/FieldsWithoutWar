#include "TileRenderer.h"
#include "Tile.h"
#include <SFML/Graphics/CircleShape.hpp>

TileRenderer::TileRenderer()
{
}

//Renders all tiles in a multidimensional tile vector
void TileRenderer::renderTileMap(std::vector<std::vector<Tile>> tileMap, sf::RenderWindow* window)
{
	for (size_t i = 0; i < tileMap.capacity(); i++)
	{
		for (size_t j = 0; j < tileMap[0].capacity(); j++)
		{
			sf::CircleShape cS = sf::CircleShape(16);
			cS.setPosition(i * 32, j * 32);
			cS.setFillColor(sf::Color::Green);

			window->draw(cS);
		}
	}
}

TileRenderer::~TileRenderer()
{
}
