#include <stdio.h>

int main()
{
    int arr[9];
    int maxCount = 0;
    int max = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
            maxCount = i;
        }
    }

    printf("%d\n%d", max, maxCount + 1);

    return 0;
}