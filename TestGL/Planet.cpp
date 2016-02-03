#include <GL/freeglut.h>
#include "Shapes.h"
#include "Planet.h"

Planet::Planet()
{
	theta = 0.0f;
}

Planet::~Planet()
{
}

void Planet::Render()
{

	glColor3f(0.4f, 0.4f, 0.4f);
	Shapes::Disk(0.0f, 0.0f, 80.0f);
	glColor3f(1.0, 1.0, 1.0);
	Shapes::Circle(0.0f, 0.0f, 80.0f, 1.0);
	// Render resources,
	std::vector<Resource*>::const_iterator iter;
	for (iter = resources_.begin(); iter != resources_.end(); ++iter)
	{
		Resource* iResource = *iter;
		iResource->Render();
	}

	// DEBUG
	theta += 0.1f;
	glPushMatrix();
	glLoadIdentity();
	glRotatef(theta, 0.0f, 0.0f, 1.0f);
	glColor4f(0.0f, 0.0f, 0.0f, 0.95f);
	Shapes::FillPie(0.0f, 0.0f, 100.0f, 180.0f);
	glPopMatrix();
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
		resources_.push_back(new Resource(80.0f));
	}
}

void Planet::SetRotationSpeed(double w)
{
	omega_ = w;
}