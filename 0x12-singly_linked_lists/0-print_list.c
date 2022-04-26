#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list -  prints all the elements of a list_t list.
 *
 * @h: pointer to a list structure.
 *
 * Return: list structure.
 */

size_t print_list(const list_t *h)
{
	int e;

	e = 0;
	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		e++;
	}
	return (e);
}
