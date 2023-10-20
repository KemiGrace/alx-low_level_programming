#include <stdio.h>
#include "lists.h"

/**
 * print_list - this function prints all the elements of a list_t list.
 * @h: the singly linked list
 *
 * Return: the number of node printed (on success)
 */
size_t print_list(const list_t *h)
{
	size_t N = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		N++;
	}
	return (N);
}
