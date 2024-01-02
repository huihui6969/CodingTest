#include <stdio.h>
#include <math.h>

int main(void)
{
	int value = 1;
	int N = 0;
	long long B = 0;
	scanf("%llu", &B);

	while (value < B)
	{
		value += 6 * N;
		N++;
	}

	if (N == 0)
	{
		N = 1;
	}
	printf("%d", N);
	return 0;
}