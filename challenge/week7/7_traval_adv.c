#include <stdio.h>
#define NUMCITY 3 // ��� ����
#define NUMPEOPLE 2

char names[NUMPEOPLE][10]; // ����� ����ŭ�� ���� �迭 ����
char cities[NUMCITY][10];

void calculateTravelDays();//�Լ� �̸� �̸� ����
int getSum(int travelDays[]);
double getAverage(int travelDays[]);
void printFamousCity(double dayArray[]);

int main() {

	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY); 
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names);

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	for (int i = 0;i < NUMCITY;i++) { //2�߹ݺ������� ��� 2�����迭 travelDays ��ġ�� ���� �Է�
		for (int j = 0;j < NUMPEOPLE;j++) {
			printf("���� %s���� ��� %s �� ���� �� ���� �Է��ϼ���:", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY]; 
	for (int i = 0;i < NUMCITY;i++) {
		int totalDays = getSum(travelDays[i]);
		double averageDay = getAverage(travelDays[i]);
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �� �� : %.2lf\n", cities[i], totalDays, averageDays);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays);
}

int getSum(int travelDays[]) {
	int sum = 0;// �� travelDays ���� ��� ���� ���� ���ϴ� �Լ�
	for (int i=0; i < NUMPEOPLE;i++) {
		sum += travelDays[i];
	}
	return sum;
}

double getAverage(int travelDays[]) {
	int sum = 0; // �� travelDays ���� ��� ���� ���� ���ϰ� ��� ���� ���� ����� ���ϴ� �ڵ�
	for (int i=0; i < NUMPEOPLE;i++) {
		sum += travelDays[i];
	}
	return ((double)sum)/(double)NUMPEOPLE;
}

void printFamousCity(double dayArray[]) {
	int famousCity_num = 0; // ���� �������� �ӹ� ���ø� ���ϱ� ���� ������ ���ư��� ���� ���� �ִ밪�� ���Ѵ�
	for (int i = 1;i < NUMCITY;i++) {
		if (famousCity_num < dayArray[i]){
			famousCity_num = i;
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s�Դϴ�", cities[famousCity_num]);
}