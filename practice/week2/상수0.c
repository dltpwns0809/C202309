#include <stdio.h>
#define PI 3.1415926 //미리 상수 선언

int main(void) {
	const int YEAR = 1972; //상수 선언
	printf("%d", YEAR);
	/*YEAR = 1973;*/ // 상수는 변경할 수 없기에 오류 발생

}