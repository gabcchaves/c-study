#include <stdio.h>
int main()
{
	float yards, meters;
	printf("Enter a length value in yards:\n");
	scanf("%f", &yards);
	meters = 0.91 * yards;
	printf("Length value converted to meters: %.2f.\n", meters);
	return 0;
}
