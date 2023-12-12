#include <stdio.h>

int main(void)
{
	int x;
	int arr[3] = { 0 };
	int temp = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &x);
		arr[i] = x;
	}

	if (arr[0] >= arr[1])
	{
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}

	if (arr[1] >= arr[2])
	{
		temp = arr[1];
		arr[1] = arr[2];
		arr[2] = temp;
	}

	if (arr[0] + arr[1] <= arr[2])
	{
		arr[2] = arr[0] + arr[1] - 1;
	}

	printf("%d", arr[0] + arr[1] + arr[2]);

	return 0;
}
