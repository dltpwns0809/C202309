#include <stdio.h>
#include <string.h>

void print(struct tagAddress* pad);

typedef struct tagAddress
{
	char name[30]; // �̸�
	char phone[20]; // ��ȭ
	char address[100]; // �ּ�
}DATA;

int main(void)
{
	DATA ad;
	
	strcpy_s(ad.name, sizeof(ad.name), "ȫ�浿");
	strcpy_s(ad.phone, sizeof(ad.phone), "1234-5678");
	strcpy_s(ad.address, sizeof(ad.address), "������" );
	
	print(&ad);
	return 0;
}

void print(struct tagAddress* pad)
{
	printf("�̸� : %s \n", pad->name);
	printf("��ȭ : %s \n", pad->phone);
	printf("�ּ� : %s \n", pad->address);
}