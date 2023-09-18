#include <stdio.h>

int main(void) {
	int i = 0; // //i를 정수형 선언 후 0으로 초기화
	do  { // 일단 내부 코드를 한번 실행
		if (i % 2 == 0) { // i를 2로 나눈 나머지가 0이면 실행
			i++; // i를 1 증가 
			continue; // 반복문 처음으로 이동
		} 
		printf("%d Hello World\n", i++); // %d에 i 값 입력 후 출력하고 줄넘기기
	} while (i < 10); // 조건을 확인 후 참이면 반복
	return 0;
}