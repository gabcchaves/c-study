#include <stdio.h>
int main() {
	enum pCode { A = 100, B, C, D, E, F, G };
	char *pName[] = { "Cachorro Quente", "Bauru Simples", "Bauru com Ovo", "Hamburguer", "Cheeseburguer", "Suco", "Refrigerante" };
	float pPrice[] = { 1.20, 1.30, 1.50, 1.20, 1.70, 2.20, 1.00 };
	float total;
	int c, q;

	puts("Entre com o código e a quantidade do produto: ");
	scanf("%d %d", &c, &q);

	switch (c) {
		case A:
			total = pPrice[0] * q;
			break;
		case B:
			total = pPrice[1] * q;
			break;
		case C:
			total = pPrice[2] * q;
			break;
		case D:
			total = pPrice[3] * q;
			break;
		case E:
			total = pPrice[4] * q;
			break;
		case F:
			total = pPrice[5] * q;
			break;
		case G:
			total = pPrice[6] * q;
			break;
		default:
			puts("Código inválido");
			return 0;
	}

	printf("Você pediu %d '%s'(s). Total a pagar: %.2f\n", q, pName[c-100], total);

	return 0;
}

