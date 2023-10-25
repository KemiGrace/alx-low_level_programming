#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: poiter that points to the first node in the list
 *
 * Return: pointer that points to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}
	*head = before;

	return (*head);
}
