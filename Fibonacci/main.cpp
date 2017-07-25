#include <iostream>
#include <array>
using std::array;
using std::cout;
using std::endl;

array<int, 100> arr;
int cnt;

int fibo(int num)
{
	++cnt;
	if (num == 1)
		arr[num - 1] = 0;
	else if (num == 2)
		arr[num - 1] = 1;
	else if (arr[num - 1] == 0)
		arr[num - 1] = fibo(num - 1) + fibo(num - 2);
	return arr[num - 1];
}

int main(void)
{
	for (int i = 1; i <= 100; ++i)
		cout << fibo(i) << " ";
	cout << endl<< cnt << endl;
	return 0;
}