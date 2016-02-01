#pragma once
#include "IRenderable.h"
class Resource :
	public IRenderable
{
public:
	Resource();
	~Resource();
	virtual void Render();
	virtual void Update(double deltaTime);
};

