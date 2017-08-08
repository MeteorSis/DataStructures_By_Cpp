#include <iostream>
#include "CLinkedList.h"

using std::cout;
using std::endl;

Data whoIsNightNuty(CLinkedList * const list, const string &name, const int &count);

int main(void)
{
	CLinkedList list;
	Employee* employee;
	list.lInsert(new Employee(1111, "A"));
	list.lInsert(new Employee(2222, "B"));
	list.lInsert(new Employee(3333, "C"));
	list.lInsert(new Employee(4444, "D"));

	if (list.lFirst(&employee))
	{
		cout << employee->name << "->";

		for (int i = 0; i < list.lCount() - 1; ++i)
			if (list.lNext(&employee))
				cout << employee->name << "->";
	}
	else
		cout << "����Ʈ�� ����ֽ��ϴ�." << endl;

	cout << endl << endl;
	Data foundEmployee = whoIsNightNuty(&list, "B", 7);
	if (foundEmployee != nullptr)
		cout << "B�� ������ �� �� 7�� �ڿ� �ٹ��ڴ� " << foundEmployee->name << "�Դϴ�." << endl;
	else
		cout << "ã�� ����� �������� �ʽ��ϴ�." << endl;

	return 0;
}

Data whoIsNightNuty(CLinkedList * const list, const string &name, const int &count)
{
	Employee *employee;
	if (list->lFirst(&employee))
	{
		bool isFound=false;
		if (employee->name == name)
			isFound = true;
		for (int i = 0; !isFound && i < list->lCount() - 1; ++i)
		{
			list->lNext(&employee);
			if (employee->name == name)
			{
				isFound = true;
				break;
			}
		}
		if (isFound)
		{
			for (int i = 0; i < count; ++i) 
				list->lNext(&employee);
			return employee;
		}
		else
			return nullptr;
	}
	else
		cout << "����Ʈ�� ����ֽ��ϴ�." << endl;
}