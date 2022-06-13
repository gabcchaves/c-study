#include <stdio.h>
int main() {
	float sBase, gBase, height, area;
	scanf("%f %f %f", &sBase, &gBase, &height);
	if (sBase > 0 && gBase > 0) {
		area = ((sBase + gBase) * height) / 2; 
		printf("Área do trapézio: %.2f\n", area);
	}
	return 0;
}

