#include <stdio.h>

void main()
{
	// ������
	// ��� ������ : �⺻���� ���� ����
	// +, -, *, / : ��Ģ����
	// % : ������

	int a = 10, b = 3;
	int sum = a + b; //���� ����� ������ ������ �� ����.
	int difference = a - b;
	int product = a * b;
	float quotient = a / b;
	float quotient2 = (float)a / (float)b;
	int remainder = a % b;

	printf("sum ��� :%d\n", sum);
	printf("difference ��� :%d\n", difference);
	printf("product ��� :%d\n", product);
	printf("quotient ��� :%f\n", quotient);
	printf("quotient2 ��� :%f\n", quotient2);
	printf("remainder ��� :%d\n", remainder);

	// ���� ���� : ������ ���� �Ҵ��ϴ� ����(=)
	int x = 5;

	// ���� ���� : ������ ���� 1�� ������Ű�ų� ���ҽ�ų �� ���� ����
	// ���� ���� ����: count++, count-- : ���̳� ������ ������ ���� ����� +,-�� ������
	int count = 10;
	printf("���� count : %d\n", count); //10
	count++;
	printf("���� count : %d\n", count); //11
	count--;

	// ���� ����2
	// ���� ���� ����: ++count, --count : �ǿ������� ���� ������Ų ���� �ش� ������ ������.


	printf("����, ���� ���� ����\n");
	int num_1 = 7;
	int num_2 = 7;
	int result01, result02;

	result01 = (++num_1) - 5;
	result02 = (num_2++) - 5;

	printf("result01 :%d, num_1 : %d\n", result01, num_1);
	printf("result02 :%d, num_2 : %d\n", result02, num_2);
	//������ ���������� �� �������.



}