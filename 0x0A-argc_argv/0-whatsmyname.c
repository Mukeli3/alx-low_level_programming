#include <stdio.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector, an array of strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	printf("%d\n", argc);

	return (0);
}
