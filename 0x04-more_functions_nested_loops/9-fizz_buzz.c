#include <stdio.h>
#include <stdlib.h>

/**
 * main - fizz buzz test
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
			printf("1");
		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf(" FizzBuzz");
		else if ((i % 5) == 0)
			printf(" Buzz");
		else if ((i % 3) == 0)
			printf(" Fizz");
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
