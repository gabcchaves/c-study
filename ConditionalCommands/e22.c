#include <stdio.h>
int main() {
	int age, serviceTime;
	scanf("%d %d", &age, &serviceTime);
	if (age >= 65 || serviceTime >= 30 || age >= 60 && serviceTime >= 25)
		printf("Pode se aposentar\n");
	else
		printf("Não pode se aposentar\n");
	return 0;
}

