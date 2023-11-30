#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX_CHAR 15
typedef struct student_data {//�л� �̸�/������ �����ϴ� ����ü ����
  char name[MAX_CHAR];
  int score;
} DATA;//typedef�� Ȱ��

void initialize(DATA* data, char name[]);
void classifyStudents(DATA students[], char targetGrade, int count);
int sumScores(DATA students[], int count);
double averageScores(DATA students[], int count);
int printRanks(DATA students[], int count);//�Լ� �̸� ����

int main() {
  char name[100][MAX_CHAR] = {""}, target; // ���ڿ� 100���� ����� ���ڿ� �迭 ����
  int count = 0; 
  char temp[MAX_CHAR] = { //����ڿ��� �ӽ÷� �Է¹��� ���ڿ��� �����ϴ� ����
      0,
  };
  for (int i = 0; i < 100; i++) {
    printf("�л� %d�� �̸��� �Է��ϼ���(���̻� ���� �� ���͸� �Է�) : ", i + 1);
    gets_s(temp,sizeof(temp));// ����+ ����Ű�� �ν��ϱ� ���� ��� 
    if (temp[0] == '\0') { // �� gets_s���� ����+���͸� �Է¹޾��� ����� ��
      if (count != 0) //count�� 0�ϰ�� �����Ҵ翡�� ������ �߻��Ѵٴ� ����������� �߰���
        break;
      else {
        printf("�л� ���� 0���̱� ������ ���α׷��� ����˴ϴ�\n");
        return 0;
      }
        
    } 
    strcpy_s(name[i], (int)sizeof(name[i]), temp);//�ӽ÷� temp������ ����� ���� name�� ����
    count++;// �л� �� ����
  }
  DATA* students = (DATA*)malloc(count * sizeof(DATA)); //����ü �迭 ���� �Ҵ�
  while (students == NULL) { // ���� �Ҵ� ���н� �ٽ� �����Ҵ����ִ� �ڵ�
    students = (DATA*)malloc(count * sizeof(DATA));
  }
  for (int i = 0; i < count; i++) { 
    initialize(&students[i], name[i]);//����ü�� name�� �����Ҵ� + name������ ����� �� ����
    printf("�л� %s�� ������ �Է��ϼ���", students[i].name); 
    scanf_s("%d", &students[i].score); 
  }
  char ch = getchar();// ���� ����
  printf("Ư�� ���� (A,B,C,D,F)�� �Է��ϼ���");

  scanf_s("%c", &target, 1);  

  classifyStudents(students,target,count); 
  sumScores(students,count);
  averageScores(students,count);
  printRanks(students,count);

  free(students);

  return 0;
}

void classifyStudents(DATA students[], char targetGrade,int count) {
  printf("�л� ���� �з�\n");
  char grade = ' ';  // ������ ���� ����
  for (int i = 0; i < count; i++) {
    if (students[i].score >=
        90) {  // students[i].score�� ���� ���ǿ� ������ ���� �ڵ带 ����
      grade = 'A';
    } else if (students[i].score >=
               80) {  // students[i].score�� ���� ���ǿ� ������ ���� �ڵ带 ����
      grade = 'B';
    } else if (students[i].score >=
               70) {  // students[i].score�� ���� ���ǿ� ������ ���� �ڵ带 ����
      grade = 'C';
    } else if (students[i].score >=
               60) {  // students[i].score�� ���� ���ǿ� ������ ���� �ڵ带 ����
      grade = 'D';
    } else {  // �� ��� ������ �����̶�� ��� ���� �ڵ带 �����Ŵ
      grade = 'F';
    }
    if (targetGrade == grade) {
      printf("%s�л��� %c ������ �޾ҽ��ϴ�.\n", students[i].name, targetGrade);
    }
  }
}

int sumScores(DATA students[], int count) {
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum += students[i].score;  //students �迭�� ��� score���� sum�� ����
  }
  printf("�л��� ������ �� ���� %d �̰�, ", sum);
  return 1;
}

double averageScores(DATA students[], int count) {
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum += students[i].score;
  }
  printf(
      "��� ���� %f�Դϴ�\n",
      ((double)sum) /
          count);  // sum���� double������ �����ϰ� �л����� ���� ����� ����
  return 1;
}

int printRanks(DATA students[],int count) {
  int* rank= (int*)malloc((count) * sizeof(int));//�����Ҵ�
  int temp;            // ���� ��ȯ�� �� ����� ���� ����
  while (rank == NULL) {//�Ҵ� ���н� ���Ҵ�
    rank = (int*)malloc((count) * sizeof(int));
  }
  for (int i = 0; i < count ; i++) {
    rank[i] = i + 1;  // [1,2,3,4,5]�� ������ �迭
  }
  for (int i = 0; i < count;
       i++) {  // �������� ���·� �迭�� �����ϴµ� ���ĵ����� ���� ��ȯ��
               // rank�迭�� ������ ������ ��Ÿ���� �迭�� �ٲ�
    for (int j = i; j < count; j++) {
      if (students[i].score < students[j].score) {
        temp = rank[i];  // ������ ������ Ȱ���� ���� ��ȯ
        rank[i] = rank[j];
        rank[j] = temp;
      }
    }
  }
  for (int i = 0; i < count; i++) {
    printf("%s�л��� ������ %d �Դϴ�\n", students[i].name, rank[i]);
  }
  free(rank);
  return 0;
}

void initialize(DATA* data, char name[]) {//�����Ҵ� �� �����翡 ���Ǵ� �Լ�
  *(data->name) = (char*)malloc((MAX_CHAR+1) * sizeof(char));
  strcpy_s(data->name, strlen(name) + 1 ,name);
}
