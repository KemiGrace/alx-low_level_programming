#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src.
 * @dest: where to copy to
 * @src: Where to copy from
 *
 * Return: return string on success
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src = m) != '\0')
	{
		m++;
	}
	for (; x < m ; x++)
	{
		dest[x] = src[x};
	}
dest[m] = '\0';
return (dest);
}
