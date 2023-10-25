#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer that points to the first element in the list
 * @n: data to be inserted in the new element
 *
 * Return: pointer to the new node on suceess or NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *N;
	listint_t *temp = *head;

	N = malloc(sizeof(listint_t));
	if (!N)
		return (NULL);

	N->n = n;
	N->next = NULL;

	if (*head == NULL)
	{
		*head = N;
		return (N);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = N;

	return (N);
}
