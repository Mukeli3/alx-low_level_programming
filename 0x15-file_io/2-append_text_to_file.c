#include "main.h"

/**
 * append_text_to_file - function appends text
 * at the end of a file
 * @filename: file name
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, size = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (text_content)
		while(text_content[size])
			size++;
	wrt = write(fd, filename, size);
	if (fd == -1 || wrt == -1)
		return (-1);
	return (1);
}
