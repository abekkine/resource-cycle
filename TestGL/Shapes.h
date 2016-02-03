#pragma once
class Shapes
{
private:
	static float angleStep;
public:
	static void Circle(float x, float y, float r, float width);
	static void Line(float x1, float y1, float x2, float y2, float width);
	static void Disk(float x, float y, float r);
	static void Rect(float x1, float y1, float width, float height, float lineWidth);
	static void FillRect(float x1, float y1, float width, float height);
	static void Point(float x, float y, float size);
	static void RPoly(float x, float y, float r, float num, float width);
	static void FillRPoly(float x, float y, float r, float num);
	static void Arc(float x, float y, float r, float angle);
	static void Pie(float x, float y, float r, float angle);
	static void FillPie(float x, float y, float r, float angle);
};

