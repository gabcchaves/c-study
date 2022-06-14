#include <stdio.h>
#include <math.h>
int main() {
	unsigned int aT[2], dT[2];
	float fAT, fDT, diff;

	/* Get time interval */
	scanf("%u %u", &aT[0], &aT[1]);
	scanf("%u %u", &dT[0], &dT[1]);
	
	/* Convert to decimal */
	fAT = aT[0] + (float) aT[1] / 60;
	fDT = dT[0] + (float) dT[1] / 60;

	/* Compute difference */
	if (fAT < fDT) {
		diff = fDT - fAT;
	} else if (fAT > fDT) {
		diff = 24 - (fAT - fDT);
	} else {
		diff = 24;
	}

	// Compute tax
	if (diff <= 2) {
		printf("Total a pagar: %.2f\n", ceil(diff));
	} else if (diff <= 4) {
		printf("Total a pagar: %.2f\n", ceil(diff) * 1.40);
	} else {
		printf("Total a pagar: %.2f\n", ceil(diff) * 2);
	}
	
	return 0;
}

