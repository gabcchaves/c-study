#include <stdio.h>
int main() {
	float saleValue;
	scanf("%f", &saleValue);

	if (saleValue >= 100000) printf("Comissão: %.2f\n", 700 + saleValue * 0.16);
	else if (saleValue < 100000 && saleValue >= 80000)
		printf("Comissão: %.2f\n", 650 * saleValue * 0.14);
	else if (saleValue < 80000 && saleValue >= 60000)
		printf("Comissão: %.2f\n", 600 + saleValue * 0.14);
	else if (saleValue < 60000 && saleValue >= 40000)
		printf("Comissão: %.2f\n", 550 + saleValue * 0.14);
	else if (saleValue < 40000 && saleValue >= 20000)
		printf("Comissão: %.2f\n", 500 + saleValue * 0.14);
	else if (saleValue < 20000)
		printf("Comissão: %.2f\n", 400 + saleValue * 0.14);
	return 0;
}

