#include<stdio.h>
int main() {
	struct Example1
	{
		char a;
		double b;
		short c;
		char cd;
	};
	struct Example2
	{
		char a;
		short c;
		char cd;
		double b;
	};
	struct Example3
	{
		char a;
		char  cd;
		short c;
		double b;
	};

	struct Example1 ex1;
	struct Example2 ex2;
	struct Example3 ex3;

	printf("ex1: %d\n", (int)sizeof(ex1));
	printf("ex2: %d\n", (int)sizeof(ex2));
	printf("ex3: %d\n", (int)sizeof(ex3));

	return 0;

}