#include <stdio.h>
int main() {
	enum ca { A = 52, B = 70, C = 42, D = 19, E = 15 };
	unsigned int ans[5], numCorrectAnswers = 0;
	puts("Avaliação");
	// 1
	puts("1 - Qual é a soma de 21 + 31?");
	scanf("%u", &ans[0]);
	if (ans[0] == A) numCorrectAnswers++;
	// 2
	puts("2 - Qual é a soma de 40 + 30?");
	scanf("%u", &ans[1]);
	if (ans[1] == B) numCorrectAnswers++;
	// 3
	puts("3 - Qual é a soma de 21 + 21?");
	scanf("%u", &ans[2]);
	if (ans[2] == C) numCorrectAnswers++;
	// 4
	puts("4 - Qual é a soma de 9 + 10?");
	scanf("%u", &ans[3]);
	if (ans[3] == D) numCorrectAnswers++;
	// 5
	puts("5 - Qual é a soma de 7 + 8?");
	scanf("%u", &ans[4]);
	if (ans[4] == E) numCorrectAnswers++;

	printf("Gabarito: 1 - %2d\n\t2 - %2d\n\t3 - %2d\n\t4 - %2d\n\t5 - %2d\n", A, B, C, D, E);
	puts("Suas respostas:");
	for (unsigned int i = 0; i < 5; i++) {
		printf("%d - %d\n", i+1, ans[i]);
	}

	printf("Você acertou %u questões.\n", numCorrectAnswers);
	
	return 0;
}
