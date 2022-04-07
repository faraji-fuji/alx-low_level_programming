#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: the first n bytes of s2
 *
 * Return: a pointer that points to a newly allocated space in memory,
 *         which contains s1, followed by the first n bytes of s2, and
 *	   null terminated. If the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatd;
	unsigned int sizeS1, sizeS2, i = 0, j = 0, x = 0;

	while (s1[i] != '\0')
		i++;
	sizeS1 = i;
	while (s2[x] != '\0')
		x++;
	sizeS2 = x;
	if (n >= sizeS2)
	{
		concatd = malloc(sizeS1 + sizeS2);
		if (concatd == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < sizeS1; i++)
			concatd[i] = s1[i];
		for (j = 0; j <= sizeS2; j++, i++)
		{
			concatd[i] = s2[j];
		}
	}
	if (n < sizeS2)
	{
		concatd = malloc(sizeS1 + n - 1);
		if (concatd == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < sizeS1; i++)
			concatd[i] = s1[i];
		for (j = 0; j < n; j++, i++)
		{
			concatd[i] = s2[j];
		}
		concatd[-1] = '\0';
	}
	return (concatd);
}

