#include <stdio.h>

int main(void)
{
	int count[4];
	int money;
	int change[4] = { 25, 10, 5, 1 };

	int T = 0;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &money);

		for (int j = 0; j < 4; j++)
		{
			count[j] = money / change[j];
			money %= change[j];
			printf("%d ", count[j]);
		}

		printf("\n");
	}
	return 0;
}
