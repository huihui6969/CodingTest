#include <stdio.h>

int main(void)
{
    char arr[100];
    int output[26];

    int k, j;
    scanf("%s", arr);

    for (int i = 0; i < 26; i++)
    {
        output[i] = -1;
    }

    for (k = 97; k < 123; k++)
    {
        for (int j = 0; j < strlen(arr); j++)
        {
            if (arr[j] == k)
            {
                output[arr[j] - 'a'] = j;
                break;
            }
        }
        //�˹��� o�� arr[6]��°�� ���ϱ����� 
        //arr[5]���� �̹� output���� ���� �Ҵ��� �׸��� ���� �ٿ�
        //break�� �ֱ� ������ arr[6]���� �Ѿ������ break!
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", output[i]);
    }
}