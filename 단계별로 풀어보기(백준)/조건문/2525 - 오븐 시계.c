#include <stdio.h>

int main()
{
    int H, M, x;
    scanf("%d %d\n %d", &H, &M, &x);
    if (M + x % 60 < 60)
    {
        if (H + x / 60 < 24)
        {
            printf("%d %d", H + x / 60, M + x % 60);
        }
        else
        {
            printf("%d %d", H + x / 60 - 24, M + x % 60);
        }
    }
    else
    {
        if (H + ((M + x) / 60) < 24)
        {
            printf("%d %d", H + ((M + x) / 60), (M + x) % 60);
        }
        else
        {
            printf("%d %d", H + ((M + x) / 60) - 24, (M + x) % 60);
        }
    }

    return 0;
}