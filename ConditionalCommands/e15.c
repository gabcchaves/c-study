#include <stdio.h>
int main() {
	unsigned int dayNum;
	scanf("%u", &dayNum);
	switch (dayNum) {
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda-feira\n");
			break;
		case 3:
			printf("Terça-feira\n");
			break;
		case 4:
			printf("Quarta-feira\n");
			break;
		case 5:
			printf("Quinta-feira\n");
			break;
		case 6:
			printf("Sexta-feira\n");
			break;
		case 7:
			printf("Sábado\n");
			break;
		default:
			printf("Número inválido\n");
	}
	return 0;
}

