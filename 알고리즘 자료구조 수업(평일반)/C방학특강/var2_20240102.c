#include <stdio.h>

void main()
{
	// 연산자
	// 산술 연산자 : 기본적인 수학 연산
	// +, -, *, / : 사칙연산
	// % : 나머지

	int a = 10, b = 3;
	int sum = a + b; //연산 결과를 변수로 저장할 수 있음.
	int difference = a - b;
	int product = a * b;
	float quotient = a / b;
	float quotient2 = (float)a / (float)b;
	int remainder = a % b;

	printf("sum 결과 :%d\n", sum);
	printf("difference 결과 :%d\n", difference);
	printf("product 결과 :%d\n", product);
	printf("quotient 결과 :%f\n", quotient);
	printf("quotient2 결과 :%f\n", quotient2);
	printf("remainder 결과 :%d\n", remainder);

	// 대입 연산 : 변수에 값을 할당하는 연산(=)
	int x = 5;

	// 증감 연산 : 변수의 값을 1씩 증가시키거나 감소시킬 때 쓰는 연산
	// 전위 증감 연산: count++, count-- : 값이나 연산을 실행한 다음 결과에 +,-를 실행함
	int count = 10;
	printf("이전 count : %d\n", count); //10
	count++;
	printf("현재 count : %d\n", count); //11
	count--;

	// 증감 연산2
	// 후위 증감 연산: ++count, --count : 피연산자의 값을 증감시킨 다음 해당 연산을 실행함.


	printf("전위, 후위 증감 연산\n");
	int num_1 = 7;
	int num_2 = 7;
	int result01, result02;

	result01 = (++num_1) - 5;
	result02 = (num_2++) - 5;

	printf("result01 :%d, num_1 : %d\n", result01, num_1);
	printf("result02 :%d, num_2 : %d\n", result02, num_2);
	//복잡한 구조에서는 덜 사용하자.



}