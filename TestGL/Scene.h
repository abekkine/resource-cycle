#pragma once
#include "IRenderable.h"
#include "Planet.h"
class Scene : public IRenderable
{
public:
	Scene();
	~Scene();
	void Init();
	virtual void Render();
	virtual void Update(double deltaTime);
private:
	Planet* planet;
};

