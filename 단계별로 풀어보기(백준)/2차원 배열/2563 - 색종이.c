#include <stdio.h>

int main(void)
{
	int arrP[100][100] = { 0 };

	int K = 0;
	int x, y = 0;
	int cnt = 0;

	scanf("%d", &K);

	for (int i = 0; i < K; i++)
	{
		scanf("%d %d", &x, &y);
		for (int a = y; a < y + 10; a++)
		{
			for (int b = x; b < x + 10; b++)
			{
				arrP[a][b] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arrP[i][j] == 1)
			{
				cnt++;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}