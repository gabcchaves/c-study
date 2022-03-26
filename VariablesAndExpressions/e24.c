#include <stdio.h>
int main()
{
	float squaredMeters, acres;
	printf("Enter an area value in squared meters:\n");
	scanf("%f", &squaredMeters);
	acres = squaredMeters * 0.000247;
	printf("Area value converted to acres: %.2f.\n", acres);
	return 0;
}
