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

	cout << "���� �������� �� : " << list.LCount() << endl;

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

	cout << "���� �������� �� : " << list.LCount() << endl;

	if (list.LFirst(&data))
	{
		cout << data << " " << endl;

		while (list.LNext(&data))
			cout << data << " " << endl;
	}
	cout << endl << endl;

	list.ListInit();
	for (int i = 1; i <= 9; ++i)
		list.LInsert(i);

	cout << "���� �������� �� : " << list.LCount() << endl;

	if (list.LFirst(&data))
	{
		cout << data << " " << endl;

		while (list.LNext(&data))
			cout << data << " " << endl;
	}
	cout << endl << endl;

	int sum = 0;
	if (list.LFirst(&data))
	{
		sum += data;

		while (list.LNext(&data))
			sum += data;
	}
	cout <<"�հ� : "<< sum << " " << endl;

	if (list.LFirst(&data))
	{
		if (data % 2 == 0 || data % 3 == 0)
			list.LRemove();

		while (list.LNext(&data))
			if (data % 2 == 0 || data % 3 == 0)
				list.LRemove();
	}

	cout << "���� �������� �� : " << list.LCount() << endl;

	if (list.LFirst(&data))
	{
		cout << data << " " << endl;

		while (list.LNext(&data))
			cout << data << " " << endl;
	}
	cout << endl << endl;
	return 0;
}