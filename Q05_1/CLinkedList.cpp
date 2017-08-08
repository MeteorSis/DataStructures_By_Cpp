#include "CLinkedList.h"

CLinkedList::CLinkedList()
	: tail(nullptr), cur(nullptr), before(nullptr), numOfData(0) {}

void CLinkedList::listInit()
{
	tail = cur = before = nullptr;
	numOfData = 0;
}

bool CLinkedList::lInsert(const Data &data)
{
	Node *newNode = new Node(data, nullptr);
	if (newNode == nullptr)
		return false;

	if (tail == nullptr)
		newNode->next = newNode;
	else
	{
		newNode->next = tail->next;
		tail->next = newNode;
	}
	tail = newNode;
	++numOfData;
}

bool CLinkedList::lInsertFront(const Data &data)
{
	Node *newNode = new Node(data, nullptr);
	if (newNode == nullptr)
		return false;

	if (tail == nullptr)
	{
		newNode->next = newNode;
		tail = newNode;
	}
	else
	{
		newNode->next = tail->next;
		tail->next = newNode;
	}
	++numOfData;
}

bool CLinkedList::lFirst(Data * pData)
{
	if (tail == nullptr)
		return false;

	before = tail;
	cur = tail->next;
	
	*pData = cur->data;
	return true;
}

bool CLinkedList::lNext(Data * pData)
{
	if (tail == nullptr)
		return false;
	
	before = cur;
	cur = cur->next;

	*pData = cur->data;
	return true;
}

Data CLinkedList::lRemove()
{
	Data rmData = cur->data;
	if (cur->next == cur)
	{
		delete cur;
		listInit();
	}
	else
	{
		before->next = cur->next;
		if (cur == tail)
			tail = before;
		delete cur;
		cur = before;		
		--numOfData;
	}
	return rmData;
}

int CLinkedList::lCount()
{
	return numOfData;
}