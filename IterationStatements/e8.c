#include <stdio.h>
int main() {
	int n, largest, smallest;
	for (unsigned int i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (i == 0) {
			largest = n;
			smallest = n;
		} else {
			if (n > largest) largest = n;
			if (n < smallest) smallest = n;
		}
	}

	printf("Maior: %d\nMenor: %d\n", largest, smallest);

	return 0;
}

