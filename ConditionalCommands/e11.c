#include <stdio.h>
#include <stdlib.h>
int main() {
	unsigned int n;
	do
		scanf("%d", &n);
	while (n == 0);

	// Find out sufficient length
	int length = snprintf(NULL, 0, "%u", n);
	char *str = malloc(length+1);
	snprintf(str, length + 1, "%u", n);

	// Sum digits
	unsigned int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += str[i] - '0';
	}

	// Show result
	printf("%d\n", sum);
	free(str);
	return 0;
}

