#include <stdio.h>

/**
 * main - Program entry point
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
