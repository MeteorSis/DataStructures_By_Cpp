#pragma once
#include "CLinkedList.h"
#include "CLinkedList.cpp"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

template <typename T>
class CLinkedListStack
{
private:
	CLinkedList<T> list;
public:
	void sPush(const T &data);
	T sPop();
	T sPeek();
	bool sIsEmpty();
};