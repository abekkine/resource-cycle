#pragma once

class IRenderable {
	virtual void Render() = 0;
	virtual void Update(double deltaTime) = 0;
};