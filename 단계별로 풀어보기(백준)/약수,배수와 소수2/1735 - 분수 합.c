#include <stdio.h>
#pragma warning (disable: 4996)

int main() {
	int a, b, c, d;
	int cnt = 2;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	int A = (a * d) + (b * c);
	int B = b * d;

	while (cnt <= A && cnt <= B) {
		if ((A % cnt != 0) || (B % cnt != 0)) {
			cnt++;
		}
		else {
			A /= cnt;
			B /= cnt;
		}
	}

	printf("%d %d", A, B);

	// for������ ���Ʈ ���� �˰����� ����ϸ� �ð� �ʰ��� ���.
}
