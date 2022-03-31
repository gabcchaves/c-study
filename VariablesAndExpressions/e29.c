#include <stdio.h>
int main()
{
	float grades[4];

	printf("Enter four grades, pressing enter after each of them:\n");
	for (int i = 0; i < 4; i++)
		scanf("%f", grades[i]);	

	for (int i = 0; i < 4; i++)
		sum += grades[i];
	
	printf("Arithmetic average: %.2f.\n", sum / 4);

	return 0;
}
