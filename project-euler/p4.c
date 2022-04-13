// Program to find the largest palindrome
// made of the product of 3 digit numbers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Invert num digits
void invertStr(char * str, int n) {
	int a, i, j;
	for (i = n, j = 0; i > n/2; i--, j++) {
		if (i == j) break;
		a = str[i];
		str[i] = str[j];
		str[j] = a;
	}
}

int main(int argc, char **argv) {
	int lp, i, j;

	for (i = 100; i < 1000; i++) {
		for (j = 100; j < 1000; j++) {
			char * nStr1, * nStr2;	

			// Invert first string
			if (i * j < 100000) {
				continue;
				nStr1 = calloc(5, sizeof(char));
				nStr2 = calloc(5, sizeof(char));
				sprintf(nStr1, "%d", i * j);
				sprintf(nStr2, "%d", i * j);
				invertStr(nStr1, 4);							// 5 digit
			}	else {
				nStr1 = calloc(6, sizeof(char));
				nStr2 = calloc(6, sizeof(char));
				sprintf(nStr1, "%d", i * j);
				sprintf(nStr2, "%d", i * j);
				invertStr(nStr1, 5);							// 6 digit
			}

			// Strings equality
			if (strcmp(nStr1, nStr2) == 0) {
				if (i * j > lp) {
					lp = i * j;
				}
			}
		}
	}

	// Print result
	printf("%d\n", lp);
	return 0;
}
