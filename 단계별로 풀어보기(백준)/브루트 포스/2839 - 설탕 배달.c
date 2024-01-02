#include <stdio.h>
#include <math.h>

int main(void)
{
    int N = 0;
    scanf("%d", &N);
    int i = 0;
    int min = 10000;

    while (i <= ceil(N / 3))
    {
        int value = 0;
        int value1 = N;

        value1 -= (5 * i);

        if (value1 < 0)
        {
            break;
        }
        if (value1 % 3 == 0)
        {
            value += (i + (value1 / 3));

            if (value <= min)
            {
                min = value;
            }
        }
        i++;
    }

    if (min == 10000)
    {
        min = -1;
    }

    printf("%d", min);

    return 0;
}