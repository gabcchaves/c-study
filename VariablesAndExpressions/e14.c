#include <stdio.h>
#include <math.h>
int main()
{
	float degrees, radians;
	printf("Enter an angle value in degrees:\n");
	scanf("%f", &degrees);
	radians = degrees * M_PI / 180;
	printf("Angle value converted to radians: %.2f.\n", radians);
	return 0;
}
