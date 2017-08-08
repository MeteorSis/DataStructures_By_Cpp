#pragma once
#include "Node.h"

class CLinkedList
{
private:
	Node * tail;
	Node * cur;
	Node * before;
	int numOfData;
public:
	CLinkedList();
	void listInit();
	bool lInsert(const Data &data);
	bool lInsertFront(const Data &data);

	bool lFirst(Data * pData);
	bool lNext(Data * pData);
	Data lRemove();
	int lCount();
};