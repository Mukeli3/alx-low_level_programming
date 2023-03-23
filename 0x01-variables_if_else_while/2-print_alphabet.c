#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char alphabet;
	for (alphabet = 'a'; x <= 'z'; x++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
