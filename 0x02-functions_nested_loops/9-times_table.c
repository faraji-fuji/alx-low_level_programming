#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j, p;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			p = i * j;
			if (p < 10)
			{
				if (i)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + 48);
				}
				else
				{
					_putchar(p + 48);
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}

			i++;
		}
		_putchar('\n');
		j++;
	}
}
