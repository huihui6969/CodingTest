#include <stdio.h>

int main(void)
{
    int N;
    int sum = 0;
    scanf("%d", &N);

    char arr[N];

    scanf("%s", arr);
    for (int i = 0; i < N; i++)
    {
        sum += arr[i] - 48;
    }

    // ���ڿ� ������ - 48�� ���ָ� �ش� int ���� ���´�.
    // ���ڿ����� intŸ������ ġȯ�ϴ� ���.
    printf("%d", sum);
}