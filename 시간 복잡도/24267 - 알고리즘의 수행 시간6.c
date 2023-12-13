#include <stdio.h>

int main(void)
{
    long long n = 0;
    scanf("%llu", &n);

    printf("%llu\n3", (n - 2) * (n - 1) * n / 6);
    return 0;
}