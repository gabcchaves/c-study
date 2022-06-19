#include <stdio.h>
int main() {
	size_t size = 10;
	int n[10], sum;
	float avg;

	for (unsigned int i = 0; i < size; i++)
		scanf("%d", &n[i]);

	for (unsigned int i = 0; i < size; i++)
		sum += n[i];

	avg = sum / size;

	printf("%.2f\n", avg);
	return 0;
}

