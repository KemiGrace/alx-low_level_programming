#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char *create_buffer(void);
void close_file(int fd);

/**
 * create_buffer - this function allocates 1024 bytes for a buffer
 *
 * Return: a pointer that points to the new buffer that is allocated
 */
char *create_buffer(void)
{
	char *buffer = malloc(1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(98);
	}
	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @fd: the file descriptor that is meant to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}

/**
 * main - a content of a file is copied to another file
 * @argc: this is the number of arguments the program is supplied with
 * @argv: this is the array of pointers pointing to the arguments
 *
 * Return: 0 on sucess
 *
 * Description: Exit code 97 for an incorrect argument count
 * exit code 98 if file_from does not exit or cannot be read
 * exit code 99 if file_to cannot be created or written to
 * exit code 100 if file_to or file_from cannot be closed
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer();

	from = open(argv[1], O_RDONLY);

	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close_file(from);
		exit(99);
	}

	do
	{
		r = read(from, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read form file %s\n", argv[1]);
			free(buffer);
			close_file(from);
			close_file(to);
			exit(98);
		}

		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close_file(from);
			close_file(to);
			exit(99);
		}
	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

