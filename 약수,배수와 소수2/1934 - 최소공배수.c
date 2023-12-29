#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int T, a, b;
	int arrA[100] = { 0 };
	int arrB[100] = { 0 };
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		int j = 1;
		int Max = 0;
		int valueA = 0;
		while (j <= a) {
			if (a % j == 0) {
				arrA[valueA] = j;
				valueA++;
			}
			j++;
		}
		j = 1;
		int valueB = 0;
		while (j <= b) {
			if (b % j == 0) {
				arrB[valueB] = j;
				valueB++;
			}
			j++;
		}
		for (int k = 0; k < valueA; k++) {
			for (int q = 0; q < valueB; q++) {
				if (arrA[k] == arrB[q] && Max <= arrA[k]) {
					Max = arrA[k];
				}
			}
		}
		printf("%d\n", (a * b) / Max);
	}
	return 0;
}
