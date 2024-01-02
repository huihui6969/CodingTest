#include <stdio.h>
#pragma warning (disable:4996)

int main() {
    int row, col; // 체스판의 가로 세로 길이
    char array[50][50];
    int min = 32; // 최소값만 저장하기 위한 변수, 나올 수 있는 제일 높은 변경 횟수가 31이기 때문에 32로 초기 설정

    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++) {
        scanf("%s", array[i]);
    }

    for (int i = 0; i < row - 7; i++) { // 가능한 세로 범위에서
        for (int j = 0; j < col - 7; j++) { // 가능한 가로 범위에서
            int count = 0;
            for (int s_i = i; s_i < i + 8; s_i++) {
                for (int s_j = j; s_j < j + 8; s_j++) {
                    count += (s_i + s_j) % 2 == 1 ^ array[s_i][s_j] == 'B'; // 다시 칠해야할 칸이 있으면 카운트
                }
            }
            count = 64 - count < count ? 64 - count : count; // 32보다 크면 흰색과 검정색 기준을 바꾸면 다시 칠해야할 칸이 더 적아진다.
            min = count < min ? count : min; // 최소값과 비교해서 현재 카운트가 더 작으면 최소값 교체
        }
    }

    printf("%d\n", min);
    return 0;
}