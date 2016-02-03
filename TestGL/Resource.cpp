#define _USE_MATH_DEFINES
#include <math.h>
#include <GL/freeglut.h>

#include "Shapes.h"
#include "Resource.h"

Resource::Resource(float altitude)
{
	float a = 2.0 * M_PI * (rand() / (double)RAND_MAX);

	x = altitude * cos(a);
	y = altitude * sin(a);
}

Resource::~Resource()
{
}

void Resource::Render()
{
	glColor3f(0.7f, 0.2f, 0.2f);
	Shapes::FillRPoly(x, y, 5.0f, 5.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	Shapes::RPoly(x, y, 5.0f, 5.0f, 1.0f);
}

void Resource::Update(double deltaTime)
{

}
