#include <iostream>
#include "ArrayList.h"
#include "ArrayList.cpp"

using std::cout;
using std::endl;

int main(void)
{
	ArrayList<int> list;
	LData data;

	list.LInsert(11);
	list.LInsert(11);
	list.LInsert(22);
	list.LInsert(22);
	list.LInsert(33);
	list.LInsert(11);
	list.LInsert(22);
	list.LInsert(22);
	list.LInsert(33);
	list.LInsert(22);
	list.LInsert(33);
	list.LInsert(11);
	list.LInsert(22);

	cout << "현재 데이터의 수 : " << list.LCount() << endl;

	if (list.LFirst(&data))
	{
		cout << data << " " << endl;

		while (list.LNext(&data))
			cout << data << " " << endl;
	}
	cout << endl << endl;

	if (list.LFirst(&data))
	{
		if (data == 33)
			list.LRemove();

		while (list.LNext(&data))
			if (data == 33)
				list.LRemove();
	}

	cout << "현재 데이터의 수 : " << list.LCount() << endl;

	if (list.LFirst(&data))
	{
		cout << data << " " << endl;

		while (list.LNext(&data))
			cout << data << " " << endl;
	}
	cout << endl << endl;
	return 0;
}