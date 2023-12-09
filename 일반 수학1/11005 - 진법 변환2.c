#include <stdio.h>
#include <math.h>

#pragma warning (disable : 4996)

int main(void)
{
	long long N = 0;
	int B = 0;
	int i = 0;
	int cnt = 0;
	int arr[100] = { 0 };
	char ans[100] = { 0 };

	scanf("%llu %d", &N, &B);

	while (pow(B, i) <= N)
	{
		i++;
	}

	cnt = i - 1; // cnt 3
					  //i = 4
	for (int j = 0; j < i; j++)
	{
		arr[j] = N / pow(B, cnt - j);
		N = N % (int)pow(B, cnt - j);
	}

	for (int k = 0; k < i; k++)
	{
		if (arr[k] >= 10)
		{
			ans[k] = 'A' - 10 + arr[k];
		}
		else
		{
			ans[k] = '0' + arr[k];

		}
		printf("%c", ans[k]);
	}

	return 0;
}