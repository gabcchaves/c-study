#include <stdio.h>
void main()
{
	float totalValue = 780000, winners[3];
	winners[0] = totalValue * 46/100;
	winners[1] = totalValue * 32/100;
	winners[2] = totalValue * 22/100;
	printf("First winner (46%%): %.2f.\n", winners[0]);
	printf("Second winner (32%%): %.2f.\n", winners[1]);
	printf("Third winner (22%%): %.2f.\n", winners[2]);
}
