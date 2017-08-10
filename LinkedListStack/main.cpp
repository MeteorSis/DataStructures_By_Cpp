#include "LinkedListStack.h"
#include "LinkedListStack.cpp"

int main(void)
{
	LinkedListStack<int> stack;
	for (int i = 1; i <= 5; ++i)
		stack.sPush(i);

	while (!stack.sIsEmpty())
		cout << stack.sPop() << " ";
	return 0;
}