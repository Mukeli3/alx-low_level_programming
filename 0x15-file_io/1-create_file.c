#include "main.h"

/**
 * create_file - function creates a file
 * @filename: file name to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content)
		while (text_content[size])
			size++;
	if (write(fd, text_content, size) == -1)
		return (-1);
	return (1);
}
