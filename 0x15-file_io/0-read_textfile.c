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

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	Re = read(fd, 

	if (fd < 0)
		perror("f1");
		exit(1);

	if (!filename && letters == 0)
		free(
		return (0);
	else
		count = write(fd, filename, letters);
	return (count)
