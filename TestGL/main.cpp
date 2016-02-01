#include <stdio.h>

#include "Glut.h"
#include "Display.h"
#include "Scene.h"

int main(int argc, char** argv)
{
	Scene* scene = new Scene();
	scene->Init();
	Display* display = new Display();
	display->RegisterScene(scene);
	Glut::Init(&argc, argv);
	Glut::RegisterCallbacks(display);
	Glut::MainLoop();

	return 0;
}