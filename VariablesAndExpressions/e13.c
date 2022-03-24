#include <stdio.h>
int main()
{
	float km, miles;
	printf("Enter a distance in kilometers:\n");
	scanf("%f", &km);
	miles = km / 1.61;
	printf("Distance converted to miles: %.2f.\n", miles);
	return 0;
}
