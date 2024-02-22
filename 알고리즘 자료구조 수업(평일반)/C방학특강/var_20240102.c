#include <stdio.h>

void main()
{
	// 0. 프로그래밍
	// 프로그래밍이란? program + ing
	// - 프로그램이란? 어떤 문제를 해결하기 위해 컴퓨터에게
	// 주어지는 처리 방법과 순서를 기술한 일련의 명령문의 집합체.
	// - 프로그래밍이란? 컴퓨터에게 명령을 내리는 방법

	// 1. 변수
	// 변수의 개념 
	// - 변수 : 데이터를 저장하는 메모리 공간
	// - 변수를 배워야하는 이유 : 데이터를 저장하고 조작하기 위해
	// 변수의 선언과 초기화
	// 변수 선언 형식 : 자료형 변수이름

	int number1; // 정수형(integer)의 변수를 선언한 것
	//printf("%d", &number);

	number1 = 10; // 초기값을 할당
	int number2 = 20; // 변수를 선언하고 초기값을 할당하는 것을 동시에 진행
	printf("%d %d\n", number1, number2);



	float number3 = 3.14;
	int number4 = 1.414;
	printf("%f %d", number3, number4);

	// 변수 이름을 짓는 규칙, 권장 사항
	// 1. 변수를 숫자로 시작하는 것은 피해야한다.
	// 2. 알파벳, 숫자, 언더스코어(_)를 사용할 수 있으나
	// 알파벳의 경우 대소문자를 구분
	// 3. 프로그래밍 문법에 들어가는 예약어 금지(if, else, for...)

	// 2. 변수의 타입(데이터 타입)
	// 변수를 선언할 때 어떤 데이터를 변수에 담을 것인지 결정해야함
	// '어떤' 데이터를 결정해주는 게 자료형
	// 정수, 실수, 문자, 문자열...
	// 정수 : int(4byte) => 32bit, short(2byte), long(4, 8byte), long long(8byte)
	printf("\nint의 크기 : %zu\n", sizeof(int));
	printf("\nshort의 크기 : %zu\n", sizeof(short));
	printf("\nlong의 크기 : %zu\n", sizeof(long));
	printf("\nlong long의 크기 : %zu\n", sizeof(long long));
	// 정해지지 않은 어떤 가변적인 값을 문자열로 표현할 때 zu를 쓴다
	// *효율적이진 않으므로 너무 남발하면 안됨
	// 실수 : float(4byte), double(8byte)
	printf("\nfloat의 크기 : %zu\n", sizeof(float));
	printf("\ndouble의 크기 : %zu\n", sizeof(double));
	// 문자 : char(1byte), string => 길이에 따라 달라짐
	printf("\nchar의 크기 : %zu\n", sizeof(char));
}





