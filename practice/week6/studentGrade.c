#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade);//�Լ� �̸��� �̸� ����

int main() {
	int scores[STUDENTS]; //STUDENTS�� ũ�⸸ŭ�� ������ �迭 ����
	for (int i = 0;i < STUDENTS;i++) { 
		printf("�л� %d�� ������ �Է��ϼ���: ", i+1);
		scanf_s("%d", &scores[i]); //scores�迭�� i���� �Է¹��� �� �Է�
	}
	char ch = getchar(); // ���ۿ� �Է¹��� �����̽��ٸ� ���ڸ� �Է¹޴� �Լ��� �̿��� ����

	char target; 
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��ϼ���");
	
	scanf_s("%c", &target, 1); // ũ�Ⱑ 1�� ���ڸ� target ������ �Է� 
		
	classifyStudents(scores, target); // �Ű����� �����ϰ� �Լ� ����
	
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
			printf("%d�л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}