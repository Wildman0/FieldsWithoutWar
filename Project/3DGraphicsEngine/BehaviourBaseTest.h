#pragma once
#include "BaseBehaviour.h"

class BehaviourBaseTest : public BaseBehaviour
{
public: 
	BehaviourBaseTest();
	~BehaviourBaseTest();

	void onAwake() override;
	void onStart() override;
	void onUpdate() override;
};

