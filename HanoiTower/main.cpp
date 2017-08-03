#include <iostream>
using std::cout;
using std::endl;

void hanoiTowerMove(int num, char from, char by, char to)
{
	if (num == 1)
	{
		cout << "원반 1을(를) " << from << "에서 " << to << "로 이동" << endl;
	}
	else
	{
		hanoiTowerMove(num - 1, from, to, by);
		cout << "원반 " << num << "을(를) " << from << "에서 " << to << "로 이동" << endl;
		hanoiTowerMove(num - 1, by, from, to);
	}
}

int main(void)
{
	hanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}