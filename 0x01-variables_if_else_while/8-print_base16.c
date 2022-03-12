#include <stdlib.h>
#include <stdio.h>

/**
  * main - prints base 16 numbers
  *
  * Return: zero
  */

int main(void)
{
	char myChar;
	int i;
	int j;
	char secondChar;

	myChar = '0';
	secondChar = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(myChar);
		myChar += 1;
	}
	for (j = 0; j < 6; j++)
	{
		putchar(secondChar);
		secondChar += 1;
	}
	putchar('\n');
	return (0);
}
