#include <stdio.h>

int main(void)
{
    int i = 0;
    int input = 0;
    int result = 0;
    scanf("%d", &input);

    while (result <= input)
    {
        int k = 1;
        int cnt = 0;
        int arr[1000];

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

        for (int k = 0; k < cnt; k++)
        {
            if (arr[k] == 6 && arr[k + 1] == 6 && arr[k + 2] == 6)
            {
                result++;
                break;
            }
        }

        if (input == result)
        {
            printf("%d", i);
            break;
        }
        i++;
    }
    return 0;
}