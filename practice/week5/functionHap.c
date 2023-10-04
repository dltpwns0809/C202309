#include <stdio.h>

int hapf(int value);   // 함수의 원형을 선언

void main() {
	printf("1부터      10까지의 합은 %d\n", hapf(10)); // %d의 위치에 hapf()의 함수에서 매개변수 따른 반환값을 입력해 출력
	printf("1부터    100까지의 합은 %d\n", hapf(100));// %d의 위치에 hapf()의 함수에서 매개변수 따른 반환값을 입력해 출력
	printf("1부터  1000까지의 합은 %d\n", hapf(1000));// %d의 위치에 hapf()의 함수에서 매개변수 따른 반환값을 입력해 출력
}

int hapf(int value) {//반환값이 정수형이므로 int형으로 함수 선언
	int i=1;// 정수형변수 선언 후 1로 초기화
	int hap = 0;//정수형 변수 선언 후 0으로 초기화
	while (i <= value) {// i <=value가 참이면 안의 코드 실행
		hap += i++;// hap에 i값을 더하고 i의 값을 1 증가시킴
	}
	return hap;//정수형 변수를 반환
}
