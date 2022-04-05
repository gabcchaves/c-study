#include <stdio.h>
void main()
{
	float baseSalary, salary;
	printf("Enter the base salary:\n");
	scanf("%f", &baseSalary);
	salary = baseSalary + baseSalary * 5/100 - baseSalary * 7/100;
	printf("Salary to receive: %.2f.\n", salary);
}
