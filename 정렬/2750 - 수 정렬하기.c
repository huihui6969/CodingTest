#include <stdio.h>

int main(void)
{
	//Bubble Sort
	int N = 0;
	int temp = 0;
	int arr[1000];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N - 1; i++) //bubble sort¹ý
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}