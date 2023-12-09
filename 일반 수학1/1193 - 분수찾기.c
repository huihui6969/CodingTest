#include <stdio.h>

int main(void)
{
	int value = 1;
	int i = 2;
	long long X = 0;
	scanf("%llu", &X);
	int a, b = 0;

	// 9
	while (value < X)
	{
		value += i;
		i++;
	}

	if (i % 2 == 0)
	{
		b = X - (value - i + 1);
		a = i - b;
	}
	else
	{
		a = X - (value - i + 1);
		b = i - a;

	}
	printf("%d/%d", a, b);
	return 0;
}