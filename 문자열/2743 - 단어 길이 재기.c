#include <stdio.h>

int main(void)
{
    char arr[100] = { 0 };
    scanf("%s", arr);
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] != 0)
        {
            count++;
        }
    }

    printf("%d", count);
}