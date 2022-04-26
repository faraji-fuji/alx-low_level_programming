#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to head pointer.
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;
	int i;
	list_t *temp;

	newElement = malloc(sizeof(list_t));
	if (newElement)
	{
		newElement->str = strdup(str);
		i = 0;
		while (str[i])
			i++;
		newElement->len = i;

		temp = &(*(*head));
		*head = newElement;
		newElement->next = temp;

		return (newElement);
	}
	return (NULL);
}
