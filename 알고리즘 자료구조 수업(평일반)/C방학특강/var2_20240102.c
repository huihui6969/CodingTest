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
	// ������ ���������� �� �������.

	// �� ����
	// �� ���� ���� � ���迡 �ִ����� Ȯ���ϴ� ����
	// ũ�� ����, ���� �ٸ�
	int num1 = 10, num2 = 20;
	if (num1 < num2)
	{
		printf("num2�� num1���� Ů�ϴ�");
	}
	// �� ������ ����� �׻� ��, �Ǵ� ����
	// ũ��(>), �۴�(<) : �� ���� �������� �ڱ��ڽ��� �����ϰ� ũ�� ���θ� �Ǵ�
	// ũ�ų� ����(>=), �۰ų� ����(<=) : �� ���� �� ���� �� �ڱ� �ڽ��� �����ؼ� ũ�� ���θ� �Ǵ�
	// ���� (==), �ٸ���(!=) : �� ���� ������ �� ���� ����

	// �� ������(&&, ||, !)
	// �� �����ڴ� �������� ������ �����ϰų� �����ϴ� �뵵
	// &&(and, ����) : ������ ����(�ǿ�����)�� ��� ��(True)�� �� ���� ��ȯ
	// ||(or, ����) : ������ ����(�ǿ�����)�� �ϳ��� ��(True)�� �� ���� ��ȯ
	// !(not, ������) : ����(�ǿ�����)�� ���� ����

	printf("�� && �� : %d\n", 1 && 1);
	printf("�� && ���� : %d\n", 1 && 0);
	printf("���� && �� : %d\n", 0 && 1);
	printf("���� && ���� : %d\n", 0 && 0);

	//or
	printf("�� || �� : %d\n", 1 || 1);
	printf("�� || ���� : %d\n", 1 || 0);
	printf("���� || ���� : %d\n", 0 || 0);
	
	//not
	printf("True -> False : %d", !1);
	printf("False -> True : %d", !0);

	// ��Ʈ ����
	// �������� ǥ���� ������ �� ��Ʈ�� ���� ������ ����
	// ������ 10 -> 2���� 1010
	// ��Ʈ AND(&) : �� ��Ʈ���� AND ������ ����
	// ��Ʈ OR(|) : �� ��Ʈ���� OR ������ ����
	// ��Ʈ NOT(~) : ��� ��Ʈ�� ����
	// ��Ʈ XOR(^) : �� �ǿ������� ��Ʈ�� ������ ����, �ٸ��� ��
	// ��Ʈ ���� ����Ʈ(<<) : ��Ʈ�� �������� �̵�
	// ��Ʈ ������ ����Ʈ(>>) : ��Ʈ�� ���������� �̵�

	int c = 5; //�������� 0101
	int d = 3; //�������� 0011
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