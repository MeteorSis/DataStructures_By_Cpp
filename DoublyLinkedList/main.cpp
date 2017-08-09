#include <iostream>
#include "DoublyLinkedList.h"
#include "DoublyLinkedList.cpp"

using std::cout;
using std::endl;

int main(void)
{
	DoublyLinkedList<double> list;
	double data;
	
	for (double i = 1.1; i <= 8.1; ++i)
		list.lInsert(i);

	if (list.lFirst(&data))
	{
		cout << data << " ";
		while (list.lNext(&data))
			cout << data << " ";

		while(list.lPrev(&data))
			cout << data << " ";

		cout << endl << endl;
	}
	return 0;
}