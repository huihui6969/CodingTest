#include <stdio.h>

int main()
{
    int N;
    int a[100];
    int input;
    int count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &input);

    for (int j = 0; j < N; j++)
    {
        if (input == a[j])
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}