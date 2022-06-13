#include <stdio.h>
int main() {
  float salary, installment;
  scanf("%f %f", &salary, &installment);
  if (installment <= (salary * 0.2)) {
    printf("Empréstimo concedido.\n");
  } else {
    printf("Empréstimo não concedido.\n");
  }
  return 0;
}
