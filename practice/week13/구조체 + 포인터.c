#include <stdio.h>
#include <string.h>
typedef struct tagAddress
{
	char name[30]; // �̸�
	char phone[20]; // ��ȭ
	char address[100]; // �ּ�
} DATA;

int main(void)
{
	DATA ad;
	DATA* pad;
	
	pad = &ad;
	strcpy_s((*pad).name, sizeof((*pad).name), "ȫ�浿");
	strcpy_s((*pad).phone, sizeof((*pad).phone), "1234 - 567");
	strcpy_s((*pad).address, sizeof((*pad).address), "������" );
	
	printf("�̸� : %s \n", pad->name);
	printf("��ȭ : %s \n", pad->phone);
	printf("�ּ� : %s \n", pad->address);
	return 0;
}