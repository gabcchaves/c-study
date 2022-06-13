#include <stdio.h>

char isTriangle(float a, float b, float c) {
	if (a < b + c && b < a + c && c < a + b) {
		return 1;
	}
	return 0;
}

int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	if (!isTriangle) return 0;
	
	if (a == b && b == c)
		printf("Triângulo equilátero\n");
	else if (a == b || b == c || a == c) 
		printf("Triângulo isósceles\n");
	else
		printf("Triângulo escaleno\n");
	return 0;
}

