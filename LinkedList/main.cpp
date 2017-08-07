#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	LinkedList linkedList;
	Node* data;
	int readData;

	while (1)
	{
		cout << "�ڿ��� �Է� : ";
		cin >> readData;
		if (readData < 1)
			break;

		if (!linkedList.lInsert(new Node(readData, nullptr)))
			cout << "���� ����" << endl;
	}
	if (linkedList.lFirst(&data))
	{
		cout << endl << "�Է¹��� �������� ��ü ���!" << endl << "DummyNode->" << data->num << "->";

		while (linkedList.lNext(&data))
			cout << data->num << "->";
		cout << "nullptr" << endl;
	}
	else
		cout << "����� �ڿ����� �����ϴ�." << endl;

	if (linkedList.lFirst(&data))
	{
		//if (data->num % 2 == 1)
			delete linkedList.lRemove();

		while (linkedList.lNext(&data))
			//if (data->num % 2 == 1)
				delete linkedList.lRemove();
		cout << "��� ���� �Ϸ�" << endl;
	}
	else
		cout << "����� �ڿ����� �����ϴ�." << endl;

	if (linkedList.lFirst(&data))
	{
		cout << endl << "�Է¹��� �������� ��ü ���!" << endl << "DummyNode->" << data->num << "->";

		while (linkedList.lNext(&data))
			cout << data->num << "->";
		cout << "nullptr" << endl;
	}
	else
		cout << "����� �ڿ����� �����ϴ�." << endl;
	return 0;
}