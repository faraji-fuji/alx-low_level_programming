#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible combinations of single digit numbers
 *
 * Return: zero
 */
int main(void)
{
	int i;
	int myChar;

	myChar = '0';

	for (i = 0; i < 10; i++)
	{
		putchar(myChar);
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		myChar++;
	}
	putchar ('\n');
	return (0);
}
