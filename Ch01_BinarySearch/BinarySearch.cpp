#include "BinarySearch.h"

template <typename T, int len>
int BinarySearch::bSearch(array<T, len>& arr, T target)
{
	int first = 0;
	int last = arr.size() - 1;
	while (first<=last)
	{
		int middle = (first + last) / 2;
		if (arr[middle] > target)
		{
			last = middle - 1;
		}
		else if (arr[middle] == target)
		{
			return middle;
		}
		else
		{
			first = middle + 1;
		}
	}
	return -1;
}