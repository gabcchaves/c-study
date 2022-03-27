#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char * input;
	float values[3], squareSum;
	printf("Enter three values, separated by space:\n");
	scanf("%s", input);
	values[0] = atof(strtok(input, " "));
	values[1] = atof(strtok(input, " "));
	values[2] = atof(strtok(input, " "));
	squareSum = pow(values[0], 2) + pow(values[1], 2)	+ pow(values[2], 2);
	printf("Sum of the their squares: %.2f.\n", squareSum);
	return 0;
}
