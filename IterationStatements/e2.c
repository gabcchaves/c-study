#include <stdio.h>

int main() {
	unsigned int i;

	for (i = 1; i <= 100; i++)
		printf("%u ", i);

	puts("\n");

	i = 1;
	while (i <= 100) {
		printf("%u ", i);
		i++;
	}

	puts("\n");

	i = 1;
	do {
		printf("%u ", i);
		i++;
	} while (i <= 100);

	return 0;
}

