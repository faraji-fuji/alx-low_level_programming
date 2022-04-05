#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  a function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer that points to a newly allocated space in memory which
 *         contains the contents of s1, followed by the contents of s2, and
 *	   null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int j = 0, x = 0;
	char *newStr;
	int size = 0, size1 = 0, size2 = 0;
	int i = 0, k = 0;

	while (s1[j] != '\0')
		j++;

	while (s2[x] != '\0')
		x++;

	size1 = j + 1;
	size2 = x + 1;
	size = size1 + size2;
	newStr = malloc(size - 1);
	if (s1 == NULL && s2 == NULL)
	{
		newStr[0] = '\n';
		return (&newStr[0]);
	}
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		if (s1[i] == '\0')
		{
			break;
		}
		newStr[i] = s1[i];
	}
	for (j = i; j < size; j++)
	{
		newStr[j] = s2[k];
		k++;
	}
	return (&newStr[0]);
}
