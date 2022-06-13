#include <stdio.h>
int main() {
	int year;
	scanf("%d", &year);
	if (year % 4 == 0)
		printf("É bissexto\n");
	else
		printf("Não é bissexto\n");
	return 0;
}

