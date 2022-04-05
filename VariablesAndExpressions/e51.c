#include <stdio.h>
#include <math.h>
void main()
{
	short x, y;
	float distance;
	scanf("%hd", &x);
	scanf("%hd", &y);
	distance = sqrt(pow(x, 2) + pow(y, 2));
	printf("Distance from the origin: %.2f.\n", distance);
}
