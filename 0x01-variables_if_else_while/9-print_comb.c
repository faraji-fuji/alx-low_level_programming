#include <stdio.h>

/**
 * main - print all combinations of single digit numbers.
 *
 * Return: Zero.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
