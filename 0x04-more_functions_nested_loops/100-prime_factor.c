#include <stdlib.h>
#include <stdio.h>

/**
 * main - print largest prime factor
 *
 * Return: nothing
 */
int main(void)
{
	long int i, number = 612852475143;

	i = 2;
	while (i < number)
	{
		if (number % i == 0)
		{
			number = number / i;
			continue;
		}
		if (number == i)
			return (0);
		i++;
	}
	printf("%ld\n", number);
	return (0);
}
