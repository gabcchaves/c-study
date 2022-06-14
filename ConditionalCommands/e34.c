#include <stdio.h>
int main() {
	float grade;
	int nAbsences;
	char concept;
	scanf("%f %d", &grade, &nAbsences);

	if (grade >= 9 && grade <= 10) {
		nAbsences <= 20 ? putchar('A') : putchar('B');
	} else if (grade >= 7.5 && grade < 9) {
		nAbsences <= 20 ? putchar('B') : putchar('C');
	} else if (grade >= 5 && grade < 7.5) {
		nAbsences <= 20 ? putchar('C') : putchar('D');
	} else if (grade >= 4 && grade < 5) {
		nAbsences <= 20 ? putchar('D') : putchar('E');
	} else if (grade >= 0 && grade < 4) {
		nAbsences <= 20 ? putchar('E') : putchar('E');
	} else {
		puts("Nota inválida.");
	}

	return 0;
}

