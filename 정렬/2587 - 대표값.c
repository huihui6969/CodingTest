#include <stdio.h>

int main(void)
{
	//Selection Sort
	int N = 5;
	int minIndex = 0;
	int arr[5];
	int temp = 0;
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N - 1; i++)
	{
		minIndex = i;

		for (int j = i + 1; j < N; j++)
		{

			if (arr[minIndex] > arr[j])
			{
				minIndex = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}

	printf("%d\n%d", sum / 5, arr[2]);
	return 0;
}