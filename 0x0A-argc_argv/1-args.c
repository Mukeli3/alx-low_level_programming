#include <stdio.h>

/**
 * main - Entry point of the program
 * @argv: argument vector, an array of strings
 * @argc: argument count
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
