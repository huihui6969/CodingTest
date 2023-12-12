#include <stdio.h>

int main(void)
{
    int x;
    int arr[3] = { 0 };

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &x);
        arr[i] = x;
    }

    if (arr[0] + arr[1] + arr[2] != 180)
    {
        printf("Error");
    }

    else
    {
        if (arr[0] == arr[1] && arr[0] == arr[2])
        {
            printf("Equilateral");
        }

        else if ((arr[0] == arr[1] && arr[0] != arr[2]) ||
            (arr[1] == arr[2] && arr[1] != arr[0]) ||
            (arr[0] == arr[2] && arr[0] != arr[1]))
        {
            printf("Isosceles");
        }

        else
        {
            printf("Scalene");
        }
    }
    return 0;
}
