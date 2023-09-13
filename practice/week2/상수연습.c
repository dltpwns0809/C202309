#include <stdio.h>
#define PI 3.1415926 // 미리 상수 선언
int main(void) {
	const int YEAR = 1972;
	printf("C언어가 발표된 연도 : %d \n", YEAR);

	// YEAR = 1973;  상수는 변경 불가능
	printf("원의 넓이를 구하는 공식: %.2f * 반지름^2", PI);
	return 0;
}