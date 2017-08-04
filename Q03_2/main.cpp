#include "ArrayList.h"
#include "ArrayList.cpp"

int main(void)
{
	ArrayList<LData> list;
 	NameCard *ppos;

	list.LInsert(new NameCard("최기재", "010-7528-3580"));
	list.LInsert(new NameCard("서정오", "010-1234-5678"));
	list.LInsert(new NameCard("손기문", "010-5678-1234"));
	
	cout << "현재 데이터의 수 : " << list.LCount() << endl;

	if (list.LFirst(&ppos))
	{
		ppos->showNameCardInfo();
		
		while (list.LNext(&ppos))
			ppos->showNameCardInfo();
	}
	cout << endl << endl;

	cout << "검색된 이름 : ";
	if (list.LFirst(&ppos))
	{
		if (ppos->nameCmp("최기재") == 0)
			ppos->showNameCardInfo();

		while (list.LNext(&ppos))
			if (ppos->nameCmp("최기재") == 0)
				ppos->showNameCardInfo();
	}
	cout << endl << endl;

	if (list.LFirst(&ppos))
	{
		if (ppos->nameCmp("서정오") == 0)
			ppos->changePhoneNum("010-1111-1111");

		while (list.LNext(&ppos))
			if (ppos->nameCmp("서정오") == 0)
				ppos->changePhoneNum("010-1111-1111");
	}

	cout << "변경 완료" << endl;
	cout << "현재 데이터의 수 : " << list.LCount() << endl;

	if (list.LFirst(&ppos))
	{
		ppos->showNameCardInfo();

		while (list.LNext(&ppos))
			ppos->showNameCardInfo();
	}
	cout << endl << endl;

	if (list.LFirst(&ppos))
	{
		if (ppos->nameCmp("손기문") == 0)
			list.LRemove();

		while (list.LNext(&ppos))
			if (ppos->nameCmp("손기문") == 0)
				list.LRemove();
	}

	cout << "현재 데이터의 수 : " << list.LCount() << endl;

	if (list.LFirst(&ppos))
	{
		ppos->showNameCardInfo();

		while (list.LNext(&ppos))
			ppos->showNameCardInfo();
	}
	cout << endl << endl;

	return 0;
}