#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point
 * @argc: argument count
 * @argv: an array of strings
 *
 * Return: 1 if one of the number contains symbols that
 * are not digits, always 0 on success
 */
int main (int argc, char **argv)
{
	int i, n;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (argv[i][n] < '0' || argv[i][n] < '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
