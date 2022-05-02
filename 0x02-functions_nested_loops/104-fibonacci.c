#include <stdio.h>

/**
 * fib_98 - generate first 50 fibonacci.
 */
void fib_98(void)
{
	unsigned long int first = 1, first_a, first_b, second = 2, second_a, second_b;
	unsigned long int next, next_a, next_b;
	int c;

	printf("%lu, %lu", first, second);
	c = 0;
	while (c < 90)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
		c++;
	}


	first_a = (first / 10000000000);
	first_b = (first % 10000000000);
	second_a = (second / 10000000000);
	second_b = (second % 10000000000);

	while (c < 96)
	{
		next_a = first_a + second_a;
		next_b = first_b + second_b;
		if (next_b > 999999999)
		{
			next_a += 1;
			next_b %= 10000000000;
		}
		printf(", %lu%lu", next_a, next_b);

		first_a = second_a;
		first_b = second_b;
		second_a = next_a;
		second_b = next_b;
		c++;
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
