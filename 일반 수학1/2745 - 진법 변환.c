#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long B;
    char* N = malloc(sizeof(char) * 100000);
    scanf("%s", N);
    scanf("%lld", &B);

    long long total = 0;
    int i = 0;
    while (N[i] != '\0') {
        total *= B;
        if (N[i] >= 'A' && N[i] <= 'Z') {
            total += N[i] - 55;
        }
        else {
            total += N[i] - '0';
        }

        i++;
    }

    printf("%lld\n", total);

    free(N);
    return 0;
}