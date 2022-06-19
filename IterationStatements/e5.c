#include <stdio.h>
int main() {
	unsigned int size = 10;
	int n[size], sum = 0;

	for (unsigned int i = 0; i < size; i++)
		scanf("%d", &n[i]);
	
	for (unsigned int i = 0; i < size; i++)
		sum += n[i];

	printf("%d\n", sum);

	return 0;
}

