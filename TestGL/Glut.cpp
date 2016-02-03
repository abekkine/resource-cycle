#include <stdio.h>
#include <GL/freeglut.h>

#include "Glut.h"

IGlutCallback* Glut::cbInstance = 0;

void Glut::Init(int* argc, char** argv) {

	glutInit(argc, argv);
	
	InitWindow();
	Setup();
}

void Glut::InitWindow() {
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(2000, 30);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow("Test GL");
}

void Glut::Setup() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glEnable(GL_LINE_SMOOTH);
	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
}

void Glut::RegisterCallbacks(IGlutCallback* callbackInstance) {
	cbInstance = callbackInstance;

	if (cbInstance != 0) {
		glutDisplayFunc(Glut::OnDisplay);
		glutReshapeFunc(Glut::OnReshape);
		glutKeyboardFunc(Glut::OnRegularKey);
		glutSpecialFunc(Glut::OnSpecialKey);
		glutMouseFunc(Glut::OnMouse);
		glutMotionFunc(Glut::OnMotion);
		glutPassiveMotionFunc(Glut::OnMotion);
		glutVisibilityFunc(Glut::OnVisibility);
		glutEntryFunc(Glut::OnEntry);
		glutIdleFunc(Glut::OnIdle);
	}
}

void Glut::MainLoop() {
	glutMainLoop();
}

// Callbacks
void Glut::OnDisplay() {
	cbInstance->OnDisplay();
}

void Glut::OnReshape(int width, int height) {
	cbInstance->OnReshape(width, height);
}

void Glut::OnRegularKey(unsigned char key, int x, int y) {
	cbInstance->OnRegularKey(key, x, y);
}

void Glut::OnSpecialKey(int key, int x, int y) {
	cbInstance->OnSpecialKey(key, x, y);
}

void Glut::OnMouse(int button, int state, int x, int y) {
	cbInstance->OnMouse(button, state, x, y);
}

void Glut::OnMotion(int x, int y) {
	cbInstance->OnMotion(x, y);
}

void Glut::OnVisibility(int state) {
	cbInstance->OnVisibility(state);
}

void Glut::OnEntry(int state) {
	cbInstance->OnEntry(state);
}

void Glut::OnIdle() {
	cbInstance->OnIdle();
}
// End Callbacks
