#include "BaseBehaviour.h"
#include <iostream>
#include "Game.h"

BaseBehaviour::BaseBehaviour()
{
	Game::addBehaviour(this);
	std::cout << "Working";
}

BaseBehaviour::~BaseBehaviour()
{
}
