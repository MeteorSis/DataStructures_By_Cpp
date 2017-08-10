#include "CLinkedListStack.h"
#include "CLinkedListStack.cpp"

int main(void)
{
	CLinkedListStack<int> stack;
	for (int i = 1; i <= 5; ++i)
		stack.sPush(i);

	while (!stack.sIsEmpty())
		cout << stack.sPop() << " ";

	cout << endl;
	cout << stack.sPeek() << endl;
	return 0;
}