#include <stdio.h>
int main() {
	int n = 1000;
	while (n <= 100000) {
		printf("%d ", n);
		n += 1000;
	}
	return 0;
}

