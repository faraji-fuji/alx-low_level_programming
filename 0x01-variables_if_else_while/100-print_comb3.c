#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: zero
 */

int main(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i + 48));
			putchar((j + 48));
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
