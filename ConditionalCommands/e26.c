#include <stdio.h>
int main() {
	float d, l, kmpl;
	scanf("%f %f", &d, &l);
	
	kmpl = d / l;	

	if (kmpl < 8) puts("Venda o carro!");
	else if (kmpl > 7 && kmpl < 15) puts("Econômico!");
	else puts("Super econômico!");

	return 0;
}

