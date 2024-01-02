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

	// for문으로 브루트 포스 알고리즘을 사용하면 시간 초과가 뜬다.
}
