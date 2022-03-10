#include <stdio.h>

/**
  * main - print size of variable types
  *
  * Return: zero
  */
int main(void)
{
	printf("Size of a Char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
