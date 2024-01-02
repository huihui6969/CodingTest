#include <stdio.h>

int main(void)
{
	//Insertion Sort
	int N, k;
	int minIndex = 0;
	int arr[1000];
	int temp = 0;
	int sum = 0;

	scanf("%d %d", &N, &k);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i < N; i++)
	{
		temp = arr[i];
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
		{
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
	}

	printf("%d", arr[N - k]);


	return 0;
}