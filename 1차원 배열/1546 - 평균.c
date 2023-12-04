#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];

    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int j = 0; j < N; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }

    for (int k = 0; k < N; k++)
    {
        sum += (float)arr[k] / max * 100;
    }
    printf("%f", sum / N);

    return 0;
}