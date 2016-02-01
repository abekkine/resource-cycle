#pragma once
#include "IGlutCallback.h"
#include "Scene.h"
class Display :	public IGlutCallback
{
private:
	Scene* scene_;
public:
	Display();
	~Display();
	void RegisterScene(Scene* scene);

	virtual void OnDisplay();
	virtual void OnRegularKey(unsigned char key, int x, int y);
	virtual void OnSpecialKey(int key, int x, int y);
	virtual void OnReshape(int width, int height);
	virtual void OnMouse(int button, int state, int x, int y);
	virtual void OnMotion(int x, int y);
	virtual void OnVisibility(int state);
	virtual void OnEntry(int state);
	virtual void OnIdle();
};

