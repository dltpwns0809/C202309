#include <stdio.h>
#define NUMCITY 3 //��� ����
#define NUMPEOPLE 2 // ��� ����

char names[NUMPEOPLE][10]; // ����� ��ŭ�� ���� �迭 ����
char cities[NUMCITY][10];

void calculateTravelDays(); // �Լ� �̸� �̸� ����

int main() {

	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) { 
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));//cities�� ���ʴ�� ���� �Է�
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names); 

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];  // ��� 2���� ��ķ� �̿��� 2���� �迭 ����

	for (int i = 0;i < NUMCITY;i++) {
		for (int j = 0;j < NUMPEOPLE;j++) { // 2�� �ݺ��� ����� ��� ���ÿ� ����� ��쿡 ���� �Է¹���
			printf("���� %s���� ��� %s �� ���� �� ���� �Է��ϼ���:", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	for (int i = 0;i < NUMCITY;i++) {
		int totalDays = 0; // ���� ���� ���ֱ� ���� ���� �ʱ�ȭ
		for (int j = 0;j < NUMPEOPLE;j++) {
			totalDays += travelDays[i][j]; // ���߹ݺ����� ���� travelDays[i][j]�� ���� totalDays�� �Է�
		}
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �� �� : %.2f\n", cities[i], totalDays, averageDays);

	}
}
