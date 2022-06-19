#include <stdio.h>

// Compute total amount to be paid for a car
float getFinalPrice(float price) {
	if (price <= 12000) {
		return price + price*0.05;
	} else if (price <= 25000) {
		return price + price*0.1 + price*0.15;
	} else {
		return price + price*0.15 + price*0.2;
	}
}
int main() {
	float price;
	scanf("%f", & price);
	float finalPrice = getFinalPrice(price);
	printf("Total a pagar: %.2f\n", finalPrice);
	return 0;
}

