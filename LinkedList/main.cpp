#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	LinkedList linkedList;
	LData data;
	int readData;

	while (1)
	{
		cout << "�ڿ��� �Է� : ";
		cin >> readData;
		if (readData < 1)
			break;

		if (!linkedList.lInsert(readData))
			cout << "���� ����" << endl;
	}
	if (linkedList.lFirst(&data))
	{
		cout << endl << "�Է¹��� �������� ��ü ���!" << endl << "DummyNode->" << data << "->";

		while (linkedList.lNext(&data))
			cout << data << "->";
		cout << "nullptr" << endl;
	}
	else
		cout << "����� �ڿ����� �����ϴ�." << endl;

	if (linkedList.lFirst(&data))
	{
		if (data % 2 == 0)
			linkedList.lRemove();

		while (linkedList.lNext(&data))
			if (data % 2 == 0)
				linkedList.lRemove();
		cout << "��� ���� �Ϸ�" << endl;
	}
	else
		cout << "����� �ڿ����� �����ϴ�." << endl;

	if (linkedList.lFirst(&data))
	{
		cout << endl << "�Է¹��� �������� ��ü ���!" << endl << "DummyNode->" << data << "->";

		while (linkedList.lNext(&data))
			cout << data << "->";
		cout << "nullptr" << endl;
	}
	else
		cout << "����� �ڿ����� �����ϴ�." << endl;
	return 0;
}