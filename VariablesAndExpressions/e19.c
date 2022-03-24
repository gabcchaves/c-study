#include <stdio.h>
int main()
{
	float liters, cubicMeters;
	printf("Enter a volume in liters:\n");
	scanf("%f", &liters);
	cubicMeters = liters / 1000;
	printf("Volume converted to cubic meters: %.2f.\n", cubicMeters);
	return 0;
}
