#include <stdio.h>
int main() {
	float grades[3];
	scanf("%f %f %f", &grades[0], &grades[1], &grades[2]);
	float avg = (grades[0] + grades[1] + grades[2] * 2) / 4;
	printf("%.2f\n", avg);
	avg >= 6 ? printf("Aprovado\n") : printf("Reprovado\n");
	return 0;
}

