#include<stdio.h>

int main(void)
{
    int i;
    char arr[1000];

    scanf("%s", arr);
    scanf("%d", &i);

    printf("%c", arr[i - 1]);

    return 0;
}