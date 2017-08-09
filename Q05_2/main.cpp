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

		cout << endl;
	}

	if (list.lFirst(&data))
	{
		if ((int)data % 2 == 1)
			list.lRemove();

		while (list.lNext(&data))
			if ((int)data % 2 == 1)
				list.lRemove();
	}

	if (list.lFirst(&data))
	{
		cout << data << " ";
		while (list.lNext(&data))
			cout << data << " ";

		cout << endl;
	}
	else
		cout << "리스트가 비어있습니다." << endl;
	return 0;
}