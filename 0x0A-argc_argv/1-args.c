#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
