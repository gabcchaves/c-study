#include <stdio.h>
#include <math.h>
void main()
{
	float a, b;
	printf("Enter leg a:\n");
	scanf("%f", &a);
	printf("Enter leg b:\n");
	scanf("%f", &b);
	printf("Hipotenuse length: %.2f.\n", sqrt(pow(a, 2) + pow(a, 2)));	
}
