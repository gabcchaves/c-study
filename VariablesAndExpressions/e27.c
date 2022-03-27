#include <stdio.h>
int main()
{
	float hectares, squaredMeters;
	printf("Enter an area value in hectares:\n");
	scanf("%f", &hectares);
	squaredMeters = hectares * 10000;
	printf("Area value converted to squared meters: %.2f.\n", squaredMeters);
	return 0;
}
