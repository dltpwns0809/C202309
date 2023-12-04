#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "string_array_processor.h"

int main() {
	int array_size = -1;
	printf("입력할 문자열 갯수 : ");
	scanf_s("%d", &array_size);

	char** str_array = (char**)malloc(array_size * sizeof(char*)+1);
	while (str_array == NULL) {
		str_array = (char**)malloc(array_size * sizeof(char*)+1);
	}

	printf("%d개의 문자를 입력: \n", array_size);
	for (int i = 0; i < array_size; i++) {
		char buffer[1000];
		printf("%d : ", i + 1);
		scanf_s("%s", buffer, (int)sizeof(buffer));
		str_array[i] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
		while (str_array[i] == NULL) {
			str_array[i] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
		}
		strcpy_s(str_array[i], sizeof(str_array[i]), buffer);
	}
	
	char* result = FindMaxLength(str_array, array_size);
	printf("가장 긴 문자열 : %s\n", result);

	result = ConcatenateAll(str_array, array_size);
	printf("모든 문자열 연결 결과: %s\n", result);

	return 0;
}