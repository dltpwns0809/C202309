#include <stdio.h>

int main()
{
	int x = 1;//x�� ������ ���� �� �ʱ�ȭ
	printf("x=%d\n", x++);//x�� ��� �� 1 ����
	printf("x=%d\n", x++);//x�� ��� �� 1 ����
	printf("x=%d\n", ++x);//x+1�� �ϰ� ���
	printf("x=%d\n", x--);//x ��� �� 1 ����
	printf("x=%d\n", x--);//x ��� �� 1 ����
	printf("x=%d\n", --x);//x-1 �ϰ� ���
}