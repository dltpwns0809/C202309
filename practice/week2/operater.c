#include <stdio.h>

int main()
{
	int x = +4; // ������ ���� x�� ���� �� �ʱ�ȭ
	int y = -2; // ������ ���� y �� ���� �� �ʱ�ȭ
	printf("x+ (-y) = %d\n", x + (-y)); // %d�κп� x+(-y)�� �Է��ϰ� ���
	printf("-x + (+y)= %d\n", -x + (+y)); // ���� ���� �Է��ϰ� ���
	return 0;
}