#include <stdio.h>

int main(void) {
	int x = 4; //정수형으로 선언
	int y = 2; // 정수형으로 선언
	int z;// 값 없이 정수형으로 선언

	z = (x + y) * (x - y); //z를 (x+y)*(x-y) 값으로 초기화
	printf("z = (x + y)* (x-y) = %d\n", z); // z값을 %d부분에 출력
	z = (x * y) + (x / y); //z를 (x*y)+(x/y) 값으로 초기화
	printf("z = (x * y) +(x/y)= %d\n", z); // z값을 %d부분에 출력
	z = x + y + 2004;// z를 초기화
	printf("z = x+y+2004 = %d\n", z); // z 값을 %d 부분에 출력
	return 0;
}