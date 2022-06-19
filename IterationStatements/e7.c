#include <stdio.h>
int main() {
	size_t size = 10;
	int n[size], sum;
	float avg;

	for (unsigned int i = 0; i < size; i++) {
		do
			scanf("%d", &n[i]);
		while (n[i] < 0);
	}

	for (unsigned int i = 0; i < size; i++) {
		sum += n[i];
	}

	avg = sum / size;

	printf("%.2f", avg);
	
	return 0;
}

