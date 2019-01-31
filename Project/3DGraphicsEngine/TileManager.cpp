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
			t.setTileType(brickWall);
		}
	}
}

TileManager::~TileManager()
{
}