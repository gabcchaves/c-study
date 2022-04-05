#include <stdio.h>
void main()
{
	unsigned short x = 0;
	scanf("%hu", &x);
	printf("%hu\n", (x*3+1) + (x*2-1));
}
