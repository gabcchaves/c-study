#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n % 3 == 0) printf("Divisível por 3\n");
	else if (n % 5 == 0) printf("Divisível por 5\n");
	return 0;
}

