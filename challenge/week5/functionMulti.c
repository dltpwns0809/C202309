#include <stdio.h>

int multiF(int value);// 함수 원형 선언

void main() { 
	printf("1부터    2까지의 곱은 %d\n", multiF(2)); //%d의 위치에 multiF()의 함수에서 매개변수 따른 반환값을 입력해 출력
	printf("1부터    3까지의 곱은 %d\n", multiF(3));//%d의 위치에 multiF()의 함수에서 매개변수 따른 반환값을 입력해 출력
	printf("1부터    5까지의 곱은 %d\n", multiF(5));//%d의 위치에 multiF()의 함수에서 매개변수 따른 반환값을 입력해 출력
}

int multiF(int value) {  // 반환값이 정수형이므로 int 형으로 선언
	int i = 1;  // 정수형 변수 선언 + 1로 초기화	
	long mul = 1; // 정수형보다 값의 범위가 큰 long으로 변수 선언
	while (i <= value) { // i<=value 가 참이면 안의 코드를 실행
		mul*= i++; // mul 변수에 i의 값을 곱하고 i의 값을 1 증가시킴
	}
	return mul; // 정수형 변수를 반환한다
}
