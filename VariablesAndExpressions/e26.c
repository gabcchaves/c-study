#include <stdio.h>
int main()
{
	float squaredMeters, hectares;
	printf("Enter an area value in squared meters:\n");
	scanf("%f", &squaredMeters);
	hectares = squaredMeters * 0.0001;
	printf("Area value converted to hectares: %.2f.\n", hectares);
	return 0;
}
