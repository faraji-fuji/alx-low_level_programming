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
	long unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	newSpace = malloc (sizeof(str));
	if (newSpace == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(str); i++)
	{
		newSpace[i] = str[i];
	}

	return (&newSpace[0]);
}
