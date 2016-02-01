#include <GL/freeglut.h>
#include "Planet.h"

Planet::Planet()
{
}

Planet::~Planet()
{
}

void Planet::Render()
{
	glLineWidth(1.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-80.0, -80.0);
	glVertex2f(80.0, -80.0);
	glVertex2f(80.0, 80.0);
	glVertex2f(-80.0, 80.0);
	glVertex2f(-80.0, -80.0);
	glEnd();

	// Render resources,
	std::vector<Resource*>::const_iterator iter;
	for (iter = resources_.begin(); iter != resources_.end(); ++iter)
	{
		Resource* iResource = *iter;
		iResource->Render();
	}
}

void Planet::Update(double deltaTime)
{

}

void Planet::SetRadius(double r)
{
	radius_ = r;
}

void Planet::SetNumResources(int n)
{
	for (int i = 0; i < n; i++)
	{
		resources_.push_back(new Resource());
	}
}

void Planet::SetRotationSpeed(double w)
{
	omega_ = w;
}