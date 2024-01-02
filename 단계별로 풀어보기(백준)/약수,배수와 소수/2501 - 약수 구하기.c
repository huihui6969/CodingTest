#include <stdio.h>

int main(void)
{
	int N, K = 0;
	int value = 1;
	int arr[10000] = { 0 };
	int num = 0;
	scanf("%d %d", &N, &K);

	while (value <= N)
	{
		if (N % value == 0)
		{
			arr[num] = value;
			num++;
		}
		value++;
	}

	printf("%d", arr[K - 1]);
	return 0;
}