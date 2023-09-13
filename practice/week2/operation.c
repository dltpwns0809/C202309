#include <stdio.h>

int main(void) {
	int x = 4; //정수형으로 선언
	int y = 2; // 정수형으로 선언
	int z;// 값 없이 정수형으로 선언
	
	z = x + y; //z를 x+y 값으로 초기화
	printf("z = x + y = %d\n", z); // z값을 %d부분에 출력
	z = x - y; //z를 x-y 값으로 초기화
	printf("z = x - y = %d\n", z); // z값을 %d부분에 출력
	z = x * y; //z를 x*y 값으로 초기화
	printf("z = x * y = %d\n", z); // z값을 %d부분에 출력
	z = x / y; //z를 x/y 값으로 초기화
	printf("z = x / y = %d\n", z); // z값을 %d부분에 출력
	return 0;
}