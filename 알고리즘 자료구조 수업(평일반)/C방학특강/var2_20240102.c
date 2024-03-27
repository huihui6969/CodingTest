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
	// 복잡한 구조에서는 덜 사용하자.

	// 비교 연산
	// 두 값이 서로 어떤 관계에 있는지를 확인하는 연산
	// 크고 작음, 같고 다름
	int num1 = 10, num2 = 20;
	if (num1 < num2)
	{
		printf("num2이 num1보다 큽니다");
	}
	// 비교 연산의 결과는 항상 참, 또는 거짓
	// 크다(>), 작다(<) : 두 값을 비교했을때 자기자신을 제외하고 크기 여부를 판단
	// 크거나 같다(>=), 작거나 같다(<=) : 두 값을 비교 했을 때 자기 자신을 포함해서 크기 여부를 판단
	// 같다 (==), 다른다(!=) : 두 값을 비교했을 때 동일 여부

	// 논리 연산자(&&, ||, !)
	// 논리 연산자는 여러개의 조건을 결합하거나 부정하는 용도
	// &&(and, 논리곱) : 양쪽의 조건(피연산자)이 모두 참(True)일 때 참을 반환
	// ||(or, 논리합) : 양쪽의 조건(피연산자)이 하나만 참(True)일 때 참을 반환
	// !(not, 논리부정) : 조건(피연산자)의 값을 반전

	printf("참 && 참 : %d\n", 1 && 1);
	printf("참 && 거짓 : %d\n", 1 && 0);
	printf("거짓 && 참 : %d\n", 0 && 1);
	printf("거짓 && 거짓 : %d\n", 0 && 0);

	//or
	printf("참 || 참 : %d\n", 1 || 1);
	printf("참 || 거짓 : %d\n", 1 || 0);
	printf("거짓 || 거짓 : %d\n", 0 || 0);
	
	//not
	printf("True -> False : %d", !1);
	printf("False -> True : %d", !0);

	// 비트 연산
	// 이진수로 표현된 숫자의 각 비트에 대한 연산을 수행
	// 십진수 10 -> 2진수 1010
	// 비트 AND(&) : 각 비트별로 AND 연산을 수행
	// 비트 OR(|) : 각 비트별로 OR 연산을 수행
	// 비트 NOT(~) : 모든 비트를 반전
	// 비트 XOR(^) : 두 피연산자의 비트가 같으면 거짓, 다르면 참
	// 비트 왼쪽 시프트(<<) : 비트를 왼쪽으로 이동
	// 비트 오른쪽 시프트(>>) : 비트를 오른쪽으로 이동

	int c = 5; //이진수로 0101
	int d = 3; //이진수로 0011
	int result_and = c & d;
	int result_or = c | d;
	int result_not = ~c;
	int result_xor = c ^ d;
	int result_shift_left = c << 1;
	int result_shift_right = c >> 1;

	printf("c & d : %d\n", result_and);
	printf("c | d : %d\n", result_or);
	printf("~c : %d\n", result_not);
	printf("c ^ d : %d\n", result_xor);
	printf("c << 1 : %d\n", result_shift_left);
	printf("c >> 1 : %d\n", result_shift_right);
}