#include<stdlib.h>
#include<string.h>

char* FindMaxLength(char* strArray[], int size){
	char* result=NULL;
	int max_length = 0;
	for (int i = 0; i < size; i++) {
		if (strlen(strArray[i]) > max_length) {
			max_length = strlen(strArray[i]);
			result = (char*)malloc(strlen(strArray[i]) + 1);
			strcpy_s(result, sizeof(strArray)+1, strArray[i]);
		}
	}
	return result;
}

char* ConcatenateAll(char* str_array[], int size) {
	int length = 0;
	for (int i = 0; i < size; i++) {
		length += strlen(str_array[i]);
	}
	char* result = (char*)malloc(length + 1);
	while (result == NULL) {
		result = (char*)malloc(length + 1);
	}
	result[0] = '\0';
	for (int i = 0; i < size; i++) {
		strcat_s(result, length + 1, str_array[i]);
	}
	return result;
}