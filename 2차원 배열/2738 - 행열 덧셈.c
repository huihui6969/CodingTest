#include <stdio.h>

int main(void)
{
	int arrA[100][100];
	int arrB[100][100];
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arrA[i][j]);
		}
	}
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < m; b++)
		{
			scanf("%d", &arrB[a][b]);
		}
	}
	for (int c = 0; c < n; c++)
	{
		for (int d = 0; d < m; d++)
		{
			arrA[c][d] += arrB[c][d];
			printf("%d ", arrA[c][d]);
		}
		printf("\n");
	}
	return 0;
}