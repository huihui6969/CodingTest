#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100];
    int count = 0;
    scanf("%s", arr);
    int len = strlen(arr);

    for (int i = 0; i < (len + 1) / 2; i++)
    {
        if (arr[i] == arr[len - i - 1])
        {
            count++;
        }
    }

    if ((len + 1) / 2 == count)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}