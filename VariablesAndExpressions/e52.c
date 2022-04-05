#include <stdio.h>
void main()
{
	float winner[3], prize, amountBet;
	scanf("%f", &winner[0]);
	scanf("%f", &winner[1]);
	scanf("%f", &winner[2]);
	scanf("%f", &prize);
	amountBet = winner[0] + winner[1] + winner[2];
	winner[0] = winner[0] * 100 / amountBet * prize / 100;
	winner[1] = winner[1] * 100 / amountBet * prize / 100;
	winner[2] = winner[2] * 100 / amountBet * prize / 100;
	for (unsigned short i = 0; i < 3; i++)
		printf("Winner %dº: %.2f.\n", i+1, winner[i]);
}
