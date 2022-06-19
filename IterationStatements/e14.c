#include <stdio.h>
int main() {
	unsigned int n;

	do {
		puts("Entre com um natural par:");
		scanf("%u", &n);
	} while (n % 2 != 0);
	
	for (unsigned int i = n+2; i > 0; i -= 2)
		printf("%u ", i-2);

	return 0;
}

