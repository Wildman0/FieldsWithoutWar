#include "GameBehaviourTest.h"
#include <iostream>

GameBehaviourTest::GameBehaviourTest()
{
	//Game::addBehaviourInstance(this);
}

void GameBehaviourTest::onConstruction()
{
	
}

void GameBehaviourTest::onUpdate()
{
	std::cout << "test";
}

GameBehaviourTest::~GameBehaviourTest()
{
}
