#include <stdio.h>

int main(void)
{
	int x, y = 0;
	int arr[2][3];
	int valueX, valueY = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &x, &y);
		arr[0][i] = x;
		arr[1][i] = y;
	}

	if (arr[0][0] == arr[0][1])
	{
		valueX = arr[0][2];
	}
	else if (arr[0][1] == arr[0][2])
	{
		valueX = arr[0][0];
	}
	else
	{
		valueX = arr[0][1];
	}

	if (arr[1][0] == arr[1][1])
	{
		valueY = arr[1][2];
	}
	else if (arr[1][1] == arr[1][2])
	{
		valueY = arr[1][0];
	}
	else
	{
		valueY = arr[1][1];
	}

	printf("%d %d", valueX, valueY);

	return 0;
}
