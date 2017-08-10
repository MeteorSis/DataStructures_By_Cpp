#pragma once
#include "Node.h"
#include "Node.cpp"

template <typename T>
class CLinkedList
{
private:
	Node<T> * tail;
	Node<T> * cur;
	Node<T> * before;
	int numOfData;
public:
	CLinkedList();
	void listInit();
	bool lInsert(const T &data);
	bool lInsertFront(const T &data);
	bool lFirst(T * pData);
	bool lNext(T * pData);
	T lRemove();
	int lCount();
};