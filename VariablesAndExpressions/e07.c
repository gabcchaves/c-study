#include <stdio.h>
int main()
{
	float fahrenheit, celsius;
	printf("Enter a temperature in Fahrenheit:\n");
	scanf("%f", &fahrenheit);
	celsius = 5 * (fahrenheit - 32) / 9;
	printf("Temperature converted to Celsius: %.2f.\n", celsius);
	return 0;
}
