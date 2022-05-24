#include "main.h"

/**
 * get_decimal - get decimal places
 * @n: integer to find decimal places for
 *
 * Return: decimal places
 */
int get_decimal(int n)
{
	int d = 1;

	while (n > 0)
	{
		d *= 10;
		n /= 10;
	}

	d = d / 10;
	return (d);
}

/**
 * print_number - a function that prints an integer.
 * @n: integer to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	int d;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	d = get_decimal(n);

	while (n > 0)
	{
		_putchar((n / d) + '0');
		n %= d;
		d /= 10;
	}
}
