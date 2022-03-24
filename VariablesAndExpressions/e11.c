#include <stdio.h>
int main()
{
	float ms, kmph;
	printf("Enter a m/s speed:\n");
	scanf("%f", &ms);
	kmph = ms * 3.6;
	printf("Speed converted to k/h: %.2f.\n", kmph);
	return 0;
}
