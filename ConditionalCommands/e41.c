#include <stdio.h>
#include <math.h>

// Compute BMI
float getBMI(float height, float weight) {
	return weight / pow(height, 2);
}

// Classify BMI
void classifyBMI(float bmi) {
	if (bmi <= 18.5) puts("Abaixo do peso");
	else if (bmi < 25) puts("Saudável");
	else if (bmi < 30) puts("Peso em excesso");
	else if (bmi < 35) puts("Obesidade Grau I");
	else if (bmi < 40) puts("Obesidate Grau II (severa)");
	else puts("Obesidade Grau III (mórbida)");
}

int main() {
	float height, weight, bmi;
	scanf("%f %f", &height, &weight);
	bmi = getBMI(height, weight);
	classifyBMI(bmi);
	return 0;
}

