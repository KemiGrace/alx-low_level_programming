#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file, prints it to the POSIX standard output
 * @filename: this is the text file to be read
 * @letters: the exact number of letters to be read
 *
 * Return: the actual number of letters read and printed
 * 0 when file cannot be opened
 * 0 when filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t m;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	m = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (m);
}
