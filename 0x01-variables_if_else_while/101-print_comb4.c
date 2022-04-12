#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: zero
 */

int main(void)
{
	int k = 0;
	int j = 1;
	int i = 2;

	while (k < 8)
	{
		while (j < 9)
		{
			while (i < 10)
			{
				putchar(k + 48);
				putchar(j + 48);
				putchar(i + 48);
				if (k == 7 && j == 8 && i == 9)
					break;
				putchar(',');
				putchar(' ');
				i++;
			}
			j++;
			i = j + 1;
		}
		k++;
		j = k;
	}
	putchar('\n');
	return (0);
}
