#include <stdio.h>
int main() {
	unsigned int n;
	scanf("%u", &n);

	for (unsigned int i = 1, j = 1; i <= n; i++, j += 2)
		printf("%u ", j);

	return 0;
}

