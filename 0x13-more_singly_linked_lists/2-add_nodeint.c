#include "lists.h"

/**
 * add_nodeint -  add a new node at the beginning of a listint_t list.
 * @head: pointer that points to the first node in the list
 * @n: this is the data to be inserted in the new node
 *
 * Return: pointer to the new node on success or NULL otherwise.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *N;

	N = malloc(sizeof(listint_t));
	if (!N)
		return (NULL);

	N->n = n;
	N->next = *head;
	*head = N;

	return (N);
}
