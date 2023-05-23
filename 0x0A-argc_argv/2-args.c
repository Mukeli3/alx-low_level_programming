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
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
