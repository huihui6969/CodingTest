#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, v;
    double day;

    scanf("%d %d %d", &a, &b, &v);

    day = ceil((double)(v - b) / (a - b));
    printf("%.0f", day);

    return 0;

    //while�� ����ؼ� Ǯ�� �ð��ʰ� ���Ϳ� �Ф�
}