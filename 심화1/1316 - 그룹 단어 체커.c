#include<stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	char arr[100];

	int count = N;

	for (int i = 0; i < N; i++)
	{
		scanf("%s", arr);

		char first = '0';

		char alp[26] = { 0 };

		//알파벳 배열에서 원소의 값을 더해주는 센스.

		for (int j = 0; arr[j] != '\0'; j++)
		{
			if (arr[j] != first)
			{
				first = arr[j];
				alp[arr[j] - 'a'] += 1;
			}

			if (alp[arr[j] - 'a'] == 2)
			{
				count -= 1;
				break;
			}
		}
	}
	printf("%d\n", count);

	return 0;

}