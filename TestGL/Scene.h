#pragma once
#include "IRenderable.h"
class Scene :
	public IRenderable
{
public:
	Scene();
	~Scene();
	void Init();
	virtual void Render();
	virtual void Update(double deltaTime);
};

