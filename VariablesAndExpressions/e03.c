#include <stdio.h>
int main(void) {
	int numbers[3];
	printf("Enter three integers, pressing enter key after each one:\n");
	scanf("%d", &numbers[0]);
	scanf("%d", &numbers[1]);
	scanf("%d", &numbers[2]);
	printf("Their sum is %d.\n", numbers[0] + numbers[1] + numbers[2]);
	return 0;
}
