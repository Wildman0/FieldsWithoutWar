#pragma once

#include "IBaseBehaviour.h"

class CharacterRenderer : public IBaseBehaviour
{
public:
	CharacterRenderer();
	~CharacterRenderer();

	void onAwake() override;
	void onStart() override;
	void onUpdate() override;
	void onRender() override;
};

