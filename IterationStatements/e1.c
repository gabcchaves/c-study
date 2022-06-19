#include <stdio.h>

// Determine n first multiples of 3 (n -> array size)
void getMultiplesOfThree(unsigned int array[], unsigned int size) {
	for (unsigned int i = 1; i <= size; i++)
		array[i-1] = 3 * i;
}

int main() {
	unsigned int size = 5, array[size];

	getMultiplesOfThree(array, size);
	
	printf("%u primeiros múltiplos de 3:\n", size);
	for (unsigned int i = 0; i < size; i++) {
		printf("%u ", array[i]);
	}

	return 0;
}

