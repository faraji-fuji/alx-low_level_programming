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

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
