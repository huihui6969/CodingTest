#include <stdio.h>

int main(void)
{
    int a1, a0 = 0;
    int c = 0;
    int n0 = 0;

    scanf("%d %d", &a1, &a0);
    scanf("%d", &c);
    scanf("%d", &n0);
    // a���� ���밪���� �ִ°� ŷ�޳׿�...
    if (a1 * n0 + a0 <= c * n0 && a1 <= c)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}