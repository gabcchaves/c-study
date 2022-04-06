#include <stdio.h>
void main()
{
	short x, y;
	scanf("%hd", &x);
	scanf("%hd", &y);
	if (x > y) printf("%d is the largest.\n", x);
	else if (y > x) printf("%d is the largest.\n", y);
	else printf("Both are equal.\n");
}
