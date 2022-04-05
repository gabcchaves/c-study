#include <stdio.h>
#include <math.h>

void main()
{
	unsigned short seconds, minutes, hours, duration;
	scanf("%hu", &hours);
	scanf("%hu", &minutes);
	scanf("%hu", &seconds);
	scanf("%hu", &duration);

	seconds += hours * pow(60, 2) + minutes * 60 + duration;
	minutes = seconds / 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	seconds = seconds % 60;
	printf("%02d:%02d:%02d\n", hours, minutes, seconds);
}
