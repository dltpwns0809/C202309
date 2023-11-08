#include<stdio.h>

void summation(double* a, double* b, double* result);
void subtraction(double* a, double* b, double* result);
void multification(double* a, double* b, double* result);
void division(double* a, double* b, double* result);

int main() { 
  double a , b ;
  double result;
  printf("첫번째 수를 입력하세요:");
  scanf_s("%lf", &a);
  printf("두번째 수를 입력하세요:");
  scanf_s("%lf", &b);
  //a와 b를 포인터로 전달해야하는 이유가 있는지 궁금합니다.
  summation(&a, &b, &result);
  printf("%.0lf + %.0lf = %.2lf\n", a, b, result);

  subtraction(&a, &b, &result);
  printf("%.0lf - %.0lf = %.2lf\n", a, b, result);

  multification(&a, &b, &result);
  printf("%.0lf * %.0lf = %.2lf\n", a, b, result);

  if (b != 0) {
    division(&a, &b, &result);
    printf("%.0lf / %.0lf = %.2lf\n", a, b, result);
  } 
  else {
    printf("계산불가");
  }

}

//계산결과를 main함수에서 선언된 result에 포인터를 통해 전달함 
void summation(double* a, double* b, double* result) { *result = *a + *b; }
void subtraction(double* a, double* b, double* result) { *result = *a - *b; }
void multification(double* a, double* b, double* result) {
  *result = *a * *b;
}
void division(double* a, double* b, double* result) {
  *result = *a / *b;
}