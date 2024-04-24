#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int money;
	int countCurrent = 0;
	int count = 0;
	scanf("%d", &money);

	count = money / 500;
	countCurrent += count;
	money = money - 500 * (money / 500);

	count = money / 100;
	countCurrent += count;
	money = money - 100 * (money / 100);

	count = money / 50;
	countCurrent += count;
	money = money - 50 * (money / 50);

	count = money / 10;
	countCurrent += count;
	money = money - 10 * (money / 10);

	printf("%d\n", countCurrent);

	return 0;
}
