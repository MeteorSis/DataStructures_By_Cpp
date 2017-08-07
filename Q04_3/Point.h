#pragma once
#include <iostream>
using std::cout;
using std::endl;

struct Point
{
	int xpos, ypos;
	Point(int xpos = 0, int ypos = 0);
	void setPointPos(int xpos, int ypos);
	void showPointPos();
	int pointCmp(Point *pos);
};