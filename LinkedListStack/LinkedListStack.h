#pragma once
#include "Node.h"
#include "Node.cpp"
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class LinkedListStack
{
private:
	Node<T>* head;
public:
	LinkedListStack();
	void sPush(const T& data);
	T sPop();
	T sPeek();
	bool sIsEmpty();
};