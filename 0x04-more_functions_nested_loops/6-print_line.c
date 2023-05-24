#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: nothing
 */
void print_line(int n)
{
	while (n < 0 || n == 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n++;
		}
		_putchar('\n');
		n++;
	}
}
