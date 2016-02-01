#include <GL/freeglut.h>

#include "Display.h"

Display::Display()
{
}

Display::~Display()
{
}

void Display::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	glLineWidth(4.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-80.0, -80.0);
	glVertex2f(80.0, -80.0);
	glVertex2f(80.0, 80.0);
	glVertex2f(-80.0, 80.0);
	glVertex2f(-80.0, -80.0);
	glEnd();

	glutSwapBuffers();
}

void Display::OnRegularKey(unsigned char key, int x, int y) {
	switch (key) {
	case 27:
		glutExit();
		break;
	default:
		break;
	}
}

void Display::OnSpecialKey(int key, int x, int y) {

}

void Display::OnReshape(int width, int height) {
	if (height == 0) {
		height = 1;
	}

	glViewport(0, 0, width, height);
	glOrtho(-100.0, 100.0, -100.0, 100.0, 1.0, -1.0);
}

void Display::OnMouse(int button, int state, int x, int y) {

}

void Display::OnMotion(int x, int y) {

}

void Display::OnVisibility(int state) {

}

void Display::OnEntry(int state) {

}

void Display::OnIdle() {

}
