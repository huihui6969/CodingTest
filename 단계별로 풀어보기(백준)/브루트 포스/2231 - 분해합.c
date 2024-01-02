#include <stdio.h>

int main(void)
{
    int N = 0;
    int confirm = -1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) //브루트 포스법이니까 1부터 1씩 증가시켜 N까지 전부 검사
    {
        int arr[1000];
        int cnt = 0;
        int sum = i;
        int k = 1;

        while (1) // 자릿수 확인코드
        {
            if (i / k > 0)
            {
                cnt++;
                k *= 10;
            }
            else
            {
                break;
            }
        }

        int value = i;

        for (int j = 0; j < cnt; j++) // 배열에 각 자리수의 값을 하나씩 넣어줍니다
        {
            arr[j] = value % 10;
            value /= 10;
        }

        for (int j = 0; j < cnt; j++)
        {
            sum += arr[j];
        }

        if (sum == N) // 생성자 확인코드
        {
            printf("%d", i);
            confirm = sum;
            break;
        }

    }
    if (confirm == -1)
    {
        printf("0");
    }
    return 0;
}