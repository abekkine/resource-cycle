#pragma once
#include "IRenderable.h"

class Planet : public IRenderable
{
public:
	Planet();
	~Planet();

	virtual void Render();
	virtual void Update(double deltaTime);
};

