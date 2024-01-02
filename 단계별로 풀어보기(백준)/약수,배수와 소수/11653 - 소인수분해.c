#include <stdio.h>

int main(void)
{
	int N = 0;
	scanf("%d", &N);
	int value = 1;

	if (N == 1)
	{
		return 0;
	}

	while (value <= N)
	{
		value++;

		if (N % value == 0)
		{
			printf("%d\n", value);
			N /= value;
			value = 1;
		}
	}
}
