#include <stdio.h>

int main(void) {
	int x = 4; //���������� ����
	int y = 2; // ���������� ����
	int z;// �� ���� ���������� ����

	z = (x + y) * (x - y); //z�� (x+y)*(x-y) ������ �ʱ�ȭ
	printf("z = (x + y)* (x-y) = %d\n", z); // z���� %d�κп� ���
	z = (x * y) + (x / y); //z�� (x*y)+(x/y) ������ �ʱ�ȭ
	printf("z = (x * y) +(x/y)= %d\n", z); // z���� %d�κп� ���
	z = x + y + 2004;// z�� �ʱ�ȭ
	printf("z = x+y+2004 = %d\n", z); // z ���� %d �κп� ���
	return 0;
}