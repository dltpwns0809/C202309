#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20
double printStudentResults(float student_data[][SUBJECTS], int student_num);
double printSubjectResults(float student_data[][SUBJECTS], int subject_num);
int main() {
  float Student_Data[STUDENTS][SUBJECTS] = {0};// 학생들 점수를 입력받는 배열
  char Student_Name[STUDENTS][CHARNUM] = {"", "", "", "", ""};//학생 이름을 입력받는 배열
  char Subject_Name[SUBJECTS][CHARNUM] = {"퀴즈", "중간고사", "기말고사"};//과목 이름을 입력받는 배열
  printf("학생 %d의 이름의 입력을 시작합니다\n", STUDENTS);
  for (int i = 0; i < STUDENTS; i++) {
    printf("\t%d번째 학생의 이름을 입력하세요:", i + 1);
    scanf_s("%s", Student_Name[i], (int)sizeof(Student_Name[i]));
  }
  char c = getchar();//버퍼 제거
  printf("학생 이름이 모두 입력되었습니다.\n");
  printf("입력된 학생 이름은 다음과 같습니다\n");
  for (int i = 0; i < STUDENTS; i++) {
    printf("%s ", Student_Name[i]);
  }
  printf("\n");
  printf("-----------------------------------\n");
  printf("각 학생의 ");//과목의 갯수가 늘어나도 모두 출력 가능하도록 변경
  for (int i = 0; i < SUBJECTS; i++) {
    printf("%s", Subject_Name[i]);
  }
  printf("점수를 차례대로 입력해주세요.(띄어쓰기 구분)\n");
  for (int i = 0; i < STUDENTS; i++) {
    printf("\t%s의 성적:", Student_Name[i]);
    for (int j = 0; j < SUBJECTS; j++) {
      scanf_s("%f", &Student_Data[i][j]);
    }
  }
  c = getchar();
  printf("-----------------------------------\n");
  printf("학생 별 성적은 다음과 같습니다\n");
  for (int i = 0; i < STUDENTS; i++) {
    printf("%s의 평균점수:%.2lf\n", Student_Name[i],
           printStudentResults(Student_Data, i));
  }
  printf("-----------------------------------\n");
  printf("과목 별 평균 점수은 다음과 같습니다\n");
  for (int i = 0; i < SUBJECTS; i++) {
    printf("%s의 평균점수:%.2lf\n", Subject_Name[i],
           printSubjectResults(Student_Data, i));
  }
}

double printStudentResults(float student_data[][SUBJECTS], int student_num) {//학생의 성적 평균을 구하는 함수
  float sum = 0;
  for (int i = 0; i < SUBJECTS; i++) {
    sum += student_data[student_num][i];
  }
  return (double)(sum / (double)SUBJECTS); // double형으로 변경
}

double printSubjectResults(float student_data[][SUBJECTS], int subject_num) {//과목 점수 평균을 구하는 함수
  float sum = 0;
  for (int i = 0; i < STUDENTS; i++) {
    sum += student_data[i][subject_num];
  }
  return (double)(sum / (double)STUDENTS);//double 형으로 변경
}