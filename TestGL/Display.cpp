#include <GL/freeglut.h>

#include "Display.h"

Display::Display()
{
}

Display::~Display()
{
}

void Display::RegisterScene(Scene* scene) {
	scene_ = scene;
}

void Display::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	if (scene_ != 0) {
		scene_->Render();
	}

	glutSwapBuffers();
	glutPostRedisplay();
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
	if (scene_ != 0) {
		scene_->Update(0.0);
	}
}
