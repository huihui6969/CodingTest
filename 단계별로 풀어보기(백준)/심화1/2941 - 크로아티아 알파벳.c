#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr[100];

    scanf("%s", arr);

    int count = strlen(arr);

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == '=')
        {
            if (arr[i - 1] == 'c') count--;
            if (arr[i - 1] == 's') count--;
            if (arr[i - 1] == 'z')
            {
                count--;
                if (arr[i - 2] == 'd') count--;
            }
        }

        if (arr[i] == '-')
        {
            if (arr[i - 1] == 'd') count--;
            if (arr[i - 1] == 'c') count--;
        }

        if (arr[i] == 'j')
        {
            if (arr[i - 1] == 'l') count--;
            if (arr[i - 1] == 'n') count--;
        }
    }

    printf("%d", count);

    return 0;
}