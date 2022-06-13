#include <stdio.h>
#include <stdlib.h>
int main() {
	int opt;
	float x, y;
	do {
		printf("1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
		scanf("%d", &opt);
		printf("Entre com um número e depois com outro:\n");
		switch (opt) {
			case 1:
				scanf("%f %f", &x, &y);
				printf("Resultado: %.2f\n", x + y);
				break;
			case 2:
				scanf("%f %f", &x, &y);
				printf("Resultado: %.2f\n", x - y);
				break;
			case 3:
				scanf("%f %f", &x, &y);
				printf("Resultado: %.2f\n", x * y);
				break;
			case 4:
				scanf("%f %f", &x, &y);
				printf("Resultado: %.2f\n", x / y);
				break;
		}
		getchar();
		getchar();
		system("clear || cls");
	} while (opt > 0 && opt < 5);
	printf("Programa finalizado.\n");
	return 0;
}

