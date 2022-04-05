#include <stdio.h>
void main()
{
	float price, priceWithDiscount;
	printf("Enter the price:\n");
	scanf("%f", &price);
	priceWithDiscount = price - price * 10/100;
	printf("With 10%% discount: %.2f.\n", priceWithDiscount);
	printf("Installment value: %.2f.\n", price / 3);
	printf("Vendor commission (5%% upon price with discount): %.2f.\n", priceWithDiscount * 5/100);
	printf("Vendor commission (5%% upon price): %.2f.\n", price * 5/100);
}
