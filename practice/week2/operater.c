#include <stdio.h>

int main()
{
	int x = +4; // 정수형 변수 x를 선언 후 초기화
	int y = -2; // 정수형 변수 y 를 선언 후 초기화
	printf("x+ (-y) = %d\n", x + (-y)); // %d부분에 x+(-y)에 입력하고 출력
	printf("-x + (+y)= %d\n", -x + (+y)); // 위와 같이 입력하고 출력
	return 0;
}