#include <stdio.h>
#include <string.h>

typedef struct tagAddress
{
	char name[30]; // 이름
	char phone[20]; // 전화
	char address[100]; // 주소
}DATA;

void print(DATA* pad);

int main(void)
{
	DATA ad[3];
	int i;
	
	for (i = 0; i < 3; i++)
	{
		sprintf_s(ad[i].name, sizeof(ad[i].name), "홍길동 %d", i);
		strcpy_s(ad[i].phone, sizeof(ad[i].phone), "1234-5678");
		strcpy_s(ad[i].address, sizeof(ad[i].address), "전남대" );
	}
	print(ad);
	return 0;
}

void print(DATA* pad)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("이름 : %s \n", pad[i].name);
		printf("전화 : %s \n", pad[i].phone);
		printf("주소 : %s \n", pad[i].address);
	}
}