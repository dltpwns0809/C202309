#include <stdio.h>

int main(void) {
	int choice;// choice 변수를 정수형으로 선언
	printf("1. 파일저장\n"); //출력 후 줄넘기기
	printf("2. 저장 없이 닫기\n"); // 출력 후 줄넘기기
	printf("3. 종료\n"); // 출력 후 줄넘기기
	scanf_s("%d", &choice); // 입력받은 값을 choice에 저장
	if (choice == 1) {  // 조건이 true라면 안의 코드를 실행
		printf("파일을 저장합니다.");
	}
	else if (choice == 2) { // 위 조건이 거짓이고 이번 조건이 참이면 안의 코드를 실행
		printf("저장 없이 닫습니다.");
	}
	else if (choice == 3) { // 위 두 조건이 거짓이고 이번 조건이 참이면 안의 코드를 실행
		printf("종료합니다");
	}
	else {// 위 조건 모두 거짓이면 안의 코드를 실행
		printf("잘못 입력하셨습니다");
	}
	return 0;
}