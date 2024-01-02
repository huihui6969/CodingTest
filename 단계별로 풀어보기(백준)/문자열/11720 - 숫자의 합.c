#include <stdio.h>

int main(void)
{
    int N;
    int sum = 0;
    scanf("%d", &N);

    char arr[N];

    scanf("%s", arr);
    for (int i = 0; i < N; i++)
    {
        sum += arr[i] - 48;
    }

    // 문자열 값에서 - 48을 해주면 해당 int 값이 나온다.
    // 문자열에서 int타입으로 치환하는 방법.
    printf("%d", sum);
}