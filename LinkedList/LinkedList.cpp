#include "LinkedList.h"

LinkedList::LinkedList()
	:numOfNodes(0), cmp(nullptr)
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
	cmp = nullptr;
}

bool LinkedList::lInsert(const LData& data)
{
	Node * insertNode = new Node(data, head->next);
	if (insertNode == nullptr)
		return false;

	head->next = insertNode;

	++numOfNodes;
	return true;		
}

bool LinkedList::lFirst(LData* const pData)
{
	if (head->next == nullptr)
		return false;

	prevNode = head;
	curNode = head->next;
	*pData = curNode->num;
	return true;
}

bool LinkedList::lNext(LData* const pData)
{
	if (curNode->next == nullptr)
		return false;
	
	prevNode = curNode;
	curNode = curNode->next;
	*pData = curNode->num;
	return true;
}

LData LinkedList::lRemove()
{
	LData rmData = curNode->num;
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

void LinkedList::setSortRule(int(*&cmp)(const LData& d1, const LData& d2))
{
	this->cmp = cmp;
}