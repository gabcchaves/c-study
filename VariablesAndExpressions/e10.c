#include <stdio.h>
int main()
{
	float kmps, ms;
	printf("Enter a km/h speed:\n");
	scanf("%f", &kmps);
	ms = kmps / 3.6;
	printf("Speed converted to m/s: %.2f.\n", ms);
	return 0;
}
