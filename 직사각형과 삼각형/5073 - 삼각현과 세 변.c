#include <stdio.h>
int main(void)
{
	while (1)
	{
		int x;
		int arr[3] = { 0 };
		int temp = 0;

		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &x);
			arr[i] = x;
		}

		if (arr[0] == 0 || arr[1] == 0 || arr[2] == 0)
		{
			break;
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
			printf("Invalid\n");
		}

		else
		{
			if (arr[0] == arr[1] && arr[0] == arr[2])
			{
				printf("Equilateral\n");
			}

			else if ((arr[0] == arr[1]) || (arr[1] == arr[2]) || (arr[0] == arr[2]))
			{
				printf("Isosceles\n");
			}

			else
			{
				printf("Scalene\n");
			}
		}
	}
	return 0;
}
