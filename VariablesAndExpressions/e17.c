#include <stdio.h>
int main()
{
	float centimenters, inches;
	printf("Enter a length in centimenters:\n");
	scanf("%f", &centimenters);
	inches = centimenters / 2.54;
	printf("Length converted to inchers: %.2f.\n", inches);
	return 0;
}
