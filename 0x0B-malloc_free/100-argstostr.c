#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: input
 * @av: double pointer array
 *
 * Return: 0 on success
 */
char *argstostr(int ac, char **av)
{
	int x, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
		{
			str[r] = av[x][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
