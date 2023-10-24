#include <stdio.h>
#include "main.h"

/**
 * Main - prints the name of the program
 * @argc: The nmber of arguments
 * @argv: This is the array of arguments
 *
 * Return: Always 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
