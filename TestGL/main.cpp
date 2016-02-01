#include <stdio.h>

#include "Glut.h"
#include "Display.h"

int main(int argc, char** argv)
{
	Display* display = new Display();
	Glut::Init(&argc, argv);
	Glut::RegisterCallbacks(display);
	Glut::MainLoop();

	return 0;
}