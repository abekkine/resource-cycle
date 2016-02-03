#pragma once
#include "IRenderable.h"
class Resource :
	public IRenderable
{
public:
	Resource(float altitude);
	~Resource();
	virtual void Render();
	virtual void Update(double deltaTime);

private:
	double x, y;
};

