#include <stdio.h>

int main(void)
{
    int x, y, N = 0;
    scanf("%d", &N);
    int maxX = -10000, minX = 10000;
    int maxY = -10000, minY = 10000;
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        if (x >= maxX) maxX = x;
        if (x < minX) minX = x;
        if (y >= maxY) maxY = y;
        if (y < minY) minY = y;
    }
    printf("%d", (maxX - minX) * (maxY - minY));

    return 0;

    //for문은 한번으로도 가능! 시간복잡도 확인!
}
