#include <stdio.h>

int main(void) {
	int x = 4; //���������� ����
	int y = 2; // ���������� ����
	int z;// �� ���� ���������� ����
	
	z = x + y; //z�� x+y ������ �ʱ�ȭ
	printf("z = x + y = %d\n", z); // z���� %d�κп� ���
	z = x - y; //z�� x-y ������ �ʱ�ȭ
	printf("z = x - y = %d\n", z); // z���� %d�κп� ���
	z = x * y; //z�� x*y ������ �ʱ�ȭ
	printf("z = x * y = %d\n", z); // z���� %d�κп� ���
	z = x / y; //z�� x/y ������ �ʱ�ȭ
	printf("z = x / y = %d\n", z); // z���� %d�κп� ���
	return 0;
}