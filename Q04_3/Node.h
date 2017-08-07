#pragma once
#include "Point.h"
struct Node
{
	Point* pos;
	Node * next;
	Node(Point* pos, Node * const next);
};