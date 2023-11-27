#include <stdio.h>
#include <string.h>

typedef struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
}DATA;

void main(void)
{
	DATA ad[3];
	DATA* pad;
	int i;
	
	pad = ad;
	
	for (i = 0; i < 3; i++)
	{
		sprintf_s(pad[i].name, sizeof(pad[i].name), "홍길동 %d", i);
		strcpy_s(pad[i].phone, sizeof(pad[i].phone), "1234-5678");
		strcpy_s(pad[i].address, sizeof(pad[i].address), "전남대" );
	}

	for (i = 0; i < 3; i++)
	{
		printf("이름 : %s \n", pad[i].name);
		printf("전화 : %s \n", pad[i].phone);
		printf("주소 : %s \n", pad[i].address);
	}
}