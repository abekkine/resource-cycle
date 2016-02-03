#pragma once
#include <vector>

#include "IRenderable.h"
#include "Resource.h"

class Planet : public IRenderable
{
public:
	Planet();
	~Planet();
	void SetRadius(double r);
	void SetNumResources(int n);
	void SetRotationSpeed(double w);

	virtual void Render();
	virtual void Update(double deltaTime);

private:
	float theta;
	double radius_;
	double omega_;
	std::vector<Resource*> resources_;
};

