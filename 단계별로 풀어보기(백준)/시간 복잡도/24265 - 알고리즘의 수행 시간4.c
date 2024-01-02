#include <stdio.h>

int main(void)
{
    long long n = 0;
    scanf("%llu", &n);

    printf("%llu\n2", (n * (n - 1)) / 2);
    return 0;
}