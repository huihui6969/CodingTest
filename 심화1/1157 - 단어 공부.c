#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr[26] = { 0 };
	char test[1000000];
	int result = 0;
	int select = 0;
	int number = 0;

	scanf("%s", test);

	int len = strlen(test);

	for (int i = 0; i < len; i++)
	{
		if ('A' <= test[i] && test[i] <= 'Z')
		{
			number = test[i] - 'A';
		}

		if ('a' <= test[i] && test[i] <= 'z')
		{
			number = test[i] - 'a';
		}

		arr[number]++;
	}

	int max = arr[0];

	for (int i = 1; i < 26; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			select = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == arr[i])
		{
			result++;
		}
	}

	if (result > 1)
	{
		printf("?\n");
	}
	else
	{
		printf("%c", select + 'A');
	}

	//2�� for���� ����ϰ� �Ǹ� �ð� �ʰ��� ���´�.
	//�׻� �ð� ���⵵�� ���̷��� ������ ����.
}