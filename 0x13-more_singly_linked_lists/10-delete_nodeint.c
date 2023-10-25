#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer that points to the first element in the list
 * @index: this is the index of the node to be deleted
 *
 * Return: 1 on success of -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *present = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (y < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		y++;
	}
	present = temp->next;
	temp->next = present->next;
	free(present);
	return (1);
}
