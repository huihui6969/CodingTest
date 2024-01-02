#include <stdio.h>

int main(void)
{
	int M, N = 0;
	int cnt = 0;
	int arr[10000] = { 0 };
	int num = 0;
	int sum = 0;
	scanf("%d\n%d", &M, &N);

	for (int i = M; i <= N; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i == j)
			{
				arr[num] = i;
				num++;
			}

			if (i % j == 0)
			{
				break;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		sum += arr[i];
	}
	if (arr[0] != NULL)
	{
		printf("%d\n", sum);
		printf("%d\n", arr[0]);
	}
	else
	{
		printf("-1");
	}
	return 0;
}
