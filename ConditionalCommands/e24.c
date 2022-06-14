#include <stdio.h>
#include <string.h>

int main() {
	char state[2];
	float price;
	printf("Entre com o valor do produto:\n");
	scanf("%f", &price);
	printf("Entre com o estado destinatário:\n");
	scanf("%s", state); 

	if (!strcmp(state, "MG")) {
		printf("%.2f\n", price + price*0.07);
	} else if (!strcmp(state, "SP")) {
		printf("%.2f\n", price + price*0.12);
	} else if (!strcmp(state, "RJ")) {
		printf("%.2f\n", price + price*0.15);
	} else if (!strcmp(state, "MS")) {
		printf("%.2f\n", price + price*0.08);
	} else {
		puts("Destino inválido");
	}

	return 0;
}

