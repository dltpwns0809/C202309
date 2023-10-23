#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

void addTask(int taskCount,char tasks[][CHAR_NUM]);
void delTask(int delIndex, int taskCount, char tasks[][CHAR_NUM]);
void printTask(int taskCount, char tasks[][CHAR_NUM]);

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" };  // 두 상수를 행/열의 값으로 가진는 2차원 배열선언
	int taskCount = 0; // 할 일의 갯수를 나타내는 값 

	printf("TODO 리스트 시작! \n");

	while (1) {//프로그램을 무한반복시키기 위해 조건을 true(==1)로 설정
		int choice = -1;

		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; //프로그램 종료할지 판별할 변수 선언
		int delIndex = -1;   // 목록삭제에 활용할 변수 선언
		int changeIndex = -1;  // 목록 수정할때 사용할 변수 선언
		char ch; // 버퍼 제거를 위한 변수 선언

		switch (choice) { // 위에서 입력받은 값에 따른 코드를 실행
		case 1:
			if (taskCount >= 10) { // 추가 조건인 할 일의 최대 갯수에 따른 프로그램 종료 조건설정
				terminate = 2;
				break;
			}
			addTask(taskCount,tasks);
			taskCount++; // 할 일 의 갯수 1개 증가
			break; // switch-case 문 종료
		case 2:
			printf("삭제할 일의 번호를 입력해주세요. (1부터 시작) :");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {// 입력받은 값 > 할 일의 갯수 인 경우 코드 실행 x
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				delTask(delIndex, taskCount, tasks);
				taskCount -= 1;
			}
			break; // switch-case 문 종료
		case 3:
			printTask(taskCount, tasks);
			break; // switch-case 문 종료
		case 4:
			terminate = 1;
			break; // switch-case 문 종료
		case 5:
			for (int i = 0; i < taskCount;i++) { //어떤 번호를 수정할지 입력받기 전 한번 목록을 보여줌
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("수정할 목록의 번호를 입력해주세요(숫자만 입력) :");
			scanf_s("%d", &changeIndex);
			ch = getchar();//버퍼 제거
			printf("목록의 수정될 이름을 입력하세요:");
			scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
			//입력받은 값을 이전에 선택한 번호의 인덱스에 저장
			break; // switch-case 문 종료
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
		}
		else if (terminate == 2) {
			printf("할 일이 10개로 최대치이므로 프로그램을 종료합니다");
		}
		if (terminate != 0) {
			break;//while문 종료
		}


	}
}

// 2차원 배열에서 열의 갯수를 입력해준다
void addTask(int taskCount, char tasks[][CHAR_NUM]) {//할일의 갯수와 목록을 넘겨준다
	printf("할 일을 입력하세요 (공백 없이 입력하세요) : ");
	scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount])); //할 일의 갯수를 나태내는 변수를 다음 할 일을 저장할 인덱스 번호로 재사용
	printf("할 일""%s""가 저장되었습니다\n\n", tasks[taskCount]);
}

void delTask(int delIndex, int taskCount, char tasks[][CHAR_NUM]) {
	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);
	strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");
	//입력받은 번호의 값을 빈 값으로 변경
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}// 목록중 한개를 제거하기 위해 그 뒤의 값을 한칸씩 앞의 인덱스에 복사하여 빈칸을 없앤다 
}

void printTask(int taskCount,char tasks[][CHAR_NUM]) {
	printf("할 일 목록\n");
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}