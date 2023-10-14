#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: this is the number of arguments
 * @argv: this is the array of arguments
 *
 * Return: always 0 in sucess
 */
int main(int argc, char *argv[])
{
	int bytes, f;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error \n");
		exit(2);
	}
	arr = (char *)main;
	for (f = 0; f < bytes; f++)
	{
		if (f == bytes - 1)
		{
			printf("%02hhx\n", arr[f]);
		}
		printf("%02hhx", arr[f]);
	}
	return (0);
}
