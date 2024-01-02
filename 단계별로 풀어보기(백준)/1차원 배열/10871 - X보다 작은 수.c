#include <stdio.h>

int main()
{
    int N, X, a[10000];

    scanf("%d %d", &N, &X);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < N; j++)
    {
        if (a[j] < X)
        {
            printf("%d ", a[j]);
        }
    }

    return 0;
}