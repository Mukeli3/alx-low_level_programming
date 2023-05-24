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
	for (; n > 1; n++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
