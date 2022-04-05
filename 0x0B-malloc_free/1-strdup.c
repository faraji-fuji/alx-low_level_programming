#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 *           memory, which contains a copy of the string given as a parameter.
 * @str: a copy of the string.
 *
 * Return: a pointer to a new string which is a duplicate of the string str
 */

char *_strdup(char *str)
{
	char *newSpace;
	int i;
	int size;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}
	size = j + 1;
	newSpace = malloc(size);
	if (newSpace == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newSpace[i] = str[i];
	}

	return (&newSpace[0]);
}
