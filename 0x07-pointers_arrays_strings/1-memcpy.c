#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes to be copied
 *
 * Return: a pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{

		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
