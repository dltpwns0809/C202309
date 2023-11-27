#include <stdio.h>
#include <string.h>

void print(struct tagAddress* pad);

typedef struct tagAddress
{
	char name[30]; // 이름
	char phone[20]; // 전화
	char address[100]; // 주소
}DATA;

int main(void)
{
	DATA ad;
	
	strcpy_s(ad.name, sizeof(ad.name), "홍길동");
	strcpy_s(ad.phone, sizeof(ad.phone), "1234-5678");
	strcpy_s(ad.address, sizeof(ad.address), "전남대" );
	
	print(&ad);
	return 0;
}

void print(struct tagAddress* pad)
{
	printf("이름 : %s \n", pad->name);
	printf("전화 : %s \n", pad->phone);
	printf("주소 : %s \n", pad->address);
}