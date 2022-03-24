#include <stdio.h>
int main(void)
{
	float celsius, fahrenheit;
	printf("Enter a Celsius temperature: \n");
	scanf("%f", &celsius);
	fahrenheit = celsius * 1.8 + 32;
	printf("Temperature converted to Fahrenheit: %.2f.\n", fahrenheit);
	return 0;
}
