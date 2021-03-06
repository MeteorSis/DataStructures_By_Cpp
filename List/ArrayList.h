#pragma once
#include <iostream>
#include <array>
using std::cout;
using std::endl;
using std::array;

typedef int LData;

template <typename Ty, int len=100>
class ArrayList
{
private:
	array<Ty, len> *arr;
	int curPos;
	int size;
public:
	ArrayList();
	~ArrayList();
	void ListInit();
	void LInsert(LData data);
	bool LFirst(LData* pData);
	bool LNext(LData* pData);
	LData LRemove();
	int LCount() const;
};

