#include "LinkedList.h"

int whoIsPrecede(const LData& data1, const LData& data2)
{
	if (data1->xpos < data2->xpos)
		return 0;
	else if (data1->xpos == data2->xpos)
	{
		if (data1->ypos < data2->ypos)
			return 0;
		else
			return 1;
	}
	else
		return 1;
}

int main(void)
{
	LinkedList list;
	Point cmpPos(2, 0);
	Point *ppos = new Point(0, 0);
	list.setSortRule(whoIsPrecede);

	list.lInsert(new Point(3, 2));
	list.lInsert(new Point(3, 1));
	list.lInsert(new Point(2, 2));
	list.lInsert(new Point(2, 1));

	cout << "현재 데이터의 수 : " << list.lCount() << endl;

	if (list.lFirst(&ppos))
	{
		ppos->showPointPos();

		while (list.lNext(&ppos))
			ppos->showPointPos();
	}
	cout << endl << endl;

	if (list.lFirst(&ppos))
	{
		if (ppos->pointCmp(&cmpPos) == 1)
			list.lRemove();

		while (list.lNext(&ppos))
			if (ppos->pointCmp(&cmpPos) == 1)
				list.lRemove();
	}

	cout << "현재 데이터의 수 : " << list.lCount() << endl;

	if (list.lFirst(&ppos))
	{
		ppos->showPointPos();

		while (list.lNext(&ppos))
			ppos->showPointPos();
	}
	cout << endl << endl;

	list.listInit();
	list.setSortRule(whoIsPrecede);
	for (int i = 9; i >= 1; --i)
		list.lInsert(new Point(i, i + 1));

	cout << "현재 데이터의 수 : " << list.lCount() << endl;

	if (list.lFirst(&ppos))
	{
		ppos->showPointPos();

		while (list.lNext(&ppos))
			ppos->showPointPos();
	}
	cout << endl << endl;

	return 0;
}