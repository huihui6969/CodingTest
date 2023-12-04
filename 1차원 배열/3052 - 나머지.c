#include <stdio.h>

int main()
{
    int input;
    int num[10];
    int result = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &input);
        num[i] = input % 42;
    }

    for (int a = 0; a < 10; a++)
    {
        int count = 0;

        for (int b = a + 1; b < 10; b++)
        {

            if (num[a] == num[b])
            {
                count++;
            }
        }

        if (count == 0)
        {
            result++;
        }
    }

    printf("%d", result);
    return 0;
}