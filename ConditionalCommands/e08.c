#include <stdio.h>
int main() {
  float grades[2];
  scanf("%f %f", &grades[0], &grades[1]);
  if (grades[0] >= 0 && grades[0] <= 10 && grades[1] >= 0 && grades[1] <= 10) {
    printf("%.2f\n", (grades[0] + grades[1]) / 2);
  } else {
    printf("Notas inválidas.\n");
  }
  return 0;
}
