#include "ArrayList.h"
#include "ArrayList.cpp"

int main(void)
{
	ArrayList<LData> list;
 	NameCard *ppos;

	list.LInsert(new NameCard("�ֱ���", "010-7528-3580"));
	list.LInsert(new NameCard("������", "010-1234-5678"));
	list.LInsert(new NameCard("�ձ⹮", "010-5678-1234"));
	
	cout << "���� �������� �� : " << list.LCount() << endl;

	if (list.LFirst(&ppos))
	{
		ppos->showNameCardInfo();
		
		while (list.LNext(&ppos))
			ppos->showNameCardInfo();
	}
	cout << endl << endl;

	cout << "�˻��� �̸� : ";
	if (list.LFirst(&ppos))
	{
		if (ppos->nameCmp("�ֱ���") == 0)
			ppos->showNameCardInfo();

		while (list.LNext(&ppos))
			if (ppos->nameCmp("�ֱ���") == 0)
				ppos->showNameCardInfo();
	}
	cout << endl << endl;

	if (list.LFirst(&ppos))
	{
		if (ppos->nameCmp("������") == 0)
			ppos->changePhoneNum("010-1111-1111");

		while (list.LNext(&ppos))
			if (ppos->nameCmp("������") == 0)
				ppos->changePhoneNum("010-1111-1111");
	}

	cout << "���� �Ϸ�" << endl;
	cout << "���� �������� �� : " << list.LCount() << endl;

	if (list.LFirst(&ppos))
	{
		ppos->showNameCardInfo();

		while (list.LNext(&ppos))
			ppos->showNameCardInfo();
	}
	cout << endl << endl;

	if (list.LFirst(&ppos))
	{
		if (ppos->nameCmp("�ձ⹮") == 0)
			list.LRemove();

		while (list.LNext(&ppos))
			if (ppos->nameCmp("�ձ⹮") == 0)
				list.LRemove();
	}

	cout << "���� �������� �� : " << list.LCount() << endl;

	if (list.LFirst(&ppos))
	{
		ppos->showNameCardInfo();

		while (list.LNext(&ppos))
			ppos->showNameCardInfo();
	}
	cout << endl << endl;

	return 0;
}