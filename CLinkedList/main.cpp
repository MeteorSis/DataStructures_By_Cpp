#include <iostream>
#include "CLinkedList.h"

using std::cout;
using std::endl;

int main(void)
{
	CLinkedList list;
	int data, nodeNum;
	
	list.lInsert(3);
	list.lInsert(4);
	list.lInsert(5);
	list.lInsertFront(2);
	list.lInsertFront(1);

	if (list.lFirst(&data))
	{
		cout << data << " ";

		for (int i = 0; i < list.lCount() * 3 - 1; ++i)
			if (list.lNext(&data))
				cout << data << " ";
	}
	cout << endl;

	nodeNum = list.lCount();

	if (nodeNum != 0)
	{
		list.lFirst(&data);
		//if (data % 2 == 0)
			list.lRemove();

		for (int i = 0; i < nodeNum - 1; ++i)
		{
			list.lNext(&data);
			//if (data % 2 == 0)
				list.lRemove();
		}
	}

	
	if (list.lFirst(&data))
	{
		cout << data << " ";

		for (int i = 0; i < list.lCount() - 1; ++i)
			if (list.lNext(&data))
				cout << data << " ";
	}
	else
		cout << "리스트가 비어있습니다." << endl;

	list.lInsert(3);
	list.lInsert(4);
	list.lInsert(5);
	list.lInsertFront(2);
	list.lInsertFront(1);

	if (list.lFirst(&data))
	{
		cout << data << " ";
		
		for (int i = 0; i < list.lCount() - 1; ++i)
			if (list.lNext(&data))
				cout << data << " ";
	}
	else
		cout << "리스트가 비어있습니다." << endl;
	return 0;
}