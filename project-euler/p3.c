#include <stdio.h>
#include <stdbool.h>

bool isPrime(long int num)
{
	for (long int i = 2; i <= (long int) num / 2; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	long int largeNumber = 600851475143;
	long int largestPrimeFactor;
	for (int i = 3; i <= (long int) largeNumber / 2; i++)
	{
		if (isPrime(i) && largeNumber % i == 0)
			largestPrimeFactor = i;	
	}
	printf("%d\n", largestPrimeFactor);
	return 0;
}
