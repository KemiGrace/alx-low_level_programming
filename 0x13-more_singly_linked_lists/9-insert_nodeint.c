#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer that points to the first node in the list
 * @idx: this is the index at which we add the new node
 * @n: this is the data needed for the new node
 *
 * Return: pointer to the new node or NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *N;
	listint_t *temp = *head;

	N = malloc(sizeof(listint_t));
	if (!N || !head)
		return (NULL);

	N->n = n;
	N->next = NULL;

	if (idx == 0)
	{
		N->next = *head;
		*head = N;
		return (N);
	}
	for (m = 0; temp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			N->next = temp->next;
			temp->next = N;
			return (N);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
