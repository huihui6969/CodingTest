#include <stdio.h>

int main(void)
{
    int N = 0;
    int confirm = -1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) //���Ʈ �������̴ϱ� 1���� 1�� �������� N���� ���� �˻�
    {
        int arr[1000];
        int cnt = 0;
        int sum = i;
        int k = 1;

        while (1) // �ڸ��� Ȯ���ڵ�
        {
            if (i / k > 0)
            {
                cnt++;
                k *= 10;
            }
            else
            {
                break;
            }
        }

        int value = i;

        for (int j = 0; j < cnt; j++) // �迭�� �� �ڸ����� ���� �ϳ��� �־��ݴϴ�
        {
            arr[j] = value % 10;
            value /= 10;
        }

        for (int j = 0; j < cnt; j++)
        {
            sum += arr[j];
        }

        if (sum == N) // ������ Ȯ���ڵ�
        {
            printf("%d", i);
            confirm = sum;
            break;
        }

    }
    if (confirm == -1)
    {
        printf("0");
    }
    return 0;
}