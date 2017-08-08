#pragma once

typedef int Data;

struct Node
{
	Data data;
	Node * next;
	Node(const Data &data, Node * const next);
};