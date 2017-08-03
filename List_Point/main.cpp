#include "ArrayList.h"
#include "ArrayList.cpp"

int main(void)
{
	ArrayList<LData> list;
	LData cmpPos(2, 0);
	LData ppos(0, 0);

	list.LInsert(LData(2, 1));
	list.LInsert(LData(2, 2));
	list.LInsert(LData(3, 1));
	list.LInsert(LData(3, 2));
	
	cout << "현재 데이터의 수 : " << list.LCount() << endl;

	if (list.LFirst(&ppos))
	{
		ppos.showPointPos();
		
		while (list.LNext(&ppos))
			ppos.showPointPos();
	}
	cout << endl << endl;

	if (list.LFirst(&ppos))
	{
		if (ppos.pointCmp(&cmpPos)==1)
			list.LRemove();

		while (list.LNext(&ppos))
			if (ppos.pointCmp(&cmpPos)==1)
				list.LRemove();
	}

	cout << "현재 데이터의 수 : " << list.LCount() << endl;

	if (list.LFirst(&ppos))
	{
		ppos.showPointPos();

		while (list.LNext(&ppos))
			ppos.showPointPos();
	}
	cout << endl << endl;

	list.ListInit();
	for (int i = 1; i <= 9; ++i)
		list.LInsert(Point(i, i+1));

	cout << "현재 데이터의 수 : " << list.LCount() << endl;

	if (list.LFirst(&ppos))
	{
		ppos.showPointPos();

		while (list.LNext(&ppos))
			ppos.showPointPos();
	}
	cout << endl << endl;

	return 0;
}