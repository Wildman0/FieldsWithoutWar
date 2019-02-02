#include "GameBehaviour.h"
#include "Game.h"

GameBehaviour::GameBehaviour()
{
	onConstruction();
	Game::addBehaviourInstance(this);
}

void GameBehaviour::onConstruction(){}

void GameBehaviour::onUpdate(){}

GameBehaviour::~GameBehaviour()
{
}
