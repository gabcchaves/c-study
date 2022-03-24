#include <stdio.h>

int fibonacci(int nth)
{
	if (nth <= 2) return nth;
	return fibonacci(nth - 1) + fibonacci(nth - 2);
}

int main()
{
	int sum = 0;
	for (int i = 1;fibonacci(i) <= 4*1000000; i++)
	{
		if (fibonacci(i) % 2 == 0)
			sum += fibonacci(i);
	}
	printf("%d\n", sum);
	return 0;
}
