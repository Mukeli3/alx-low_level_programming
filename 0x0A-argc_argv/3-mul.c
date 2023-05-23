#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 1 if program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);

			mul = mul * x;
		}
		printf("%d\n", mul);
	}

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
}
