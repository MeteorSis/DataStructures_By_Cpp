#pragma once
#include <array>
using std::array;

class BinarySearch
{
public:
	template <typename T, int len>
	int bSearch(array<T, len>& arr, T target);
};

