#include<stdio.h>

typedef struct People {
	char name[12];
	unsigned short int age;
	float height;
	float weight;
} Person;

int main() {
	Person data;
	data.age = 21;
	data.height = 178.3;
	return 0;
}