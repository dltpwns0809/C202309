#include <stdio.h>
#include <string.h>
typedef struct tagAddress
{
	char name[30]; // 이름
	char phone[20]; // 전화
	char address[100]; // 주소
} DATA;

int main(void)
{
	DATA ad;
	DATA* pad;
	
	pad = &ad;
	strcpy_s((*pad).name, sizeof((*pad).name), "홍길동");
	strcpy_s((*pad).phone, sizeof((*pad).phone), "1234 - 567");
	strcpy_s((*pad).address, sizeof((*pad).address), "전남대" );
	
	printf("이름 : %s \n", pad->name);
	printf("전화 : %s \n", pad->phone);
	printf("주소 : %s \n", pad->address);
	return 0;
}