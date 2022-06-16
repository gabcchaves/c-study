/* Program to compute the raise of an employee. */
#include <stdio.h>

double readjust(float *currSalary, unsigned int *serviceTime) {
	float newSalary = *currSalary;
	if (*currSalary <= 500) {
		newSalary += *currSalary * 0.25;	
	} else if (*currSalary <= 1000) {
		newSalary += *currSalary * 0.20;
	} else if (*currSalary <= 1500) {
		newSalary += *currSalary * 0.15;
	} else if (*currSalary <= 2000) {
		newSalary += *currSalary * 0.10;
	}

	if (*serviceTime >= 1 && *serviceTime <= 3) {
		newSalary += 100;
	} else if (*serviceTime > 3 && *serviceTime <= 6) {
		newSalary += 200;
	} else if (*serviceTime > 6 && *serviceTime <= 10) {
		newSalary += 300;
	} else if (*serviceTime > 10) {
		newSalary += 500;
	}

	return newSalary;
}

int main() {
	float currSalary, newSalary;
	unsigned int serviceTime;

	scanf("%f %u", &currSalary, &serviceTime);
	
	newSalary = readjust(&currSalary, &serviceTime);

	if (newSalary == currSalary + 500) {
		puts("Sem direito a aumento.");
		printf("Salário + Bônus: %.2f\n", newSalary);
	} else {
		printf("Reajuste: %.2f\n", newSalary);
	}

	return 0;
}

