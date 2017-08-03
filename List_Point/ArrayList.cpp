#include "ArrayList.h"

template <typename Ty, int len = 100>
ArrayList<Ty, len>::ArrayList()
	:arr(new array<Ty, len>), curPos(-1), size(0) {}

template <typename Ty, int len = 100>
ArrayList<Ty, len>::~ArrayList()
{
	delete arr;
}

template <typename Ty, int len = 100>
void ArrayList<Ty, len>::ListInit()
{
	delete arr;
	arr = new array<Ty, len>;
	curPos = -1;
	size = 0;
}

template <typename Ty, int len = 100>
void ArrayList<Ty, len>::LInsert(LData data)
{
	if (size < len)
		(*arr)[size++] = data;
	else
	{
		cout << "저장이 불가능합니다." << endl;
		return;
	}
}

template <typename Ty, int len = 100>
bool ArrayList<Ty, len>::LFirst(LData* pData)
{
	if (size == 0)
		return false;

	curPos = 0;
	*pData = (*arr)[curPos];
	return true;
}

template <typename Ty, int len = 100>
bool ArrayList<Ty, len>::LNext(LData* pData)
{
	if (++curPos >= size)
		return false;

	*pData = (*arr)[curPos];
	return true;
}

template <typename Ty, int len = 100>
LData ArrayList<Ty, len>::LRemove()
{
	LData rmData = (*arr)[curPos];
	for (int i = curPos; i < size - 1; ++i)
		(*arr)[i] = (*arr)[i + 1];
	
	size--;
	curPos--;

	return rmData;
}

template <typename Ty, int len = 100>
int ArrayList<Ty, len>::LCount() const
{
	return size;
}
