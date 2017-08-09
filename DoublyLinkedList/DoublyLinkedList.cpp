#include "DoublyLinkedList.h"

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList()
	: head(new Node<T>(nullptr, 0, nullptr)), cur(nullptr), numOfNodes(0) {}

template <typename T>
bool DoublyLinkedList<T>::lInsert(const T &data)
{
	Node<T> *newNode = new Node<T>(head, data, nullptr);
	if (newNode == nullptr)
		return false;

	if (head->next != nullptr)
	{
		newNode->next = head->next;
		head->next->prev = newNode;
	}
	head->next = newNode;

	++numOfNodes;
	return true;
}

template <typename T>
bool DoublyLinkedList<T>::lFirst(T *const pData)
{
	if (head->next == nullptr)
		return false;
	cur = head->next;

	*pData = cur->data;
	return true;
}

template <typename T>
bool DoublyLinkedList<T>::lNext(T *const pData)
{
	if (cur->next == nullptr)
		return false;
	cur = cur->next;

	*pData = cur->data;
	return true;
}

template <typename T>
bool DoublyLinkedList<T>::lPrev(T *const pData)
{
	if (cur->prev == head)
		return false;
	cur = cur->prev;

	*pData = cur->data;
	return true;
}

template <typename T>
T DoublyLinkedList<T>::lRemove()
{
	T rmData = cur->data;

	cur->prev->next = cur->next;
	if(cur->next!=nullptr)
		cur->next->prev = cur->prev;
	
	delete cur;
	return rmData;
}

template <typename T>
int DoublyLinkedList<T>::lCount()
{
	return numOfNodes;
}