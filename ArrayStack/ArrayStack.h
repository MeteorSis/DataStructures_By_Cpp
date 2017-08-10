#pragma once
#include <array>
#include <iostream>

using std::cout;
using std::endl;
using std::array;

template <typename T, size_t len=100>
class ArrayStack
{
private:
	array<T, len> arr;
	int topIndex;
public:
	ArrayStack();
	bool sPush(const T &data);
	T sPop();
	T sPeek();
	bool sIsEmpty();
};