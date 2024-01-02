#include <stdio.h>

int main(void)
{
    int x, y = 0;
    int a, b, c, d, e, f = 0;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    x = ((b * f) - (e * c)) / ((b * d) - (e * a));

    y = ((a * f) - (d * c)) / ((a * e) - (b * d));

    printf("%d %d", x, y);
    return 0;
}