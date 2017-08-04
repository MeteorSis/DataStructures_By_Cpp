#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	LinkedList linkedList;
	Node* data;
	int readData;

	while (1)
	{
		cout << "자연수 입력 : ";
		cin >> readData;
		if (readData < 1)
			break;

		if (!linkedList.lInsert(new Node(readData, nullptr)))
			cout << "삽입 실패" << endl;
	}
	if (linkedList.lFirst(&data))
	{
		cout << endl << "입력받은 데이터의 전체 출력!" << endl << "DummyNode->" << data->num << "->";

		while (linkedList.lNext(&data))
			cout << data->num << "->";
		cout << "nullptr" << endl;
	}
	else
		cout << "저장된 자연수가 없습니다." << endl;

	if (linkedList.lFirst(&data))
	{
		if (data->num % 2 == 0)
			delete linkedList.lRemove();

		while (linkedList.lNext(&data))
			if (data->num % 2 == 0)
				delete linkedList.lRemove();
		cout << "노드 삭제 완료" << endl;
	}
	else
		cout << "저장된 자연수가 없습니다." << endl;

	if (linkedList.lFirst(&data))
	{
		cout << endl << "입력받은 데이터의 전체 출력!" << endl << "DummyNode->" << data->num << "->";

		while (linkedList.lNext(&data))
			cout << data->num << "->";
		cout << "nullptr" << endl;
	}
	else
		cout << "저장된 자연수가 없습니다." << endl;
	return 0;
}