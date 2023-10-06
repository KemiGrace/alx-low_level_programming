#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * char *_strdup -  function that duplicate to new memory space location
 * @str: char
 *
 * Return: return 0 on success
 */
char *_strdup(char *str)
{
	char *ddd;
	int s, p = 0;

	if (str == NULL)
		return (NULL);
	s = 0;
	while (str[s] != '\0')
		s++;

	ddd = malloc(sizeof(char) * (s + 1));
	if (ddd == NULL)
		return (NULL);

	for (p = 0; str[p]; p++)
		ddd[p] = str[p];

	return (ddd);
}
