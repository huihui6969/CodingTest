#include <stdio.h>

int main()
{
    int N, M;
    int a, b, temp;
    scanf("%d %d", &N, &M);
    int arr[100];

    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &a, &b);
        for (int j = 0; j < (b - a) / 2 + 1; j++)
        {
            temp = arr[a + j - 1];
            arr[a + j - 1] = arr[b - j - 1];
            arr[b - j - 1] = temp;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}