#include <stdio.h>
void main()
{
	float price;
	printf("Enter the price of a product:\n");
	scanf("%f", &price);
	printf("Price with 12%% discount: %.2f.\n", price - (price * 12/100));
}
