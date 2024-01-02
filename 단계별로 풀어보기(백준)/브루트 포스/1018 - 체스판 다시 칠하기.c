#include <stdio.h>
#pragma warning (disable:4996)

int main() {
    int row, col; // ü������ ���� ���� ����
    char array[50][50];
    int min = 32; // �ּҰ��� �����ϱ� ���� ����, ���� �� �ִ� ���� ���� ���� Ƚ���� 31�̱� ������ 32�� �ʱ� ����

    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++) {
        scanf("%s", array[i]);
    }

    for (int i = 0; i < row - 7; i++) { // ������ ���� ��������
        for (int j = 0; j < col - 7; j++) { // ������ ���� ��������
            int count = 0;
            for (int s_i = i; s_i < i + 8; s_i++) {
                for (int s_j = j; s_j < j + 8; s_j++) {
                    count += (s_i + s_j) % 2 == 1 ^ array[s_i][s_j] == 'B'; // �ٽ� ĥ�ؾ��� ĭ�� ������ ī��Ʈ
                }
            }
            count = 64 - count < count ? 64 - count : count; // 32���� ũ�� ����� ������ ������ �ٲٸ� �ٽ� ĥ�ؾ��� ĭ�� �� ��������.
            min = count < min ? count : min; // �ּҰ��� ���ؼ� ���� ī��Ʈ�� �� ������ �ּҰ� ��ü
        }
    }

    printf("%d\n", min);
    return 0;
}