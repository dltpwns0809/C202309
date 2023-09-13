#include <stdio.h>

int main()
{
	int x = 1;//x를 정수형 선언 후 초기화
	printf("x=%d\n", x++);//x를 사용 후 1 증가
	printf("x=%d\n", x++);//x를 사용 후 1 증가
	printf("x=%d\n", ++x);//x+1을 하고 사용
	printf("x=%d\n", x--);//x 사용 후 1 감소
	printf("x=%d\n", x--);//x 사용 후 1 감소
	printf("x=%d\n", --x);//x-1 하고 사용
}