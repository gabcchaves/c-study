#include <stdio.h>
int main()
{
	float acres, squaredMeters;
	printf("Enter an area value in acres:\n");
	scanf("%f", &acres);
	squaredMeters = acres * 4048.58;
	printf("Area value converted to squared meters: %.2f.\n", squaredMeters);
	return 0;
}
