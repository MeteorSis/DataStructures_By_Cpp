#include <iostream>
#include <array>
#include "LinearSearch.h"
#include "LinearSearch.cpp"
#include "test.h"

using std::array;
using std::cout;
using std::endl;

int main(void)
{
	array<int, 5> arr{ 3, 5, 2, 4, 9 };
	LinearSearch lSearch;
	int idx=lSearch.LSearch(arr, 2);
	if (idx == -1)
		cout << "Ž�� ����" << endl;
	else
		cout << "Ÿ�� ���� �ε��� : " << idx << endl;

	array<double, 7> arr2{ 3.1, 5.2, 2.3, 4.2, 9.4, 8.2, 1.1 };
	int idx2 = lSearch.LSearch(arr2, 8.2);
	if (idx2 == -1)
		cout << "Ž�� ����" << endl;
	else
		cout << "Ÿ�� ���� �ε��� : " << idx2 << endl;


// 	test t1(4, 4.2);
// 	test t2(4, 4.2);
// 	if (t1 == t2)
// 		cout << "����" << endl;
// 	else
// 		cout << "�ٸ�" << endl;
// 
// 	test* tPtr1 = new test(2, 3.5);
// 	test* tPtr2 = new test(2, 3.5);
// 	if (*tPtr1 == *tPtr2)
// 		cout << "����" << endl;
// 	else
// 		cout << "�ٸ�" << endl;

}