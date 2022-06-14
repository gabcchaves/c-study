#include <stdio.h>
#include <math.h>
int main() {
	unsigned int a, b, c, opt;

	puts("Médias disponíveis");
	puts("1 - Geométrica; 2 - Ponderada; 3 - Hamônica; 4 - Aritmética");
	scanf("%u", &opt);

	puts("Entre com os três números naturais");
	scanf("%u %u %u", &a, &b, &c);

	switch (opt) {
		case 1:
			printf("%2f\n", (float) cbrt(a * b * c));
			break;
		case 2:
			printf("%.2f\n", (float) (a + 2 * b + 3 * c) / 6);
			break;
		case 3:
			printf("%.2f\n", (float) (1 / (1/a + 1/b + 1/c)));
			break;
		case 4:
			printf("%.2f\n", (float) (a + b + c) / 3);
			break;
	}

	return 0;
}

