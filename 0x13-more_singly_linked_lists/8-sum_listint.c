#include "lists.h"

/**
 * sum_listint - return the sum of all the data of a listint_t linked list.
 * @head: this is the first node in the linked list
 *
 * Return: result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
