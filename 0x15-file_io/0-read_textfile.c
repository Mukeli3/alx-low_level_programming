#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - function reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letter to be read and printed
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int count, fd;
	char *buff;
	ssize_t Re;

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	Re = read(fd, buff, letters);
	if (Re == -1 || fd == -1)
	{
		free(buff);
		return (0);
	}
	if (!filename && letters == 0)
	{
		free(buff);
		return (0);
	}
	count = write(STDOUT_FILENO, buff, Re);
	free(buff);
	close(fd);
	return (count);
}
