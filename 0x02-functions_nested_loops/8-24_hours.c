#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *              starting from 00:00 to 23:59.
 *
 * Return: Nothing.
 */

void jack_bauer(void)
{
	int x, y, z, w;

	x = 0;
	while (x <= 2)
	{
		y = 0;
		while (y <= 9)
		{
			z = 0;
			while (z <= 5)
			{
				w = 0;
				while (w <= 9)
				{
					_putchar(x + 48);
					_putchar(y + 48);
					_putchar(':');
					_putchar(z + 48);
					_putchar(w + 48);
					_putchar('\n');
					if (x == 2 && y == 3 && z == 5 && w == 9)
						return;
					w++;
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
