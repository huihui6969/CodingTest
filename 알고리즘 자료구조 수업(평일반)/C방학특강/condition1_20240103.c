#include <stdio.h>

// 조건문
// 켬퓨터에게 본격적인 명령을 내리는 방식(조건에 따른)
// if
// else
// else if
// switch
// 삼항연산자

void main()
{
	//if : 조건이 참인 경우에 if문의 코드 불럭을 실행할 때 사용

	int num = 10;
	if (num > 10)
	{
		// 중괄호 안을 코드 불럭이라고 부름
		printf("num은 10보다 큰 수 입니다.");
	}

	printf("=====================================");

	int score = 70;
	if (score >= 60)
	{
		printf("합격입니다\n");
	}

	// if문을 중첩시킬 수 있음
	int num1 = 15;
	if (num1 > 0)
	{
		printf("양수입니다");
		if (num1 % 2 == 0)
		{
			printf("짝수입니다");
		}
	}
}