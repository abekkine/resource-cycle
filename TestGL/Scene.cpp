#include "Scene.h"

Scene::Scene()
{
	planet = new Planet();
}

Scene::~Scene()
{
	delete planet;
}

void Scene::Init()
{
	planet->SetRadius(200.0);
	planet->SetNumResources(5);
	planet->SetRotationSpeed(1.0);
}

void Scene::Render()
{
	planet->Render();
}

void Scene::Update(double deltaTime)
{

}