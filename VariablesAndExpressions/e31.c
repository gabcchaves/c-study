#include <stdio.h>
int main()
{
	int i;
	printf("Enter an integer: ");
	scanf("%d", &i);
	printf("Predecessor: %d.\nSuccessor: %d.\n", i--, i++);
	return 0;
}
