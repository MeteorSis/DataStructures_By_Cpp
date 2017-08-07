#include "LinkedList.h"

LinkedList::LinkedList()
	:numOfNodes(0), cmp(nullptr)
{
	head = new Node(new Point(0, 0), nullptr);
	curNode = head;
}

void LinkedList::listInit()
{
	if (head != nullptr)
		delete head;
	numOfNodes = 0;
	head = new Node(new Point(0, 0), nullptr);
	curNode = head;
	cmp = nullptr;
}

bool LinkedList::lInsert(const LData& data)
{
	if (cmp == nullptr)
		return fInsert(data);
	else
		return sInsert(data);
}

bool LinkedList::fInsert(const LData& data)
{
	Node * insertNode = new Node(data, head->next);
	if (insertNode == nullptr)
		return false;

	head->next = insertNode;

	++numOfNodes;
	return true;
}

bool LinkedList::sInsert(const LData& data)
{
	Node * insertNode = new Node(data, nullptr);
	if (insertNode == nullptr)
		return false;
	
	Node * pos = head;
	while (pos->next != nullptr && cmp(data, pos->next->pos) != 0)
		pos = pos->next;
	insertNode->next = pos->next;
	pos->next = insertNode;

	++numOfNodes;
	return true;
}

bool LinkedList::lFirst(LData* const pData)
{
	if (head->next == nullptr)
		return false;

	prevNode = head;
	curNode = head->next;
	*pData = curNode->pos;
	return true;
}

bool LinkedList::lNext(LData* const pData)
{
	if (curNode->next == nullptr)
		return false;
	
	prevNode = curNode;
	curNode = curNode->next;
	*pData = curNode->pos;
	return true;
}

LData LinkedList::lRemove()
{
	LData rmData = curNode->pos;
	prevNode->next = curNode->next;
	delete curNode;
	curNode = prevNode;
	--numOfNodes;
	return rmData;
}

int LinkedList::lCount() const
{
	return numOfNodes;
}

void LinkedList::setSortRule(int(*cmp)(const LData& d1, const LData& d2))
{
	this->cmp = cmp;
}