#include <stdio.h>
#include <string.h>

int main(void)
{
	while (1)
	{
		int N;
		int num = 0;
		int sum = 0;
		int value = 1;
		int arr[10000] = { 0 };

		scanf("%d", &N);

		if (N == -1)
		{
			break;
		}

		while (value <= N)
		{
			if (N % value == 0)
			{
				arr[num] = value;
				num++;
			}
			value++;
		}

		for (int i = 0; i < num - 1; i++)
		{
			sum += arr[i];
		}

		if (sum == N)
		{
			printf("%d = ", N);

			for (int j = 0; j < num - 1; j++)
			{
				printf("%d ", arr[j]);
				if (j != num - 2)
				{
					printf("+ ");
				}
			}

			printf("\n");
		}
		else
		{
			printf("%d is NOT perfect.\n", N);
		}

	}
	return 0;

}