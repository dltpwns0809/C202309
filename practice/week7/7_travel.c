#include <stdio.h>
#define NUMCITY 3 //상수 선언
#define NUMPEOPLE 2 // 상수 선언

char names[NUMPEOPLE][10]; // 상수값 만큼의 문자 배열 선언
char cities[NUMCITY][10];

void calculateTravelDays(); // 함수 이름 미리 선언

int main() {

	printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) { 
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));//cities에 차례대로 값을 입력
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names); 

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];  // 상수 2개를 행렬로 이용한 2차원 배열 선언

	for (int i = 0;i < NUMCITY;i++) {
		for (int j = 0;j < NUMPEOPLE;j++) { // 2중 반복문 사용해 모든 도시와 사람의 경우에 값을 입력받음
			printf("도시 %s에서 사람 %s 가 보낸 일 수를 입력하세요:", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	for (int i = 0;i < NUMCITY;i++) {
		int totalDays = 0; // 이전 값을 없애기 위해 변수 초기화
		for (int j = 0;j < NUMPEOPLE;j++) {
			totalDays += travelDays[i][j]; // 이중반복문을 돌려 travelDays[i][j]의 값을 totalDays에 입력
		}
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일 수 : %.2f\n", cities[i], totalDays, averageDays);

	}
}
