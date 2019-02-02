#pragma once

class GameBehaviour
{
public:
	GameBehaviour();
	~GameBehaviour();

	virtual void onConstruction();
	virtual void onUpdate();
};

