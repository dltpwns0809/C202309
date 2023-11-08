#include<stdio.h>

void summation(double* a, double* b, double* result);
void subtraction(double* a, double* b, double* result);
void multification(double* a, double* b, double* result);
void division(double* a, double* b, double* result);

int main() { 
  double a , b ;
  double result;
  printf("ù��° ���� �Է��ϼ���:");
  scanf_s("%lf", &a);
  printf("�ι�° ���� �Է��ϼ���:");
  scanf_s("%lf", &b);
  //a�� b�� �����ͷ� �����ؾ��ϴ� ������ �ִ��� �ñ��մϴ�.
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
    printf("���Ұ�");
  }

}

//������� main�Լ����� ����� result�� �����͸� ���� ������ 
void summation(double* a, double* b, double* result) { *result = *a + *b; }
void subtraction(double* a, double* b, double* result) { *result = *a - *b; }
void multification(double* a, double* b, double* result) {
  *result = *a * *b;
}
void division(double* a, double* b, double* result) {
  *result = *a / *b;
}