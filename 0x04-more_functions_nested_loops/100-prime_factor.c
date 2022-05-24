#include <stdlib.h>
#include <stdio.h>

/**
 * _isprime - check if a number is prime
 * @num: number to check
 *
 * Return: 1 if is prime, 0 otherwise
 */
long int _isprime(long int num)
{
	long int i;

	if (num < 2)
		return (0);
	if (num == 2)
		return (1);
	for (i = 3; i < num; i++)
	{
		if (num % i == 0 || num % 2 == 0)
			return (0);
	}
	return (1);
}

/**
 * main - print largest prime factor
 *
 * Return: nothing
 */
int main(void)
{
	long int p, prime = 0, number = 612852475143;

	p = 1;
	while (p < number)
	{
		if (_isprime(p))
		{
			if (number % p == 0)
				prime = p;
		}
		p++;
	}
	printf("%ld\n", prime);
	return (0);
}
