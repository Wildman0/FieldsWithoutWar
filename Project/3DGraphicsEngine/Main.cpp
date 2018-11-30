#include "Game.h"

//Program entry point
void main()
{
	Game* game = new Game;
	delete game;
	game = nullptr;
}