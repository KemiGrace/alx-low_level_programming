#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: This is the string to be searched
 * @needle: The substring to be located
 *
 * Return: A pointer to the beginning if the substring is located
 * otherwise, return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
