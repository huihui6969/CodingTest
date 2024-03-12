#include <stdio.h>

void main()
{
	// 복합 대입 연산자
	// 대입 연산자와 산술연산자를 합친 연산자
	// +=, -=, *=, /=

	int num = 10;
	num += 5; // num = 10 + 5
	printf("%d\n", num); 

	int num2 = 20;
	num2 -= 8;
	printf("%d\n", num2); //12

	int num3 = 30;
	num3 *= 4;
	printf("%d\n", num3); //120

	int num4 = 48;
	num4 /= 6;
	printf("%d\n", num4); //8

	// 형변환
	// 데이터의 타입을 다른 타입으로 변환해주는 것
	// 암시적(묵시적) 형변환 : 자동 형변환, 작은 데이터 타입에서 큰 데이터 타입
	// 데이터의 손실이 일어나지 않는다

	int numInt = 5;
	double numDouble = numInt; //int -> double

	// 명시적 형변환 : 개발자가 직접 형변환을 지시, 큰 데이터타입에서 작은 데이터 타입
	// 데이터의 손실이 발생할 수 있음
	float numFloat = 3.14;
	int numInt2 = (int)numFloat;

}