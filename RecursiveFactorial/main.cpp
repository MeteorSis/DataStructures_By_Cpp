#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

array<unsigned __int64, 50> arr;
int cnt = 0;

unsigned __int64 factorial(unsigned __int64 num)
{
	++cnt;
// 	if (num == 1)
// 	{
// 		arr[0] = 1;
// 		return arr[0];
// 	}
// 	if (arr[num-1] == 0)
// 		arr[num-1] = num*factorial(num - 1);
// 	return arr[num-1];

	if (num == 1)
	{
		return 1;
	}
	return num*factorial(num-1);
}

int main(void)
{

	for (unsigned __int64 i = 1; i <= 50; ++i)
	{
		cout << i << "!=" << factorial(i) << endl;
	}
	cout << cnt << endl;
	return 0;
}