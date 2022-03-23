#include <stdio.h>
int main(void) {
	float x;
	printf("Enter a float number: ");
	scanf("%f", &x);
	printf("Fifth part of it: %.2f.\n", x / 5);
	return 0;
}
