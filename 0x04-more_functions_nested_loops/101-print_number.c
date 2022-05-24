#include "main.h"
/**
 * print_number - a function that prints an integer.
 * @n: integer to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	int d, number = n;

	d = 1;
	while (number % 10 > 0)
	{
		d *= 10;
		number /= 10;
	}
	d = d / 10;
	while (n > 0)
	{
		_putchar((n / d) + '0');
		n %= d;
		d /= 10;
	}
	_putchar('\n');
}
