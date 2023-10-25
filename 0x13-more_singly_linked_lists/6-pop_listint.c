#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer that points to the first element in the linked list
 *
 * Return: the content of the deleted element or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
