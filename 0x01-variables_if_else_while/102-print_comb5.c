#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Zero.
 */

int main(void)
{
	int x = 0, y = 0, z = 0, w = 1;

	while (x < 10)
	{
		while (y < 10)
		{
			while (z < 10)
			{
				while (w < 10)
				{
					if (x == z && y == w)
					{
						w++;
						continue;
					}
					putchar(x + 48);
					putchar(y + 48);
					putchar(' ');
					putchar(z + 48);
					putchar(w + 48);
					if (x == 9 && y == 8 && z == 9 && w == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					w++;
				}
				w = 0;
				z++;
			}
			y++;
			z = x;
			w = y + 1;
		}
		x++;
		y = 0;
	}
	putchar('\n');
	return (0);
}
