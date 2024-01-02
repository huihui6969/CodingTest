#include <stdio.h>

int main(void)
{
    int N, M = 0;
    int arr[100] = { 0 };
    int max = 0;
    int sumMin = 300000;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (M - (arr[i] + arr[j] + arr[k]) >= 0)
                {
                    if (M - (arr[i] + arr[j] + arr[k]) <= sumMin)
                    {
                        sumMin = M - (arr[i] + arr[j] + arr[k]);
                        max = arr[i] + arr[j] + arr[k];
                    }
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}