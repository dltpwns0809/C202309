#include <stdio.h>

int main(void) {
	int floor; // 변수를 정수형으로 선언
	while (1) { // 무한반복
		printf("몇 층으로 쌓을까요?(5~100)");// 출력 
		scanf_s("%d", &floor); // 입력받은 변수를 floor 변수에 입력받음
		if (floor < 5 || floor > 100) { // 조건이 참이라면 안의 코드를 출력하고 반복문에 진입
			printf("제한범위 밖입니다\n");
		}
		else {// 위 조건이 거짓이라면 (5<=floor<=100)
			break; //반복문을 끝냄
		}
	}
	
	
	for (int i = 0;i < floor;i++) {  // 입력받은 층(floor)만큼 반복시킴
		for (int j = floor-i-1; j >0;j--) { // *의 정렬을 위해 부족한 만큼 s를 입력해 정렬한다
			// 만약 6층이라면 마지막줄에는 *만 6(==floor)개, s는 0(floor-i-1)개이고 한줄씩 올라갈수록 s가 하나씩 증가해 마지막에는 5(floor-i-1)개가 된다 
			printf("S");
		}
		for (int j = 0;j < 2 * i+1;j++) {// 첫줄에는 1개부터 시작해 한줄마다 앞, 뒤로 한개씩 별이 증가하므로 공차가 2이고 시작값이 1인 수열(0부터 시작하는)이 된다 
			printf("*"); 
		}
		printf("\n");//줄넘기기

	}

}