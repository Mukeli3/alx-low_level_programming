#include <stdio.h>

/**
 * main - program entry point
 * @argc: argument counnt
 * @argv: argument vector
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
