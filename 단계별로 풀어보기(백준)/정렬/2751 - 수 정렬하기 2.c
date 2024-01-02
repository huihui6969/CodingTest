#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)
	{
		return 1;
	}
	else if (*(int*)a < *(int*)b)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int N = 0;
	scanf("%d", &N);
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	qsort(arr, N, sizeof(int), compare);

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}