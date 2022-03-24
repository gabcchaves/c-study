#include <stdio.h>
#include <math.h>
int main()
{
	float radians, degrees;
	printf("Enter a radian angle:\n");
	scanf("%f", &radians);
	degrees = radians * 180 / M_PI;
	printf("Angle value converted to degrees: %.2f.\n", degrees);
	return 0;
}
