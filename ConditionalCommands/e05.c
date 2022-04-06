#include <stdio.h>
void main()
{
	short number;
	scanf("%hd", &number);
	if (number % 2 == 0) printf("It is even.\n");
	else printf("It is odd.\n");
}
