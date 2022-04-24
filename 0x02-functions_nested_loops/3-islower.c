#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * @c: Character to check.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
