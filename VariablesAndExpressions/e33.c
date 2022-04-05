#include <stdio.h>
void main()
{
	unsigned short int l;
	printf("Enter the side length of a square:\n");
	scanf("%hd", &l);
	printf("Area: %hd\n.", l*l);
}
