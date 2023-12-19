#include <stdio.h> 

int main(void)
{
	int N = 0;
	int num = 0;
	int count[10001] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		count[num]++;
	}

	for (int i = 1; i < 10001; i++)
	{
		for (int j = 1; j <= count[i]; j++) //해당 배열인덱스의 값만큼 반복해줌
		{
			printf("%d\n", i);
		}
	}
	return 0;
}