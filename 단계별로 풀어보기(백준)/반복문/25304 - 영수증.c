#include <stdio.h>

int main()
{
    int X, N, a, b;
    scanf("%d\n %d", &X, &N);
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        scanf("%d %d", &a, &b);
        sum = a * b;
        result = result + sum;
    }
    if (result == X)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}