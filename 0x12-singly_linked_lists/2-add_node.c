#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: this is the head of nodes i.e double pointer to the list_t list
 * @str: This is the new string needed to be added to the node
 *
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
