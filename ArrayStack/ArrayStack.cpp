#include "ArrayStack.h"

template <typename T, size_t len>
ArrayStack<T, len>::ArrayStack()
	: topIndex(-1) {}

template <typename T, size_t len>
bool ArrayStack<T, len>::sPush(const T &data)
{
	if (topIndex == len - 1)
	{
		cout << "Stack Overflow!" << endl;
		return false;
	}

	arr[++topIndex] = data;
	return true;
}

template <typename T, size_t len>
T ArrayStack<T, len>::sPop()
{
	if (sIsEmpty())
	{
		cout << "Stack Underflow!" << endl;
		exit(-1);
	}

	return arr[topIndex--];
}

template <typename T, size_t len>
T ArrayStack<T, len>::sPeek()
{
	if (sIsEmpty())
	{
		cout << "Stack Underflow!" << endl;
		exit(-1);
	}

	return arr[topIndex];
}

template <typename T, size_t len>
bool ArrayStack<T, len>::sIsEmpty()
{
	if (topIndex == -1)
		return true;
	else
		return false;
}