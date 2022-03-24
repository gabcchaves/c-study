#include <stdio.h>
int main()
{
	float miles, km;
	printf("Enter a distance in miles:\n");
	scanf("%f", &miles);
	km = miles * 1.61;
	printf("Distance converted to kilometers: %.2f.\n", km);
	return 0;
}
