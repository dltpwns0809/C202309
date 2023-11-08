#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20
void printStudentResults(float student_data[][SUBJECTS],
                           char Student_Name[][CHARNUM]);
void printSubjectResults(float student_data[][SUBJECTS],
                           char Student_Name[][CHARNUM]);
int main() {
  float Student_Data[STUDENTS][SUBJECTS] = {0};// �л��� ������ �Է¹޴� �迭
  char Student_Name[STUDENTS][CHARNUM] = {"", "", "", "", ""};//�л� �̸��� �Է¹޴� �迭
  char Subject_Name[SUBJECTS][CHARNUM] = {"����", "�߰����", "�⸻���"};//���� �̸��� �Է¹޴� �迭
  printf("�л� %d�� �̸��� �Է��� �����մϴ�\n", STUDENTS);
  for (int i = 0; i < STUDENTS; i++) {
    printf("\t%d��° �л��� �̸��� �Է��ϼ���:", i + 1);
    scanf_s("%s", Student_Name[i], (int)sizeof(Student_Name[i]));
  }
  char c = getchar();//���� ����
  printf("�л� �̸��� ��� �ԷµǾ����ϴ�.\n");
  printf("�Էµ� �л� �̸��� ������ �����ϴ�\n");
  for (int i = 0; i < STUDENTS; i++) {
    printf("%s ", Student_Name[i]);
  }
  printf("\n");
  printf("-----------------------------------\n");
  printf("�� �л��� ");//������ ������ �þ�� ��� ��� �����ϵ��� ����
  for (int i = 0; i < SUBJECTS; i++) {
    printf("%s ", Subject_Name[i]);
  }
  printf("������ ���ʴ�� �Է����ּ���.(���� ����)\n");
  for (int i = 0; i < STUDENTS; i++) {
    printf("\t%s�� ����:", Student_Name[i]);
    for (int j = 0; j < SUBJECTS; j++) {
      scanf_s("%f", &Student_Data[i][j]);
    }
  }
  c = getchar();
  printf("-----------------------------------\n");
  printf("�л� �� ������ ������ �����ϴ�\n");
  printStudentResults(Student_Data,Student_Name);
  
  printf("-----------------------------------\n");
  printf("���� �� ��� ������ ������ �����ϴ�\n");
  
  printSubjectResults(Student_Data,Student_Name);
  
}

void printStudentResults(
    float student_data[][SUBJECTS],
    char Student_Name[][CHARNUM]) {  // �л��� ���� ����� ���ϴ� �Լ�

  float sum = 0;
  for (int j = 0; j < STUDENTS; j++) {
    for (int i = 0; i < SUBJECTS; i++) {
      sum += student_data[j][i];
    }
    printf("%s�� �������:%.2lf\n", Student_Name[j],
           (double)(sum / (double)SUBJECTS));
    sum = 0;
  }
}

void printSubjectResults(
    float student_data[][SUBJECTS],
    char Student_Name[][CHARNUM]) {  // ���� ���� ����� ���ϴ� �Լ�

  float sum = 0;
  for (int j = 0; j < SUBJECTS; j++) {
    for (int i = 0; i < STUDENTS; i++) {
      sum += student_data[i][j];
    }
    printf("%s�� �������:%.2lf\n", Student_Name[j],
           (double)(sum / (double)STUDENTS));
    sum = 0;
  }
}