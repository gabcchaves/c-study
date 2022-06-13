#include <stdio.h>
int main() {
	float grades[3];
	scanf("%f %f %f", &grades[0], &grades[1], &grades[2]);
	float avg = (grades[0]*2 + grades[1]*3 + grades[2] * 5) / 10;
	printf("%.2f\n", avg);
	if (avg < 3) printf("Reprovado\n");
	else if (avg < 5) printf("Recuperação\n");
	else printf("Aprovado\n");
	return 0;
}

