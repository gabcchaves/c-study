#include <stdio.h>
void main()
{
	short numDays;
	float total;
	printf("Enter the number of days worked:\n");
	scanf("%d", &numDays);
	total = numDays * 30;
	printf("Total to be paid, considering its 30/day, and there is an 8% tax: ");
	printf("%.2f.\n", total - total * 8/100);
}
