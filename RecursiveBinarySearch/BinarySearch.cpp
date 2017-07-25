#include "BinarySearch.h"

template <typename T, int len>
int BinarySearch::bSearch(array<T, len>& arr, int first, int last, T target)
{
	if (first > last)
		return -1;
	int middle = (first + last) / 2;
	if (arr[middle] > target)
		bSearch(arr, first, middle - 1, target);
	else if (arr[middle] == target)
		return middle;
	else
		bSearch(arr, middle + 1, last, target);
}