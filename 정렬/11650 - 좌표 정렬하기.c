#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x;
	int y;
}value;

int compare(const void* a, const void* b)
{
	value A = (*(value*)a);
	value B = (*(value*)b);
	if (A.x > B.x)
	{
		return 1;
	}
	else if (A.x == B.x)
	{
		if (A.y > B.y)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return -1;
}

int main(void)
{
	int N = 0;
	scanf("%d", &N);
	value arr[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}

	qsort(arr, N, sizeof(value), compare);

	for (int i = 0; i < N; i++)
	{
		printf("%d %d\n", arr[i].x, arr[i].y);
	}

	return 0;
}