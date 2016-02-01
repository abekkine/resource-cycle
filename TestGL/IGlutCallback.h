#pragma once

class IGlutCallback {
public:
	virtual void OnDisplay() = 0;
	virtual void OnRegularKey(unsigned char key, int x, int y) = 0;
	virtual void OnSpecialKey(int key, int x, int y) = 0;
	virtual void OnReshape(int width, int height) = 0;
	virtual void OnMouse(int button, int state, int x, int y) = 0;
	virtual void OnMotion(int x, int y) = 0;
	virtual void OnVisibility(int state) = 0;
	virtual void OnEntry(int state) = 0;
	virtual void OnIdle() = 0;
};
