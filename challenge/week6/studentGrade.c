#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade);//함수 이름만 미리 선언
int sumScores(int scores[]);
double averageScores(int scores[]);
void printRanks(int scores[]);

int main() {
	int scores[STUDENTS]; //STUDENTS의 크기만큼의 정수형 배열 선언
	for (int i = 0;i < STUDENTS;i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);//scores배열의 i번에 입력받은 값 입력
	}
	char ch = getchar(); // 버퍼에 입력받은 스페이스바를 문자를 입력받는 함수를 이용해 제거

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하세요");

	scanf_s("%c", &target, 1);// 크기가 1인 문자를 target 변수에 입력 

	classifyStudents(scores, target);//매개변수를 전달하고 함수를 실행
	sumScores(scores);
	averageScores(scores);
	printRanks(scores);
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
			printf("%d학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[]) {
	int sum=0;
	for (int i = 0;i < STUDENTS;i++) {
		sum += scores[i];// scores 배열의 모든 값을 sum에 더함
	}
	printf("학생들 점수의 총 합은 %d 이고, ",sum);
	return 1;
}

double averageScores(int scores[]) {
	int sum = 0;
	for (int i = 0;i < STUDENTS;i++) {
		sum += scores[i];
	}
	printf("평균 값은 %f입니다\n", ((double)sum)/STUDENTS); // sum값을 double형으로 변형하고 학생수로 나눠 평균을 구함
	return 1;
}

void printRanks(int scores[]) {
	int rank[STUDENTS]; // 학생 수 만큼의 크기의 배열 선언
	int temp; //값을 교환할 때 사용할 변수 선언
	for (int i = 1;i < STUDENTS + 1;i++) { 
		rank[i - 1] = i; // [1,2,3,4,5]의 형태의 배열
	}
	for (int i = 0;i < STUDENTS;i++) { // 내림차순 형태로 배열을 정렬하는데 정렬동안의 값의 교환을 rank배열에 적용해 순위를 나타내는 배열로 바꿈
		for (int j = i;j < STUDENTS;j++) {
			if (scores[i] < scores[j]) {
				temp = rank[i]; // 여분의 변수를 활용해 값을 교환
				rank[i] = rank[j];
				rank[j] = temp;
			}
		}
	}
	for (int i = 0;i < STUDENTS ;i++) {
		printf("%d학생의 순위는 %d 입니다\n", i+1, rank[i]);
	}
}