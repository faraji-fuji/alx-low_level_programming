#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 *
 * @n: starting integer.
 *
 * Return: Nothing.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else if (n == 98)
		printf("%d\n", n);
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
