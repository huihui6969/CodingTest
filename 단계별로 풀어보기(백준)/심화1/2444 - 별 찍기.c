#include <stdio.h>

int main(void)
{
	int N = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		for (int j = N; j - i > 1; j--)
		{
			printf(" ");
		}

		for (int j = 0; j < (2 * i) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = N; i > 1; i--)
	{
		for (int j = N + 1; j - i > 0; j--)
		{
			printf(" ");
		}

		for (int j = 0; j < (2 * i) - 3; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}