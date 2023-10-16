#include <stdio.h>
#define NUMCITY 3 // 상수 선언
#define NUMPEOPLE 2

char names[NUMPEOPLE][10]; // 상수의 값만큼의 문자 배열 선언
char cities[NUMCITY][10];

void calculateTravelDays();//함수 이름 미리 선언
int getSum(int travelDays[]);
double getAverage(int travelDays[]);
void printFamousCity(double dayArray[]);

int main() {

	printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY); 
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names);

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	for (int i = 0;i < NUMCITY;i++) { //2중반복문으로 모든 2차원배열 travelDays 위치에 값을 입력
		for (int j = 0;j < NUMPEOPLE;j++) {
			printf("도시 %s에서 사람 %s 가 보낸 일 수를 입력하세요:", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY]; 
	for (int i = 0;i < NUMCITY;i++) {
		int totalDays = getSum(travelDays[i]);
		double averageDay = getAverage(travelDays[i]);
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일 수 : %.2lf\n", cities[i], totalDays, averageDays);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays);
}

int getSum(int travelDays[]) {
	int sum = 0;// 한 travelDays 행의 모든 값의 합을 구하는 함수
	for (int i=0; i < NUMPEOPLE;i++) {
		sum += travelDays[i];
	}
	return sum;
}

double getAverage(int travelDays[]) {
	int sum = 0; // 한 travelDays 행의 모든 값의 합을 구하고 사람 수로 나눠 평균을 구하는 코드
	for (int i=0; i < NUMPEOPLE;i++) {
		sum += travelDays[i];
	}
	return ((double)sum)/(double)NUMPEOPLE;
}

void printFamousCity(double dayArray[]) {
	int famousCity_num = 0; // 가장 오래동안 머문 도시를 구하기 위해 변수를 돌아가며 값을 비교해 최대값을 구한다
	for (int i = 1;i < NUMCITY;i++) {
		if (famousCity_num < dayArray[i]){
			famousCity_num = i;
		}
	}
	printf("평균일 기준으로 가장 인기있었던 도시는 %s입니다", cities[famousCity_num]);
}