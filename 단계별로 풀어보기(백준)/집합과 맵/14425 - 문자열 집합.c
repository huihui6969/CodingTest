#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUCKET 1000

typedef struct _element {
	char string[501];
}element;

typedef struct _Node* NodePointer;
typedef struct _Node {
	element data;
	NodePointer link;
}Node;
NodePointer hash[BUCKET];

int StringToInt(char* string) {
	int sum = 0;
	while (*string) {
		sum += *string;
		string++;
	}
	return sum;
}

int hashing(int key) {
	return key % BUCKET;
}

void Chaining(NodePointer node) {
	int index = hashing(StringToInt(node->data.string));

	if (hash[index] == NULL) {
		hash[index] = node;
	}
	else {
		node->link = hash[index];
		hash[index] = node;
	}
}

int Searching(char string[]) {
	int index = hashing(StringToInt(string));

	NodePointer cur = hash[index];
	while (cur != NULL) {
		if (!strcmp(cur->data.string, string)) return 1;
		cur = cur->link;
	}
	return 0;
}

int main(void) {
	int N, M; scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		NodePointer newNode = malloc(sizeof(Node));
		scanf("%s", newNode->data.string); newNode->link = NULL;
		Chaining(newNode);
	}

	int count = 0;
	for (int i = 0; i < M; i++) {
		char string[501]; scanf("%s", string);

		if (Searching(string)) {
			count++;
		}
	}
	printf("%d\n", count);

	return 0;

	//해쉬 테이블 ... 개어렵다 진짜 ㅠㅠ
}