#include "BinarySearch.h"
#include "BinarySearch.cpp"
#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

int main(void)
{
	array<int, 9> arr{ 1, 2, 3, 7, 9, 12, 21, 23, 27 };

	BinarySearch bSearch;
	int idx;
	idx = bSearch.bSearch(arr, 3);

	if (idx == -1)
		cout << "Å½»ö ½ÇÆÐ" << endl;
	else
		cout << "Å¸°ÙÀÇ À§Ä¡ : " << idx << endl;
	return 0;
}