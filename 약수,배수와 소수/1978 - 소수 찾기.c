#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int N = 0;
	int cnt = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		bool Checker = true;

		int a = 0;
		scanf("%d", &a);

		for (int i = 2; i < a - 1; i++)
		{
			if (a % i == 0)
			{
				Checker = false;
			}
		}

		if (a == 1)
		{
			Checker = false;
		}

		if (Checker == true)
		{
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}