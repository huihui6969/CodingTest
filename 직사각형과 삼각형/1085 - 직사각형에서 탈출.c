#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, w, h = 0;
	int ans[4];
	int min = 1000;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	ans[0] = abs(x - w);
	ans[1] = abs(y - h);
	ans[2] = abs(x - 0);
	ans[3] = abs(y - 0);

	for (int i = 0; i < 4; i++)
	{
		if (min >= ans[i])
		{
			min = ans[i];
		}
	}
	printf("%d", min);

	return 0;
}
