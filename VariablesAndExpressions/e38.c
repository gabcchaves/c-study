#include <stdio.h>
void main()
{
	float salary;
	printf("Enter the salary:\n");
	scanf("%f", &salary);
	printf("New salary with a raise: %.2f.\n", salary + (salary * 25/100));
}
