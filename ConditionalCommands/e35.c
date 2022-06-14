#include <stdio.h>
int main() {
	unsigned int d, m, y;
	scanf("%u %u %u", &d, &m, &y);

	if (m > 0 && m <= 12) {
		if (m < 7) {
			if (m == 2 && d > 0 && d <= 28)
				puts("Válida");
			else if (m % 2 != 0 && d > 0 && d <= 31)
				puts("Válida");
			else if (m % 2 != 0 && d > 0 && d < 31)
				puts("Válida");
			else
				puts("Inválida");
		} else {
			if (m == 7 || m == 8 || m % 2 == 0 && d > 0 && d <= 31)
				puts("Válida");
			else if (d > 0 && d < 31)
				puts("Válida");
			else
				puts("Inválida");
		}
	}

	return 0;
}

