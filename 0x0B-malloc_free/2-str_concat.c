#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: input to concat
 * @s2: input to concat
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, y, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);
	for (x = 0; x < len1; x++)
		concat[x] = s1[x];

	for (y = 0; y < len2; x++, y++)
		concat[x] = s2[y];

	concat[x] = '\0';

	return (concat);
}
