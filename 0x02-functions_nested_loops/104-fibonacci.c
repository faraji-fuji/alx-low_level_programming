#include <stdio.h>

/**
 * fib_98 - generate first 50 fibonacci.
 */
void fib_98(void)
{
	unsigned long int first = 1, second = 2, next = 0, c, half1 = 0, half2 = 0;

	printf("%ld, %ld", first, second);
	c = 0;
	while (c < 96)
	{
		if (next < 1800000000000000000)
		{
			next = first + second;
			printf(", %ld", next);
			first = second;
			second = next;
			c++;
		}
		else
		{
			next = first + second;
			half1 = ((first + second) / 10000000000);
			half2 = ((first + second) % 10000000000);
			printf(", %ld%ld", half1, half2);
			first = second;
			second = next;
			c++;
		}
	}
	printf("\n");
}

/**
 * main - invoke fib_98()
 *
 * Return: 0
 */
int main(void)
{
	fib_98();
	return (0);
}
