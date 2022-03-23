#include <stdio.h>
int main(void) {
	float x;
	printf("Enter a float number: ");
	scanf("%f", &x);
	printf("Squared: %.2f.\n", x*x);
	return 0;
}
