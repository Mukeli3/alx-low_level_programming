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
	if (n > 0)
	{
		_putchar('_');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
