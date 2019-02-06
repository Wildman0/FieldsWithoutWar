#include "Game.h"

BehaviourHandler* Game::behaviourHandler = new BehaviourHandler();

//Program entry point
void main()
{
	Game* game = new Game;
	delete game;
	game = nullptr;
}