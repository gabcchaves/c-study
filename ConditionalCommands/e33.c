#include <stdio.h>
int main() {
	float oPrice, nPrice;
	scanf("%f", &oPrice);
	
	if (oPrice <= 50) {
		nPrice = oPrice + oPrice * 0.05;
		printf("Novo preço: %.2f\nPercentual de aumento: 5%%", nPrice);
	} else if (oPrice <= 100) {
		nPrice = oPrice + oPrice * 0.10;
		printf("Novo preço: %.2f\nPercentual de aumento: 10%%", nPrice);
	} else {
		nPrice = oPrice + oPrice * 0.15;
		printf("Novo preço: %.2f\nPercentual de aumento: 15%%", nPrice);
	}

	return 0;
}

