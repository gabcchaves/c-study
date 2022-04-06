#include <stdio.h>
#include <math.h>
void main()
{
	short number;
	scanf("%hd", &number);
	if (number >= 0) printf("%.2f\n", sqrt(number));
	else printf("Invalid number.\n");
}
