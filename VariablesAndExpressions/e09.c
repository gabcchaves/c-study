#include <stdio.h>
int main()
{
	float celsius, kelvin;
	printf("Enter a Celsius temperature:\n");
	scanf("%f", &celsius);
	kelvin = celsius + 273.15;
	printf("Temperature converted to Kelvin: %.2f.\n", kelvin);
	return 0;
}
