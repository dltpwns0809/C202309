#include <stdio.h>

int main(void) {
	int i=0; //i�� ������ ���� �� 0���� �ʱ�ȭ
	while (i < 10) { // i<10�� true�̸� �ݺ�
		if (i % 2 == 0) {  // i�� 2�� ���� �������� 0�϶� ����
			i++;  // i���� 1 ����
			continue; // �ݺ��� ó������ �̵�
		}
		printf("%d Hello World\n", i++); // %d�� i ���� �Է� �� ����ϰ� �ٳѱ��
	}
	return 0;
}