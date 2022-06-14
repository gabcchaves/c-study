#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, d, x[2];

	// Read coeficients
	scanf("%f %f %f", &a, &b, &c);

	// Check if a is equal to 0
	if (a == 0) {
		puts("Coeficiente 'a' deve ser diferente de 0");
		return 0;
	}

	// Compute delta
	d = pow(b, 2) - 4 * a * c;

	// Compute roots of equation
	if (d == 0) {
		printf("Raízes iguais a %.2f\n", (-b + sqrt(d)) / 2 * a);
		return 0;
	} else if (d < 0) {
		printf("Não existe raiz.\n");
		return 0;
	} else {
		printf("X1 = %.2f\nX2 = %.2f\n", (-b + sqrt(d)) / 2 * a, (-b - sqrt(d)) / 2 * a);
	}

	return 0;
}

