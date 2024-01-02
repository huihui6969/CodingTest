#include<stdio.h>

int main(void)
{
    char arr[5][15] = { 0 };

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", arr[i]);
    }

    for (int k = 0; k < 15; k++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j][k] != NULL)
            {
                printf("%c", arr[j][k]);
            }
        }
    }
    return 0;
}
