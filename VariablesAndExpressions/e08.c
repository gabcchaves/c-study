#include <stdio.h>
int main()
{
	float kelvin, celsius;
	printf("Enter a Kelvin temperature:\n");
	scanf("%f", &kelvin);
	celsius = kelvin - 273.15;
	printf("Temperature converted to Celsius: %.2f.\n", celsius);
	return 0;
}
