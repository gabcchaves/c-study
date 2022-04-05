#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	char number[4];
	do scanf("%s", &number);
	while (atoi(number) < 100 || atoi(number) > 999);
	for (short i = strlen(number)-1; i >= 0; i--)
		printf("%c", number[i]);
	printf("\n");
}
