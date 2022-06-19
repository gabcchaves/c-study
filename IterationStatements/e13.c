#include <stdio.h>
int main() {
	unsigned int n;
	do {
		puts("Entre como um natural par:");
		scanf("%u", &n);
	} while (n % 2 != 0);

	for (unsigned int i = 0; i <= n; i += 2)
		printf("%u ", i);

	return 0;
}

