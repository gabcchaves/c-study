#include <stdio.h>
void main()
{
	unsigned short age, currYear;
	scanf("%hu", &age);
	scanf("%hu", &currYear);
	printf("Birth year: %04d.\n", currYear - age);
}
