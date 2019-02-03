#include "BehaviourHandler.h"

BehaviourHandler::BehaviourHandler()
{
}

void BehaviourHandler::addBehaviour(BaseBehaviour* b)
{
	behaviours.push_back(b);
	b->onAwake();
	b->onStart();
}

void BehaviourHandler::destroyBehaviour(BaseBehaviour b)
{
	//Destroy behaviour
}

BehaviourHandler::~BehaviourHandler()
{
}
