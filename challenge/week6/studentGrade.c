#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade);//�Լ� �̸��� �̸� ����
int sumScores(int scores[]);
double averageScores(int scores[]);
void printRanks(int scores[]);

int main() {
	int scores[STUDENTS]; //STUDENTS�� ũ�⸸ŭ�� ������ �迭 ����
	for (int i = 0;i < STUDENTS;i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);//scores�迭�� i���� �Է¹��� �� �Է�
	}
	char ch = getchar(); // ���ۿ� �Է¹��� �����̽��ٸ� ���ڸ� �Է¹޴� �Լ��� �̿��� ����

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��ϼ���");

	scanf_s("%c", &target, 1);// ũ�Ⱑ 1�� ���ڸ� target ������ �Է� 

	classifyStudents(scores, target);//�Ű������� �����ϰ� �Լ��� ����
	sumScores(scores);
	averageScores(scores);
	printRanks(scores);
	return 0;
}

void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�\n");
	char grade = ' ';// ������ ���� ����
	for (int i = 0;i < STUDENTS;i++) {
		if (scores[i] >= 90) { // scores[i]�� ���� ���ǿ� ������ ���� �ڵ带 ����
			grade = 'A';
		}
		else if (scores[i] >= 80) {// scores[i]�� ���� ���ǿ� ������ ���� �ڵ带 ����
			grade = 'B';
		}
		else if (scores[i] >= 70) {// scores[i]�� ���� ���ǿ� ������ ���� �ڵ带 ����
			grade = 'C';
		}
		else if (scores[i] >= 60) {// scores[i]�� ���� ���ǿ� ������ ���� �ڵ带 ����
			grade = 'D';
		}
		else {//�� ��� ������ �����̶�� ��� ���� �ڵ带 �����Ŵ
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d�л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[]) {
	int sum=0;
	for (int i = 0;i < STUDENTS;i++) {
		sum += scores[i];// scores �迭�� ��� ���� sum�� ����
	}
	printf("�л��� ������ �� ���� %d �̰�, ",sum);
	return 1;
}

double averageScores(int scores[]) {
	int sum = 0;
	for (int i = 0;i < STUDENTS;i++) {
		sum += scores[i];
	}
	printf("��� ���� %f�Դϴ�\n", ((double)sum)/STUDENTS); // sum���� double������ �����ϰ� �л����� ���� ����� ����
	return 1;
}

void printRanks(int scores[]) {
	int rank[STUDENTS]; // �л� �� ��ŭ�� ũ���� �迭 ����
	int temp; //���� ��ȯ�� �� ����� ���� ����
	for (int i = 1;i < STUDENTS + 1;i++) { 
		rank[i - 1] = i; // [1,2,3,4,5]�� ������ �迭
	}
	for (int i = 0;i < STUDENTS;i++) { // �������� ���·� �迭�� �����ϴµ� ���ĵ����� ���� ��ȯ�� rank�迭�� ������ ������ ��Ÿ���� �迭�� �ٲ�
		for (int j = i;j < STUDENTS;j++) {
			if (scores[i] < scores[j]) {
				temp = rank[i]; // ������ ������ Ȱ���� ���� ��ȯ
				rank[i] = rank[j];
				rank[j] = temp;
			}
		}
	}
	for (int i = 0;i < STUDENTS ;i++) {
		printf("%d�л��� ������ %d �Դϴ�\n", i+1, rank[i]);
	}
}