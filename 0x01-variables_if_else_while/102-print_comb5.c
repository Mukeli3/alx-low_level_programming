#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 00; i <= 98; i++)
	{
		for (j = 01; j <= 99; j++)
		{
			putchar(i);
			putchar(j);
			if (i + j < 35)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return(0);
}
