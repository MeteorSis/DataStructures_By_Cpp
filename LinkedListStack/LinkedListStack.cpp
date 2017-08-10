#include "LinkedListStack.h"

template <typename T>
LinkedListStack<T>::LinkedListStack()
	: head(nullptr) {}

template <typename T>
void LinkedListStack<T>::sPush(const T& data)
{
	Node<T>* newNode = new Node<T>(data, head);
	head = newNode;
}

template <typename T>
T LinkedListStack<T>::sPop()
{
	if (sIsEmpty())
	{
		cout << "Stack Underflow" << endl;
		exit(-1);
	}

	Node<T>* rmNode = head;
	T rmData = rmNode->data;

	head = head->next;
	
	delete rmNode;
	return rmData;
}

template <typename T>
T LinkedListStack<T>::sPeek()
{
	if (sIsEmpty())
	{
		cout << "Stack Underflow" << endl;
		exit(-1);
	}
	return head->data;
}

template <typename T>
bool LinkedListStack<T>::sIsEmpty()
{
	if (head == nullptr)
		return true;
	else
		return false;
}