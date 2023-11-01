#include "main.h"

/**
 * create_file - this is a function that creates a file.
 * @filename: this is a pointer to the name of the file to be created
 * @text_content: this is a pointer to a string to write to the file
 *
 * Return: - -1 is returned if the function fails otherwise - -1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(fd, text_content, len);

	if (fd == -1 || y == -1)
		return (-1);

	close(fd);

	return (1);
}
