#include <stdio.h>
int main()
{
	float kmph, ms;
	printf("Enter a km/h speed:\n");
	scanf("%f", &kmps);
	ms = kmph / 3.6;
	printf("Speed converted to m/s: %.2f.\n", ms);
	return 0;
}
