#include <stdio.h>
int main() {
	float height, weight;
	scanf("%f %f", &height, &weight);

	if (weight <= 60) {
		if (height < 1.20) putchar('A');
		else if (height <= 1.70) putchar('B');
		else putchar('C');
	} else if (weight > 60 && weight <= 90) {
		if (height < 1.20) putchar('D');
		else if (height <= 1.70) putchar('E');
		else putchar('F');
	} else {
		if (height < 1.20) putchar('G');
		else if (height <= 1.70) putchar('H');
		else putchar('I');
	}

	return 0;
}

