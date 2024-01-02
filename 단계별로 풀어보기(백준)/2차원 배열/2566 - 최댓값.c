#include <stdio.h>

int main(void)
{
	int arrA[9][9];
	int max = 0;
	int maxN = 0;
	int maxM = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arrA[i][j]);
		}
	}

	for (int k = 0; k < 9; k++)
	{
		for (int q = 0; q < 9; q++)
		{
			if (arrA[k][q] >= max)
			{
				max = arrA[k][q];
				maxN = k;
				maxM = q;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d\n", maxN + 1, maxM + 1);
	return 0;
}