#include <stdio.h>
#include <math.h>
void main()
{
	float height, radius;
	printf("Enter the height of a cilinder:\n");
	scanf("%f", &height);
	printf("Enter its radius length:\n");
	scanf("%f", &radius);
	printf("Cilinder volume: %.2f.\n", M_PI * pow(radius, 2) * height);
}
