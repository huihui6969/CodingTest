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
        //알바펫 o랑 arr[6]번째랑 비교하기전에 
        //arr[5]에서 이미 output값에 값을 할당함 그리고 다음 줄에
        //break가 있기 때문에 arr[6]으로 넘어가기전에 break!
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", output[i]);
    }
}