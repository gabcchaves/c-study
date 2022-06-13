#include <stdio.h>
#include <stdlib.h>
int main() {
	int opt;
	float x, y;
	do {
		system("clear || cls");
		printf("Escolha a opção:\n");
		printf("0 - Finalizar programa.\n1 - Soma de dois números.\n2 - Diferença de dois números (maior pelo menor).\n");
		printf("3 - Produto entre dois números.\n4 - Divisão entre dois números (o denominador não pode ser zero).\n");
		
		scanf("%d", &opt);
		if (opt < 0 && opt > 4) {
			printf("Opção inválida\n");
			continue;
		}

		printf("Entre com um número e depois com outro:\n");
		scanf("%f %f", &x, &y);

		switch (opt) {
			case 1:
				printf("%.2f", x + y);
				break;
			case 2:
				printf("%.2f", abs(x - y));
				break;
			case 3:
				printf("%.2f", x * y);
				break;
			case 4:
				printf("%.2f", x / y);
				break;
		}
		getchar();
		getchar();
	} while (opt != 0);
	return 0;
}

