#pragma once
class GameBehaviour
{
public:
	GameBehaviour();
	~GameBehaviour();

private:
	virtual void onConstruction();
	virtual void onAwake();
	virtual void onUpdate();
};

