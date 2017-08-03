#pragma once
#include <iostream>
using std::cout;
using std::endl;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int xpos = 0, int ypos = 0);
	void setPointPos(int xpos, int ypos);
	void showPointPos();
	int pointCmp(Point *pos);
};