#include <stdio.h>
int main()
{
	float inches, centimeters;
	printf("Enter a length in inches:\n");
	scanf("%f", &inches);
	centimeters = inches * 2.54;
	printf("Length converted to centimeters: %.2f.\n", centimeters);
	return 0;
}
