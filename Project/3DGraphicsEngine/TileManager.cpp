#include "TileManager.h"
#include <iostream>

TileManager::TileManager()
{
	
}

TileManager::TileManager(int mapSizeX, int mapSizeY)
{
	this->mapSizeX = mapSizeX;
	this->mapSizeY = mapSizeY;

	start();
}

void TileManager::start()
{
	tileMap.resize(mapSizeX);

	for (size_t i = 0; i < mapSizeX; i++)
	{
		tileMap[i].resize(mapSizeY);
	}

	Tile t = Tile();

	for (size_t i = 0; i < mapSizeX; i++)
	{
		for (size_t j = 0; j < mapSizeY; j++)
		{
			tileMap[i][j] = t;
			t.setTileType(grass);
		}
	}
	
	setTileTextures();
}

void TileManager::setTileTextures()
{
	tileTextures.resize(TileTypes::count);
	tileSprites.resize(TileTypes::count);

	tileTextures[grass] = sf::Texture();
	tileSprites[grass] = sf::Sprite();

	if (!tileTextures[grass].loadFromFile("D:/FieldsWithoutWar/Project/3DGraphicsEngine/Debug/Images/grass.png"))
	{
		std::cout << "Texture loading failed" << std::endl;
	}
	
	tileSprites[grass].setTexture(tileTextures[grass]);
}

TileManager::~TileManager()
{
}