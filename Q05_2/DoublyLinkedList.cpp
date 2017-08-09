#include "DoublyLinkedList.h"

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList()
	: head(new Node<T>(nullptr, 0, nullptr)), cur(nullptr), tail(new Node<T>(nullptr, 0, nullptr)), numOfNodes(0)
{
	head->next = tail;
	tail->prev = head;
}

template <typename T>
bool DoublyLinkedList<T>::lInsert(const T &data)
{
	Node<T> *newNode = new Node<T>(nullptr, data, tail);
	if (newNode == nullptr)
		return false;

	tail->prev->next = newNode;
	newNode->prev = tail->prev;
	tail->prev = newNode;

	++numOfNodes;
	return true;
}

template <typename T>
bool DoublyLinkedList<T>::lFirst(T *const pData)
{
	if (head->next == tail)
		return false;
	cur = head->next;

	*pData = cur->data;
	return true;
}

template <typename T>
bool DoublyLinkedList<T>::lNext(T *const pData)
{
	if (cur->next == tail)
		return false;
	cur = cur->next;

	*pData = cur->data;
	return true;
}

// template <typename T>
// bool DoublyLinkedList<T>::lPrev(T *const pData)
// {
// 	if (cur->prev == head)
// 		return false;
// 	cur = cur->prev;
// 
// 	*pData = cur->data;
// 	return true;
// }

template <typename T>
T DoublyLinkedList<T>::lRemove()
{
	Node<T>* rmNode = cur;
	T rmData = rmNode->data;

	cur->prev->next = cur->next;
	cur->next->prev = cur->prev;
	
	cur = cur->prev;
	
	delete rmNode;
	
	--numOfNodes;
	return rmData;
}

template <typename T>
int DoublyLinkedList<T>::lCount()
{
	return numOfNodes;
}