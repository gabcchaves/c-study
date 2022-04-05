#include <stdio.h>
void main()
{
	unsigned short int numHours;
	float hourPrice, total;
	printf("Enter the price of a work hour:\n");
	scanf("%f", &hourPrice);
	printf("Enter the number of hours worked:\n");
	scanf("%hu", &numHours);
	total = hourPrice * numHours;
	printf("Total to be paid: %.2f.\n", total + total * 10/100);
}
