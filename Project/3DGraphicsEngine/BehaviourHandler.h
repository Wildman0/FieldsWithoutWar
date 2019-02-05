#pragma once

#include <vector>

#include "BaseBehaviour.h"

class BehaviourHandler
{
public:
	BehaviourHandler();
	~BehaviourHandler();

	void addBehaviour(BaseBehaviour* b);
	void destroyBehaviour(BaseBehaviour* b);

	std::vector<BaseBehaviour*> getBehaviours() { return behaviours; }

private:
	std::vector<BaseBehaviour*> behaviours;
};

