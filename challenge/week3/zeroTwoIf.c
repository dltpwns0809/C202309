#include <stdio.h>

int main(void) {
	int num = 0; // num ������ ���������� ���� �� 0���� �ʱ�ȭ
	printf("���ڸ� �Է��Ͻÿ�: "); // ���
	scanf_s("%d", &num); // �Է¹��� ���� num�� ����
	if (num== 0) {  // ������ true��� ���� �ڵ带 ����
		printf("zero");
	}
	else if (num == 1) { // �� ������ �����̰� �̹� ������ ���̸� ���� �ڵ带 ����
		printf("one");
	}
	else if (num == 2) { // �� �� ������ �����̰� �̹� ������ ���̸� ���� �ڵ带 ����
		printf("two");
	}
	else {// �� ���� ��� �����̸� ���� �ڵ带 ����
		printf("not 0 ~ 2");
	}
	return 0;
}