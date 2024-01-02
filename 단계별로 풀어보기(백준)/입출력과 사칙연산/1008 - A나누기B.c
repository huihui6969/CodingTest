#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%0.9f", (double)a / b);
    return 0;

    //문제에서 주어진 변수의 크기를 꼭 확인하자
}