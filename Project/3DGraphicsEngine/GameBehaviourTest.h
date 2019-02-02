#pragma once
#include "GameBehaviour.h"

class GameBehaviourTest : GameBehaviour
{
public:
	GameBehaviourTest();
	~GameBehaviourTest();

	void onConstruction() override;
	void onUpdate() override;
};

