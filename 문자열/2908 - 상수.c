#include <stdio.h>

int main(void)
{
    char a[3], b[3];
    int c[3], d[3];
    char temp = ' ';
    int number1, number2;

    scanf("%s %s", a, b);

    temp = a[2];
    a[2] = a[0];
    a[0] = temp;

    temp = b[2];
    b[2] = b[0];
    b[0] = temp;

    for (int i = 0; i < 3; i++)
    {
        c[i] = a[i] - 48;
    }

    for (int i = 0; i < 3; i++)
    {
        d[i] = b[i] - 48;
    }

    number1 = (c[0] * 100) + (c[1] * 10) + c[2];
    number2 = (d[0] * 100) + (d[1] * 10) + d[2];

    if (number1 > number2)
    {
        printf("%d\n", number1);
    }
    else
    {
        printf("%d\n", number2);
    }
}