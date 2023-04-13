#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
