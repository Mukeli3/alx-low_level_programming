#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 1 if program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc > 2)
	{
		mul = 1;

		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);

			mul = mul * x;
		}
		printf("%d\n", mul);
	}
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
