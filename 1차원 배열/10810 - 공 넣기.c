#include <stdio.h>

int main()
{
    int N, M;

    scanf("%d %d", &N, &M);

    int arr[100] = { 0 };

    int a, b, c;

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        for (int j = 0; j < b - a + 1; j++)
        {
            arr[a + j - 1] = c;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}