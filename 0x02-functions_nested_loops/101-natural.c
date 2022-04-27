#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_natural - computes and prints the sum of all the
 * multiples of 3 or 5 below n.
 * @n: upper limit
 *
 * Return: sum
 */
int print_natural(int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		if (!(i % 3) || !(i % 5))
			sum += i;
	}
	return (sum);
}

/**
 * main - invokes print_natural().
 *
 * Return: Zero.
 */
int main(void)
{
	printf("%d\n", print_natural(1024));
	return (0);
}
