#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: NUmber:
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + 48);
	return (n % 10);
}
