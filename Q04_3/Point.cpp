#include "Point.h"

Point::Point(int xpos, int ypos)
	:xpos(xpos), ypos(ypos){}

void Point::setPointPos(int xpos, int ypos)
{
	this->xpos = xpos;
	this->ypos = ypos;
}

void Point::showPointPos()
{
	cout << "[" << xpos << ", " << ypos << "]" << endl;
}

int Point::pointCmp(Point *pos)
{
	if (xpos == pos->xpos && ypos == pos->ypos)
		return 0;
	else if (xpos == pos->xpos)
		return 1;
	else if (ypos == pos->ypos)
		return 2;
	else
		return -1;
}