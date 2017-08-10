#include "ArrayStack.h"
#include "ArrayStack.cpp"

int main(void)
{
	ArrayStack<int> stack;
	for (int i = 1; i <= 5; ++i)
		stack.sPush(i);

	while (!stack.sIsEmpty())
		cout << stack.sPop() << " ";
	return 0;
}