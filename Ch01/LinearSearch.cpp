#include "LinearSearch.h"

 template <typename T, int len>
// int LinearSearch::LSearch(array<int, len> arr, int target)
// {
// 	for (int i = 0; i < arr.size(); ++i)
// 	{
// 		if (arr[i] == target)
// 			return i;
// 	}
// 	return -1;
// }

int LinearSearch::LSearch(array<T, len>& arr, T target)
{
	for (int i = 0; i < arr.size(); ++i)
		if (arr[i] == target)
			return i;
}