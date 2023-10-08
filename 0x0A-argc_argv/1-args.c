#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*disregard argv*/
	printf("%d\n", argc - 1);

	return (0);
}
