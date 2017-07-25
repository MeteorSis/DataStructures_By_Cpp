#pragma once
#include <array>
using std::array;

class LinearSearch
{
public:
 	template <typename T, int len>
// 	int LSearch(array<int, len> arr, int target);
	int LSearch(array<T, len>& arr, T target);
};
