#include <stdio.h>

int main(void)
{
	int N = 0;
	scanf("%d", &N);
	int cnt = 0;
	int k = 1;
	int arr[100] = { 0 };
	int value = N;
	int temp = 0;

	while (1) // �ڸ��� Ȯ���ڵ�
	{
		if (N / k > 0)
		{
			cnt++;
			k *= 10;
		}
		else
		{
			break;
		}
	}

	for (int i = 0; i < cnt; i++) // �迭�� �� �ڸ����� ���� �ϳ��� �־��ݴϴ�
	{
		arr[i] = value % 10;
		value /= 10;
	}

	int j = 0;

	for (int i = 1; i < cnt; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] < temp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}

	for (int i = 0; i < cnt; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}