#include <stdio.h>
#include <string.h>
struct tagAddress
{
	char name[30]; // �̸�
	char phone[20]; // ��ȭ
	char address[100]; // �ּ�
	};
int main(void)
{
	struct tagAddress ad;
	// ad.name = ��ȫ�浿�� // ����. �迭�̹Ƿ� �ּ� ����
	strcpy_s(ad.name, sizeof(ad.name), "ȫ�浿");
	strcpy_s(ad.phone, sizeof(ad.phone), "1234-5678");
	strcpy_s(ad.address, sizeof(ad.address), "������" );
		
	printf("�̸� : %s \n", ad.name);
	printf("��ȭ : %s \n", ad.phone);
	printf("�ּ� : %s \n", ad.address);
	return 0;
}