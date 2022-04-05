#include <stdio.h>
void main()
{
	short hours, minutes, seconds;
	scanf("%d", &seconds);
	minutes = seconds / 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	seconds = seconds % 60;
	printf("%02d:%02d:%02d", hours, minutes, seconds);
}
