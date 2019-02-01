#include "Tile.h"

Tile::Tile()
{

}

Tile::Tile(TileType t)
{
	tileType = t;
	
	texture.loadFromFile("E:/Documents/FieldsWithoutWarRepo/Project/Debug/Images/grass.png");
}

Tile::~Tile()
{
}