#pragma once

class BaseBehaviour
{
public:
	BaseBehaviour();
	~BaseBehaviour();

	virtual void onAwake() = 0;
	virtual void onStart() = 0;
	virtual void onUpdate() = 0;
	virtual void onRender() = 0;

private:

};

