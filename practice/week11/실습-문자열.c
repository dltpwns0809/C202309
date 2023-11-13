#include<stdio.h>


int main() {
  char one[] = "Korea";
  PrinOne(one);
  printf("-----------\n");
  PrinOne2(one);
  return 0;
}

void PrinOne(char* pone) { 
  printf("PrinOne :%s\n", pone);
  pone[0] = "k";
  printf("PrinOne() after pone[0]='k':%s\n", pone);
}

void PrinOne(char one[]) {
  printf("PrinOne :%s\n", one);
  one[0] = "K";
  printf("PrinOne() after pone[0]='K':%s\n", one);
}

