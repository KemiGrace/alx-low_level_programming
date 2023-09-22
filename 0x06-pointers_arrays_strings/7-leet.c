#include "main.h"

/**
 * leet - This is a function that encodes a string into 1337
 * @n: This are the input values
 *
 * Return: return value of n
 */
char *leet(char *n)
{
	int j;
	int k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[j] == s1[k])
			{
				n[j] = s2[k];
			}
		}
	}
	return (n);
}
