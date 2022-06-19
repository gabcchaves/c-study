#include <stdio.h>
int main() {
	unsigned int n;
	scanf("%d", &n);

	for (unsigned int i = n+1; i > 0; i--)
		printf("%u ", i-1);

	return 0;
}
