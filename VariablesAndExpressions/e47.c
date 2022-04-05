#include <stdio.h>
#include <stdlib.h>
void main()
{
	char number[5];
	do scanf("%s", &number);
	while (atoi(number) < 1000 || atoi(number) > 9999);
	for (short i = 0; i < 4; i++) printf("%c\n", number[i]);
}
