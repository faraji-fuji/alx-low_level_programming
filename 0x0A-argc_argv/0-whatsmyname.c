#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
