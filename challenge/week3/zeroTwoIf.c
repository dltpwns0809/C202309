#include <stdio.h>

int main(void) {
	int num = 0; // num 변수를 정수형으로 선언 후 0으로 초기화
	printf("숫자를 입력하시오: "); // 출력
	scanf_s("%d", &num); // 입력받은 값을 num에 저장
	if (num== 0) {  // 조건이 true라면 안의 코드를 실행
		printf("zero");
	}
	else if (num == 1) { // 위 조건이 거짓이고 이번 조건이 참이면 안의 코드를 실행
		printf("one");
	}
	else if (num == 2) { // 위 두 조건이 거짓이고 이번 조건이 참이면 안의 코드를 실행
		printf("two");
	}
	else {// 위 조건 모두 거짓이면 안의 코드를 실행
		printf("not 0 ~ 2");
	}
	return 0;
}