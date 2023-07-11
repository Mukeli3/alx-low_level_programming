#include "main.h"

/**
 * replicate_text - function copies file content to another
 * @file_from: file from which coontents are copied from
 * @file_to: file to which contents are copied to
 *
 * Return: nothing
 */
void replicate_text(char *file_from, char *file_to)
{
	int fd1, fd2, i = 0;
	char buffer[1024];
	ssize_t Re, Wr, cl1, cl2;

	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		Re = read(fd1, buffer, 1024);
		if (fd1 == -1 || Re == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
		Wr = write(fd2, buffer, Re);
		if (fd2 == -1 || Wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
		i++;
	} while (Re != 0);

	cl1 = close(fd1);
	if (cl1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
	exit(100);
	cl2 = close(fd2);
	if (cl2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
	exit(100);
}

/**
 * main - program entry point, takes command line arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);

	replicate_text(argv[1], argv[2]);
	return (0);
}
