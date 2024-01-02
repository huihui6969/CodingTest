#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum = sum + (i + 1);
    }
    printf("%d", sum);

    return 0;
}