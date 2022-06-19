#include <stdio.h>
int main() {
	unsigned int even, sum = 0;

	for (unsigned int i = 0, j = 2; i < 50; i++, j += 2)
		sum += j;

	printf("%u\n", sum);
	return 0;
}

