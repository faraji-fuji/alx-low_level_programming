#include <stdio.h>
#include <string.h>

/**
  * main - prints a statement
  *
  * Return: zero
  */
int main(void)
{
	char str[60];

	strcpy(str, "with proper grammar, but the outcome is a piece of art,");
	printf("%s\n", str);
	return (0);
}
