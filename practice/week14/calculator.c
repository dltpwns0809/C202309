#include<stdio.h>
#include"calculator.h"

int main() {
	int a, b;
	printf("�� ���ڸ� ���� �������� �Է��ϼ���:");
	scanf_s("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, Add(a, b));
	printf("%d - %d = %d\n", a, b, Subtract(a, b));
	printf("%d / %d = %d\n", a, b, Divide(a, b));
	printf("%d * %d = %d\n", a, b, Multiple(a, b));
	return 0;
}