#include <stdio.h>
#include <string.h>
struct tagAddress
{
	char name[30]; // 이름
	char phone[20]; // 전화
	char address[100]; // 주소
	};
int main(void)
{
	struct tagAddress ad;
	// ad.name = “홍길동” // 에러. 배열이므로 주소 저장
	strcpy_s(ad.name, sizeof(ad.name), "홍길동");
	strcpy_s(ad.phone, sizeof(ad.phone), "1234-5678");
	strcpy_s(ad.address, sizeof(ad.address), "전남대" );
		
	printf("이름 : %s \n", ad.name);
	printf("전화 : %s \n", ad.phone);
	printf("주소 : %s \n", ad.address);
	return 0;
}