#include<stdio.h>
#include"string_manipulator.h"

int main() {
	const char* sample_string = "Hello, World!";
	printf("문자길이:%d\n", GetLength(sample_string));

	char* str1 = "Hello, ";
	char* str2 = "World!";
	char* result = ConcatenateStrings(str1, str2);
	printf("concatenated string : %s\n", result);

	char* original_string = "AISW";
	char* reversed_string = ReverseString(original_string);
	printf("reversed string: %s\n", reversed_string);
	return 0;
}