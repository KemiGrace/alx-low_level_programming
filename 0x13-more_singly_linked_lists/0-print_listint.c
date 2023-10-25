#include "lists.h"

/**
 * print_listint - this function prints all the elements of a listint_t list
 * @h: the type listint_t linked list to be printed
 *
 * Return: the exact number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t y = 0;

	while (h)
	{
		printf("%d\n", h->n);
		y++;
		h = h->next;
	}
	return (y);
}
