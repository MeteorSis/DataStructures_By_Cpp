#include <iostream>
using std::cout;
using std::endl;

void hanoiTowerMove(int num, char from, char by, char to)
{
	if (num == 1)
	{
		cout << "���� 1��(��) " << from << "���� " << to << "�� �̵�" << endl;
	}
	else
	{
		hanoiTowerMove(num - 1, from, to, by);
		cout << "���� " << num << "��(��) " << from << "���� " << to << "�� �̵�" << endl;
		hanoiTowerMove(num - 1, by, from, to);
	}
}

int main(void)
{
	hanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}