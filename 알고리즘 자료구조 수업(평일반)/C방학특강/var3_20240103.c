#include <stdio.h>

void main()
{
	// ���� ���� ������
	// ���� �����ڿ� ��������ڸ� ��ģ ������
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

	// ����ȯ
	// �������� Ÿ���� �ٸ� Ÿ������ ��ȯ���ִ� ��
	// �Ͻ���(������) ����ȯ : �ڵ� ����ȯ, ���� ������ Ÿ�Կ��� ū ������ Ÿ��
	// �������� �ս��� �Ͼ�� �ʴ´�

	int numInt = 5;
	double numDouble = numInt; //int -> double

	// ����� ����ȯ : �����ڰ� ���� ����ȯ�� ����, ū ������Ÿ�Կ��� ���� ������ Ÿ��
	// �������� �ս��� �߻��� �� ����
	float numFloat = 3.14;
	int numInt2 = (int)numFloat;

}