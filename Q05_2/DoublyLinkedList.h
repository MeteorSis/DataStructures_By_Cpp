#pragma once
#include "Node.h"
#include "Node.cpp"

template <typename T>
class DoublyLinkedList
{
private:
	Node<T> *head;
	Node<T> *cur;
	Node<T> *tail;
	int numOfNodes;
public:
	DoublyLinkedList();
	bool lInsert(const T &data);
	bool lFirst(T *const pData);
	bool lNext(T *const pData);
	//bool lPrev(T *const pData);
	T lRemove();
	int lCount();
};