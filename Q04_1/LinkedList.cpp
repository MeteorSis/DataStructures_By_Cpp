#include "LinkedList.h"

LinkedList::LinkedList()
	:tail(nullptr), numOfNodes(0) 
{
	head = new Node(-1, nullptr);
	curNode = head;
}

void LinkedList::listInit()
{
	tail = nullptr;
	numOfNodes = 0;
	head = new Node(-1, nullptr);
	curNode = head;
}

bool LinkedList::lInsert(const LData& data)
{
	if (data == nullptr)
		return false;

	if (tail == nullptr)
	{
		head->next = data;
		tail = data;
	}
	else
	{
		tail->next = data;
		tail = tail->next;
	}
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
	
	if (curNode == head->next)
	{
		if (head->next == tail)
			head->next = tail = nullptr;
		else
			head->next = curNode->next;		
	}
	else
	{
		if (curNode == tail)
			tail = prevNode;
		else
			prevNode->next = curNode->next;
	}
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