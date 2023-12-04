#include<string.h>
#include<stdlib.h>

int GetLength(const char* str) {
	return strlen(str);
}

char* ConcatenateStrings(const char* str1, const char* str2) {
	char* result = (char*)malloc(strlen(str1) + strlen(str2) + 1);
	while (result == NULL)
		result = (char*)malloc(strlen(str1) + strlen(str2) + 1);
	strcpy_s(result, strlen(str1) + strlen(str2) + 1, str1);
	strcat_s(result, strlen(str1) + strlen(str2) + 1, str2);
	return result;
}

char* ReverseString(const char* input) {
	char* result = (char*)malloc(strlen(input)+1);
	while (result == NULL)
		result = (char*)malloc(strlen(input)+1);
	for (int i = strlen(input); i >= 0; i--) {
		result[strlen(input) - i-1] = input[i];
	}
	result[(int)strlen(input)] = '\0';
	return result;
}