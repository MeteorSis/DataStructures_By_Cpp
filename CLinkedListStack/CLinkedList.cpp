#include "CLinkedList.h"

template <typename T>
CLinkedList<T>::CLinkedList()
	: tail(nullptr), cur(nullptr), before(nullptr), numOfData(0) {}

template <typename T>
void CLinkedList<T>::listInit()
{
	tail = cur = before = nullptr;
	numOfData = 0;
}

template <typename T>
bool CLinkedList<T>::lInsert(const T &data)
{
	Node<T> *newNode = new Node<T>(data, nullptr);
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

template <typename T>
bool CLinkedList<T>::lInsertFront(const T &data)
{
	Node<T> *newNode = new Node<T>(data, nullptr);
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
	return true;
}

template <typename T>
bool CLinkedList<T>::lFirst(T * pData)
{
	if (tail == nullptr)
		return false;

	before = tail;
	cur = tail->next;
	
	*pData = cur->data;
	return true;
}

template <typename T>
bool CLinkedList<T>::lNext(T * pData)
{
	if (tail == nullptr)
		return false;
	
	before = cur;
	cur = cur->next;

	*pData = cur->data;
	return true;
}

template <typename T>
T CLinkedList<T>::lRemove()
{
	T rmData = cur->data;
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

template <typename T>
int CLinkedList<T>::lCount()
{
	return numOfData;
}