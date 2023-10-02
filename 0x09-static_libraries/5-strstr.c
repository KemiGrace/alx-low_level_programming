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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
