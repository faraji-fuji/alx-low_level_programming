#include "main.h"
#include <limits.h>

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
 * _print_number - a function that prints an integer.
 * @n: integer to print
 *
 * Return: nothing
 */
void _print_number(int n)
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

	if (n == d)
	{
		d = d / 10;
		_putchar(1 + '0');
		while (d > 0)
		{
			_putchar(0 + '0');
			d = d / 10;
		}
	}
	else
	{
		while (n > 0)
		{
			_putchar((n / d) + '0');
			n %= d;
			d /= 10;
		}
	}
}


/**
 * print_number - a function that prints an integer.
 * @n: integer to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	int na, nb, n1, n2;

	/* if integer is large, divide and print smaller parts.*/
	if (n == -2147483647 - 1)
	{
		n1 = 21474;
		n2 = 83648;
		_putchar('-');
		_print_number(n1);
		_print_number(n2);
		return;
	}
	if (n > 147483647)
	{
		na = n / 10000;
		nb = n % 10000;
		_print_number(na);
		_print_number(nb);
	}
	else
		_print_number(n);
}
