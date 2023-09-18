#include <stdio.h>

int main(void) {
	int i=0; //i를 정수형 선언 후 0으로 초기화
	while (i < 10) { // i<10이 true이면 반복
		if (i % 2 == 0) {  // i를 2로 나눈 나머지가 0일때 실행
			i++;  // i값을 1 증가
			continue; // 반복문 처음으로 이동
		}
		printf("%d Hello World\n", i++); // %d에 i 값을 입력 후 출력하고 줄넘기기
	}
	return 0;
}