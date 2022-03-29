#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment
 * @accept: accept
 *
 * Return: the number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int b;

	while (*s != '\0')
	{
		if (*accept == *s)
		{
			b += 1;
		}
		s++;
	}
	return (b);
}

