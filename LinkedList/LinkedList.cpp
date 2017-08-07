#include "LinkedList.h"

LinkedList::LinkedList()
	:numOfNodes(0) 
{
	head = new Node(-1, nullptr);
	curNode = head;
}

void LinkedList::listInit()
{
	if (head != nullptr)
		delete head;
	numOfNodes = 0;
	head = new Node(-1, nullptr);
	curNode = head;
}

bool LinkedList::lInsert(const LData& data)
{
	if (data == nullptr)
		return false;

	data->next = head->next;
	head->next = data;

	++numOfNodes;
	return true;		
}

bool LinkedList::lFirst(LData* const pData)
{
	if (head->next == nullptr)
		return false;

	prevNode = head;
	curNode = head->next;
	*pData = curNode;
	return true;
}

bool LinkedList::lNext(LData* const pData)
{
	if (curNode->next == nullptr)
		return false;
	
	prevNode = curNode;
	curNode = curNode->next;
	*pData = curNode;
	return true;
}

LData LinkedList::lRemove()
{
	LData rmData = curNode;
	prevNode->next = curNode->next;
	curNode = prevNode;
	--numOfNodes;
	return rmData;
}

int LinkedList::lCount() const
{
	return numOfNodes;
}

void LinkedList::setSortRule(int(*&cmp)(const LData& d1, const LData& d2))
{
	this->cmp = cmp;
}