#define _USE_MATH_DEFINES
#include <math.h>
#include <GL/freeglut.h>

#include "Shapes.h"

float Shapes::angleStep = 0.05f;

void Shapes::Circle(float x, float y, float r, float width)
{
	glLineWidth(width);
	glBegin(GL_LINE_STRIP);
	for (float a = 0.0f; a <= 2.0f * M_PI; a += angleStep)
	{
		glVertex2f(x + r * cos(a), y + r * sin(a));
	}
	glVertex2f(x + r, y);
	glEnd();
}

void Shapes::Line(float x1, float y1, float x2, float y2, float width)
{
	// TODO
}

void Shapes::Disk(float x, float y, float r)
{
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x, y);
	for (float a = 0.0f; a <= 2.0f * M_PI; a += angleStep)
	{
		glVertex2f(x + r * cos(a), y + r * sin(a));
	}
	glVertex2f(x + r, y);
	glEnd();
}

void Shapes::RPoly(float x, float y, float r, float num, float width)
{
	float aStep = 2.0 * M_PI / floor(num);
	glLineWidth(width);
	glBegin(GL_LINE_STRIP);
	for (float a = 0.0f; a <= 2.0f * M_PI; a += aStep)
	{
		glVertex2f(x + r * cos(a), y + r * sin(a));
	}
	glVertex2f(x + r, y);
	glEnd();
}

void Shapes::FillRPoly(float x, float y, float r, float num)
{
	float aStep = 2.0 * M_PI / floor(num);
	glBegin(GL_TRIANGLE_FAN);
	for (float a = 0.0f; a <= 2.0f * M_PI; a += aStep)
	{
		glVertex2f(x + r * cos(a), y + r * sin(a));
	}
	glVertex2f(x + r, y);
	glEnd();
}

void Shapes::Rect(float x1, float y1, float width, float height, float lineWidth)
{
	// TODO
}

void Shapes::FillRect(float x1, float y1, float width, float height)
{
	// TODO
}

void Shapes::Point(float x, float y, float size)
{
	// TODO
}

void Shapes::Arc(float x, float y, float r, float angle)
{
	// TODO
}

void Shapes::Pie(float x, float y, float r, float angle)
{
	// TODO
}

void Shapes::FillPie(float x, float y, float r, float angle)
{
	float a;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x, y);
	for (a = 0.0f; a <= angle * M_PI / 180.0f; a += angleStep)
	{
		glVertex2f(x + r * cos(a), y + r * sin(a));
	}
	glVertex2f(x + r * cos(a), y + r * sin(a));
	glEnd();
}