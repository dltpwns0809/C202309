#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade);//함수 이름만 미리 선언

int main() {
	int scores[STUDENTS]; //STUDENTS의 크기만큼의 정수형 배열 선언
	for (int i = 0;i < STUDENTS;i++) { 
		printf("학생 %d의 성적을 입력하세요: ", i+1);
		scanf_s("%d", &scores[i]); //scores배열의 i번에 입력받은 값 입력
	}
	char ch = getchar(); // 버퍼에 입력받은 스페이스바를 문자를 입력받는 함수를 이용해 제거

	char target; 
	printf("특정 점수 (A,B,C,D,F)를 입력하세요");
	
	scanf_s("%c", &target, 1); // 크기가 1인 문자를 target 변수에 입력 
		
	classifyStudents(scores, target); // 매개변수 전달하고 함수 실행
	
	return 0;
}

void classifyStudents(int scores[], char targetGrade) { 
	printf("학생 성적 분류\n");
	char grade = ' ';// 문자형 변수 선언
	for (int i = 0;i < STUDENTS;i++) { 
		if (scores[i] >= 90) { // scores[i]의 값이 조건에 맞으면 안의 코드를 실행
			grade = 'A';
		}
		else if (scores[i] >= 80) {// scores[i]의 값이 조건에 맞으면 안의 코드를 실행
			grade = 'B';
		}
		else if (scores[i] >= 70) {// scores[i]의 값이 조건에 맞으면 안의 코드를 실행
			grade = 'C';
		}
		else if (scores[i] >= 60) {// scores[i]의 값이 조건에 맞으면 안의 코드를 실행
			grade = 'D';
		}
		else {//위 모든 조건이 거짓이라면 모두 안의 코드를 실행시킴
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}