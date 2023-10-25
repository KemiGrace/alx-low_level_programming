#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the type listint linked list to be reversed
 *
 * Return: the exact number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t y = 0;

	while (h)
	{
		y++;
		h = h->next;
	}
	return (y);
}
