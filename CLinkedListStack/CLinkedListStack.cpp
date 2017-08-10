#include "CLinkedListStack.h"

template <typename T>
void CLinkedListStack<T>::sPush(const T &data)
{
	list.lInsertFront(data);
}

template <typename T>
T CLinkedListStack<T>::sPop()
{
	T popData;
	if (list.lFirst(&popData))
	{
		list.lRemove();
		return popData;
	}
	else
	{
		cerr << "Stack Underflow!" << endl;
		exit(-1);
	}	
}

template <typename T>
T CLinkedListStack<T>::sPeek()
{
	T peekData;
	if (!list.lFirst(&peekData))
	{
		cerr << "Stack Underflow!" << endl;
		exit(-1);
	}
	return peekData;
}

template <typename T>
bool CLinkedListStack<T>::sIsEmpty()
{
	if (list.lCount() == 0)
		return true;
	else
		return false;
}