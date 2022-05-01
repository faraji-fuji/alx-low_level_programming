#include <stdio.h>

/**
 * fib - generate first 50 fibonacci.
 */
void fib(void)
{
	unsigned long int first = 1, second = 2, next = 0, c;

	printf("%ld, %ld", first, second);
	c = 0;
	while (c < 48)
	{
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;
		c++;
	}
	printf("\n");
}

/**
 * main - invoke fib()
 *
 * Return: 0
 */
int main(void)
{
	fib();
	return (0);
}
