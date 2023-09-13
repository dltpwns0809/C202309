#include <stdio.h>

int main(void) {
	int x;//정수형 변수 x 선언
	int y;//정수형 변수 y 선언
	int z;//정수형 변수 z 선언

	x = 1; // x를 1로 초기화
	y = 2; // y를 2로 초기화
	z = x + y; //z를 x+y 값으로 초기화
	printf("%d", z); // 정수형 변수 z를 출력 
	return 0;
}