#include <stdio.h>

/**
 * fib_sum - print sum of even fibonacci terms where value of term < 4,000,000
 */
void fib_sum(void)
{
	unsigned long int first = 1, second = 2, next = 0, sum = 0;

	while (next <= 4000000)
	{
		next = first + second;
		first = second;
		second = next;
		if (!(next % 2))
			sum += next;
	}
	printf("%ld\n", sum);
}

/**
 * main - invoke fib_sum()
 *
 * Return: 0
 */
int main(void)
{
	fib_sum();
	return (0);
}
