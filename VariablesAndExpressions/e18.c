#include <stdio.h>
int main()
{
	float cubicMeters, liters;
	printf("Enter a volume in cubic meters:\n");
	scanf("%f", &cubicMeters);
	liters = 1000 * cubicMeters;
	printf("Volume converted to liters: %.2f.\n", liters);
	return 0;
}
