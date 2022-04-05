#include <stdio.h>
#include <math.h>
void main()
{
	float radius;
	printf("Enter the radius length of a circle:\n");
	scanf("%f", &radius);
	printf("Circle area: %.2f.\n", M_PI * pow(radius, 2));
}
