#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b)
{
	if (strlen((const char*)a) > strlen((const char*)b))
	{
		return 1;
	}
	else if (strlen((const char*)a) < strlen((const char*)b))
	{
		return -1;
	}
	else
	{
		return strcmp((char*)a, (char*)b);
	}
}

int main(void)
{
	int N = 0;
	scanf("%d", &N);

	char arr[20000][51] = { 0 };

	for (int i = 0; i < N; i++)
	{
		scanf("%s", &arr[i]);
	}

	qsort(arr, N, sizeof(arr[0]), compare);

	for (int i = 0; i < N; i++)
	{
		if (strcmp(arr[i], arr[i + 1]) != 0 || i == N - 1)
		{
			printf("%s\n", arr[i]);
		}
	}
	return 0;
}