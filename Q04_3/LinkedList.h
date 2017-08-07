#pragma once
#include "Node.h"

typedef Point* LData;

class LinkedList
{
private:
	Node* head;
	Node* curNode;
	Node* prevNode;
	int numOfNodes;
	int(*cmp)(const LData& d1, const LData& d2);
public:
	LinkedList();
	void listInit();
	bool lInsert(const LData& data);
	bool fInsert(const LData& data);
	bool sInsert(const LData& data);
	bool lFirst(LData* const pData);
	bool lNext(LData* const pData);
	LData lRemove();
	int lCount() const;
	void setSortRule(int(*cmp)(const LData& d1, const LData& d2));
};