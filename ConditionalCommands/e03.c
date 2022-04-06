#include <stdio.h>
#include <math.h>
void main()
{
	float number;
	scanf("%f", &number);
	if (number >= 0) printf("%.2f\n", sqrt(number));
	else printf("%.2f\n", pow(number, 2));
}
