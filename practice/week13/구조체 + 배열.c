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
	DATA ad[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		sprintf_s(ad[i].name, sizeof(ad[i].name), "ȫ�浿 %d", i);
		strcpy_s(ad[i].phone, sizeof(ad[i].phone), "1234-5678");
		strcpy_s(ad[i].address, sizeof(ad[i].address), "������" );
	}
	for (i = 0; i < 3; i++)
	{
		printf("�̸� : %s \n", ad[i].name);
		printf("��ȭ : %s \n", ad[i].phone);
		printf("�ּ� : %s \n", ad[i].address);
	}
	return 0;
}