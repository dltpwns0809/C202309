#include<stdio.h>

int main() {
  int a;
  a = 5;
  printf("%p\n", &a);
  int *a_ptr = &a;
  printf("%d\n", *a_ptr);
  printf("%p\n",a_ptr);
  a_ptr += 1;
  printf("%p\n", a_ptr);
}