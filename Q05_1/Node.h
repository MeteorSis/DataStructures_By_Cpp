#pragma once
#include "Employee.h"

typedef Employee* Data;

struct Node
{
	Data data;
	Node * next;
	Node(const Data &data, Node * const next);
};