#include<stdio.h>

void printArray(int* arr, int size);

int main() { 
  int myArray[] = {1, 2, 3, 4, 5};
  printArray(myArray, 5);
}

void printArray(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
}