#include "Game.h"

BehaviourHandler* behaviourHandler = new BehaviourHandler();

//Program entry point
void main()
{
	Game* game = new Game;
	delete game;
	game = nullptr;
}