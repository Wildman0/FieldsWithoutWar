#pragma once

class BaseBehaviour
{
public:
	BaseBehaviour();
	~BaseBehaviour();

	virtual void onAwake() {};
	virtual void onStart() {};
	virtual void onUpdate() {};
	virtual void onRender() {};
};

