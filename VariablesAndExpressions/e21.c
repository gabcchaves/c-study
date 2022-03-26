#include <stdio.h>
int main()
{
	float lbs, kg;
	printf("Enter a mass value in pounds:\n");
	scanf("%f", &lbs);
	kg = lbs * 0.45;
	printf("Mass value converted to kilograms: %.2f.\n", kg);
	return 0;
}
