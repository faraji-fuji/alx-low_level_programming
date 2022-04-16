#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Zero.
 */

int main(void)
{
	int x, y, z, w;

	for (x = 0; x < 10; x++)
		for (y = 0; y < 9; y++)
			for (z = x; z < 10; z++)
				for (w = y + 1; w < 10; w++)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(' ');
					putchar(z + 48);
					putchar(w + 48);
					if (x == 9 && y == 8 && z == 9 && w == 9)
						break;
					putchar(',');
					putchar(' ');
				}
	putchar('\n');
	return (0);
}
