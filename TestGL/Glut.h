#pragma once
#include "IGlutCallback.h"

class Glut
{
public:
	static void Init(int* argc, char** argv);
	static void RegisterCallbacks(IGlutCallback* callbackInstance);
	static void MainLoop();
private:
	static IGlutCallback* cbInstance;
	static void InitWindow();
	static void Setup();
	// Callback functions
	static void OnDisplay();
	static void OnReshape(int width, int height);
	static void OnRegularKey(unsigned char key, int x, int y);
	static void OnSpecialKey(int key, int x, int y);
	static void OnMouse(int button, int state, int x, int y);
	static void OnMotion(int x, int y);
	static void OnVisibility(int state);
	static void OnEntry(int state);
	static void OnIdle();
	// End callback functions
};

