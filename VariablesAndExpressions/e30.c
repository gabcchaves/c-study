#include <stdio.h>
int main()
{
	float brl, usdExchRate;
	printf("Enter value in BRL: ");
	scanf("%f", &brl);
	printf("Enter the dollar exchange rate: ");
	scanf("%f", &usdExchRate);
	printf("Value converted to dollars: %.2f.\n", brl * usdExchRate);
	return 0;
}
