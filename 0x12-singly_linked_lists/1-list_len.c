#include "lists.h"
#include <stddef.h>

/**
 * list_len -  returns the number of elements in a linked list_t list.
 *
 * @h: pointer to list structure.
 *
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t e;

	e = 0;
	while (h)
	{
		h = h->next;
		e++;
	}
	return (e);
}
