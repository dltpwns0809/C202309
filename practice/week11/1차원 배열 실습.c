#include <stdio.h>

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int *p = a;
  for (int i = 0; i < 5; i++) {
    printf("a[%d] = %d, *(a+%d) = %d \n", i, a[i],i, *(a + i));
  }
  printf("\n");
  for (int i = 0; i < 5; i++) {
    printf("a[%d] 林家 = %p, *(a+%d) 林家 = %p \n", i, &a[i], i, (a + 1));
  }
  return 0;
}