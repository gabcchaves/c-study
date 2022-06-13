#include <stdio.h>
int main() {
  float height, weight, idealWeight;
  char sex;
  scanf("%f %f %c", &height, &weight, &sex);
  if (sex == 'M') {
    idealWeight = (72.7 * height) - 58;  
  } else if (sex == 'F'){
    idealWeight = (62.1 * height) - 44.7;
  } else {
    return 0;
  }
  printf("IMC = %.2f.\n", idealWeight);
  return 0;
}
