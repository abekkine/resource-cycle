#include <GL/freeglut.h>
#include <math.h>
#include "Resource.h"

Resource::Resource()
{

	x = (rand() / (double)RAND_MAX) * 160.0 - 80.0;
	y = (rand() / (double)RAND_MAX) * 160.0 - 80.0;
}

Resource::~Resource()
{
}

void Resource::Render()
{

	glLineWidth(1.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(x-5.0, y-5.0);
	glVertex2f(x-5.0, y+5.0);
	glVertex2f(x+5.0, y+5.0);
	glVertex2f(x+5.0, y-5.0);
	glVertex2f(x-5.0, y-5.0);
	glEnd();
}

void Resource::Update(double deltaTime)
{

}
