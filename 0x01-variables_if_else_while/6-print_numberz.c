#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers
 *
 * Return: zero
 */
int main(void)
{
	int i;
	int myChar;
	char newLine;

	myChar = '0';
	newLine = '\n';
	for (i = 0; i < 10; i++)
	{
		putchar(myChar);
		myChar++;
	}
	putchar(newLine);
	return (0);
}
