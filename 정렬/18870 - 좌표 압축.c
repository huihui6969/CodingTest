#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
	int num;
	int index;
} value;

int compare(const void* a, const void* b) {
	value A = *(value*)a;
	value B = *(value*)b;

	if (A.num > B.num) return 1;
	else if (A.num < B.num) return -1;
	else return 0;
}
int main() {
	int N;
	int cnt = -1, min = INT_MIN;
	scanf("%d", &N);
	value* arr = (value*)malloc(sizeof(value) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i].num);
		arr[i].index = i;
	}
	qsort(arr, N, sizeof(value), compare);
	int* result = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		if (arr[i].num != min) {
			min = arr[i].num;
			cnt++;
		}
		result[arr[i].index] = cnt;
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", result[i]);
	}
	return 0;

	//동적 할당 사용법
}
