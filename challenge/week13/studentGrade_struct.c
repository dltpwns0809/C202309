#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX_CHAR 15
typedef struct student_data {//학생 이름/성적을 저장하는 구조체 선언
  char name[MAX_CHAR];
  int score;
} DATA;//typedef를 활용

void initialize(DATA* data, char name[]);
void classifyStudents(DATA students[], char targetGrade, int count);
int sumScores(DATA students[], int count);
double averageScores(DATA students[], int count);
int printRanks(DATA students[], int count);//함수 미리 선언

int main() {
  char name[100][MAX_CHAR] = {""}, target; // 문자열 100개가 저장된 문자열 배열 선언
  int count = 0; 
  char temp[MAX_CHAR] = { //사용자에게 임시로 입력받을 문자열을 저장하는 변수
      0,
  };
  for (int i = 0; i < 100; i++) {
    printf("학생 %d의 이름을 입력하세요(더이상 없을 시 엔터만 입력) : ", i + 1);
    gets_s(temp,sizeof(temp));// 공백+ 엔터키를 인식하기 위해 사용 
    if (temp[0] == '\0') { // 위 gets_s에서 공백+엔터를 입력받았을 경우의 값
      if (count != 0) //count가 0일경우 동적할당에서 오류가 발생한다는 경고문구때문에 추가함
        break;
      else {
        printf("학생 수가 0명이기 때문에 프로그램이 종료됩니다\n");
        return 0;
      }
        
    } 
    strcpy_s(name[i], (int)sizeof(name[i]), temp);//임시로 temp변수에 저장된 값을 name에 저장
    count++;// 학생 수 증가
  }
  DATA* students = (DATA*)malloc(count * sizeof(DATA)); //구조체 배열 동적 할당
  while (students == NULL) { // 동적 할당 실패시 다시 동적할당해주는 코드
    students = (DATA*)malloc(count * sizeof(DATA));
  }
  for (int i = 0; i < count; i++) { 
    initialize(&students[i], name[i]);//구조체의 name에 동적할당 + name변수에 저장된 값 복사
    printf("학생 %s의 성적을 입력하세요", students[i].name); 
    scanf_s("%d", &students[i].score); 
  }
  char ch = getchar();// 버퍼 제거
  printf("특정 점수 (A,B,C,D,F)를 입력하세요");

  scanf_s("%c", &target, 1);  

  classifyStudents(students,target,count); 
  sumScores(students,count);
  averageScores(students,count);
  printRanks(students,count);

  free(students);

  return 0;
}

void classifyStudents(DATA students[], char targetGrade,int count) {
  printf("학생 성적 분류\n");
  char grade = ' ';  // 문자형 변수 선언
  for (int i = 0; i < count; i++) {
    if (students[i].score >=
        90) {  // students[i].score의 값이 조건에 맞으면 안의 코드를 실행
      grade = 'A';
    } else if (students[i].score >=
               80) {  // students[i].score의 값이 조건에 맞으면 안의 코드를 실행
      grade = 'B';
    } else if (students[i].score >=
               70) {  // students[i].score의 값이 조건에 맞으면 안의 코드를 실행
      grade = 'C';
    } else if (students[i].score >=
               60) {  // students[i].score의 값이 조건에 맞으면 안의 코드를 실행
      grade = 'D';
    } else {  // 위 모든 조건이 거짓이라면 모두 안의 코드를 실행시킴
      grade = 'F';
    }
    if (targetGrade == grade) {
      printf("%s학생은 %c 점수를 받았습니다.\n", students[i].name, targetGrade);
    }
  }
}

int sumScores(DATA students[], int count) {
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum += students[i].score;  //students 배열의 모든 score값을 sum에 더함
  }
  printf("학생들 점수의 총 합은 %d 이고, ", sum);
  return 1;
}

double averageScores(DATA students[], int count) {
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum += students[i].score;
  }
  printf(
      "평균 값은 %f입니다\n",
      ((double)sum) /
          count);  // sum값을 double형으로 변형하고 학생수로 나눠 평균을 구함
  return 1;
}

int printRanks(DATA students[],int count) {
  int* rank= (int*)malloc((count) * sizeof(int));//동적할당
  int temp;            // 값을 교환할 때 사용할 변수 선언
  while (rank == NULL) {//할당 실패시 재할당
    rank = (int*)malloc((count) * sizeof(int));
  }
  for (int i = 0; i < count ; i++) {
    rank[i] = i + 1;  // [1,2,3,4,5]의 형태의 배열
  }
  for (int i = 0; i < count;
       i++) {  // 내림차순 형태로 배열을 정렬하는데 정렬동안의 값의 교환을
               // rank배열에 적용해 순위를 나타내는 배열로 바꿈
    for (int j = i; j < count; j++) {
      if (students[i].score < students[j].score) {
        temp = rank[i];  // 여분의 변수를 활용해 값을 교환
        rank[i] = rank[j];
        rank[j] = temp;
      }
    }
  }
  for (int i = 0; i < count; i++) {
    printf("%s학생의 순위는 %d 입니다\n", students[i].name, rank[i]);
  }
  free(rank);
  return 0;
}

void initialize(DATA* data, char name[]) {//동적할당 및 값복사에 사용되는 함수
  *(data->name) = (char*)malloc((MAX_CHAR+1) * sizeof(char));
  strcpy_s(data->name, strlen(name) + 1 ,name);
}
