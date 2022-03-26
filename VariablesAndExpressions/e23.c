#include <stdio.h>
int main()
{
	float meters, yards;
	printf("Enter a length value in meters:\n");
	scanf("%f", &meters);
	yards = meters / 0.91;
	printf("Length value converted yards: %.2f.\n", yards);
	return 0;
}
