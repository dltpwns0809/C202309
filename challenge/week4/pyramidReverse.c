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
		for (int j = 0; j < i;j++) { // *의 정렬을 위해 부족한 만큼 s를 입력해 정렬한다
			// 0번줄에 0개 -> floor-1 층의 갯수는 floor-1개로 층 번호와 동일한 갯수만큼 입력 
			printf("S");
		}
		for (int j = 2*(floor-i)-1 ; j>0;j--)  {// 0번층에서 2*floor-1개로 시작해 한 층당 앞뒤로 한개씩 
			// 총 두개씩 감소하므로 floor 대신 floor-i 을 입력해 그 갯수만큼 줄력한다
			printf("*");
		}
		printf("\n");//줄넘기기

	}
	return 0;
}