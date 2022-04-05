#include <stdio.h>
void main()
{
	float stepHeight, height;
	printf("Enter the height of a stair step:\n");
	scanf("%f", &stepHeight);
	printf("Enter the height to be climbed:\n");
	scanf("%f", &height);
	printf("Steps to be climbed: %d.\n", (int) (height / stepHeight));
}
