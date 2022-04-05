#include <stdio.h>
void main()
{
	float length, width, screenPrice, perimeter;
	scanf("%f", &length);
	scanf("%f", &width);
	scanf("%f", &screenPrice);
	perimeter = length * 2 + width * 2;
	printf("Cost to fence with screen: %.2f.\n", perimeter * screenPrice);
}
