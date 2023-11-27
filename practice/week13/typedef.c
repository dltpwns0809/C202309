#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

int main(){
	bool bCondition;
	
	bCondition = TRUE;

	if (bCondition == TRUE)
	{
	printf("조건식은 TRUE입니다.");
	}
	return 0;
}