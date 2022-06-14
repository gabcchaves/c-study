#include <stdio.h>
int main() {
	float oPrice, nPrice;
	scanf("%f", &oPrice);
	
	if (oPrice <= 50) {
		nPrice = oPrice + oPrice * 0.05;
	} else if (oPrice <= 100) {
		nPrice = oPrice + oPrice * 0.10;
	} else {
		nPrice = oPrice + oPrice * 0.15;
	}

	if (nPrice <= 80) puts("Barato");
	else if (nPrice <= 120) puts("Normal");
	else if (nPrice <= 200) puts("Caro");
	else puts("Muito caro");

	return 0;
}

