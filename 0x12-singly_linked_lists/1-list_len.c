#include <stdio.h>
#include "lists.h"

/**
 * list_len - this function adds a new node at the beginning of a list.
 * @h: this is the poiter to the list_t list
 *
 * Return: the number of elements h contains
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
