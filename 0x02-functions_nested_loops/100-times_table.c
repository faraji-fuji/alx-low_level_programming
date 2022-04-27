#include "main.h"

/**
 * print_3_digit_number - print 3 digit number.
 * @p: number to print
 */
void print_3_digit_number(int p)
{
	_putchar(',');
	_putchar(' ');
	_putchar((p / 100) + 48);
	_putchar(((p / 10) % 10) + 48);
	_putchar((p % 10) + 48);
}

/**
 * print_2_digit_number - print 2 digit number.
 * @p: number to print
 */
void print_2_digit_number(int p)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((p / 10) + 48);
	_putchar((p % 10) + 48);
}

/**
 * print_1_digit_number - print 1 digit number.
 * @p: number to print
 */
void print_1_digit_number(int p)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(p + 48);
}

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: size of the table
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = j * i;
			if (p < 10)
			{
				if (j)
					print_1_digit_number(p);
				else
					_putchar(p + 48);
			}
			else if (p < 100)
				print_2_digit_number(p);
			else
				print_3_digit_number(p);
		}
		_putchar('\n');
	}
}
