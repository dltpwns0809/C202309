#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

void addTask(int taskCount,char tasks[][CHAR_NUM]);
void delTask(int delIndex, int taskCount, char tasks[][CHAR_NUM]);
void printTask(int taskCount, char tasks[][CHAR_NUM]);

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" };  // �� ����� ��/���� ������ ������ 2���� �迭����
	int taskCount = 0; // �� ���� ������ ��Ÿ���� �� 

	printf("TODO ����Ʈ ����! \n");

	while (1) {//���α׷��� ���ѹݺ���Ű�� ���� ������ true(==1)�� ����
		int choice = -1;

		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��Ϻ���\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; //���α׷� �������� �Ǻ��� ���� ����
		int delIndex = -1;   // ��ϻ����� Ȱ���� ���� ����
		int changeIndex = -1;  // ��� �����Ҷ� ����� ���� ����
		char ch; // ���� ���Ÿ� ���� ���� ����

		switch (choice) { // ������ �Է¹��� ���� ���� �ڵ带 ����
		case 1:
			if (taskCount >= 10) { // �߰� ������ �� ���� �ִ� ������ ���� ���α׷� ���� ���Ǽ���
				terminate = 2;
				break;
			}
			addTask(taskCount,tasks);
			taskCount++; // �� �� �� ���� 1�� ����
			break; // switch-case �� ����
		case 2:
			printf("������ ���� ��ȣ�� �Է����ּ���. (1���� ����) :");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {// �Է¹��� �� > �� ���� ���� �� ��� �ڵ� ���� x
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				delTask(delIndex, taskCount, tasks);
				taskCount -= 1;
			}
			break; // switch-case �� ����
		case 3:
			printTask(taskCount, tasks);
			break; // switch-case �� ����
		case 4:
			terminate = 1;
			break; // switch-case �� ����
		case 5:
			for (int i = 0; i < taskCount;i++) { //� ��ȣ�� �������� �Է¹ޱ� �� �ѹ� ����� ������
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("������ ����� ��ȣ�� �Է����ּ���(���ڸ� �Է�) :");
			scanf_s("%d", &changeIndex);
			ch = getchar();//���� ����
			printf("����� ������ �̸��� �Է��ϼ���:");
			scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
			//�Է¹��� ���� ������ ������ ��ȣ�� �ε����� ����
			break; // switch-case �� ����
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
		}
		else if (terminate == 2) {
			printf("�� ���� 10���� �ִ�ġ�̹Ƿ� ���α׷��� �����մϴ�");
		}
		if (terminate != 0) {
			break;//while�� ����
		}


	}
}

// 2���� �迭���� ���� ������ �Է����ش�
void addTask(int taskCount, char tasks[][CHAR_NUM]) {//������ ������ ����� �Ѱ��ش�
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���) : ");
	scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount])); //�� ���� ������ ���³��� ������ ���� �� ���� ������ �ε��� ��ȣ�� ����
	printf("�� ��""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]);
}

void delTask(int delIndex, int taskCount, char tasks[][CHAR_NUM]) {
	printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);
	strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");
	//�Է¹��� ��ȣ�� ���� �� ������ ����
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}// ����� �Ѱ��� �����ϱ� ���� �� ���� ���� ��ĭ�� ���� �ε����� �����Ͽ� ��ĭ�� ���ش� 
}

void printTask(int taskCount,char tasks[][CHAR_NUM]) {
	printf("�� �� ���\n");
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}