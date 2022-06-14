#include <stdio.h>
int main() {
	unsigned int age;
	scanf("%d", &age);
	if (age >= 5 && age <= 7) puts("Infatil A");
	else if (age >= 8 && age <= 10) puts("Infantil B");
	else if (age >= 11 && age <= 13) puts("Juvenil A");
	else if (age >= 14 && age <= 17) puts("Juvenil B");
	else puts("Sênior");
	return 0;
}

