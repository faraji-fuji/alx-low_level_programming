#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 *          the constant byte b
 *
 * @s: memory area
 * @b: constant byte
 * @n: bytes of memory
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
