#include "BaseBehaviour.h"
#include <iostream>
#include "Game.h"

BaseBehaviour::BaseBehaviour()
{
	Game::addBehaviour(this);
}

BaseBehaviour::~BaseBehaviour()
{
}
