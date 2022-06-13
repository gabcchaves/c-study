#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n < 0) printf("Número inválido");
	else printf("%.2f\n", log(n));
	return 0;
}

