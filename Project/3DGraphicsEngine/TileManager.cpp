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

	for (size_t i = 0; i < mapSizeX; i++)
	{
		for (size_t j = 0; j < mapSizeY; j++)
		{
			Tile t = Tile();

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

	sf::Texture tex;

	tileTextures[grass] = new sf::Texture();
	tileSprites[grass] = new sf::Sprite();

	if (!tex.loadFromFile("E:/Documents/FieldsWithoutWarRepo/Project/Debug/Images/grass.png"))
	{
		std::cout << "Texture loading failed" << std::endl;
	}

	tileTextures[grass] = &tex;

	for (size_t i = 0; i < tileMap.capacity(); i++)
	{
		for (size_t j = 0; j < tileMap[0].capacity(); j++)
		{
			tileMap[i][j].texture = tex;
		}
	}

	sf::Sprite sprite;
	tileSprites[grass]->setTexture(*tileTextures[grass]);
}

TileManager::~TileManager()
{
}