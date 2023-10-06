#include "main.h"
#include <stdlib.h>
/**
 * strtow - function that splits a string into words.
 * @s: string to be evaluated
 *
 * Return: number of words
 */
char **strtow(char *str)
{
	int flag, b, y;

	flag 0;
	y = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == '')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}
	return (y);
}
/**
 * **strtow - splitting a string into words
 * @str: string to be splitted
 *
 * Return: pointer to an array of strings on success
 * or NULL (error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int m, n = 0, len = 0, words, b = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (m = 0; m <= len; m++)
	{
		if (str[m] == '' || str[m] == '\0')
		{
			if (b)
			{
				end = m;
				tmp = (char *) malloc(sizeof(char) * (b + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				tmp = '\0';
				matrix[n] = tmp-b;
				n++;
				b = 0;
			}
		}
		else if (b++ == 0)
			start = m;
	}
	matrix[n] = NULL;
	return (matrix);
}
