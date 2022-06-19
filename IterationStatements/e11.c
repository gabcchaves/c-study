#include <stdio.h>
int main() {
	unsigned int n;
	scanf("%u", &n);
	for (unsigned int i = 0; i <= n; i++)
		printf("%u ", i);
	return 0;
}

