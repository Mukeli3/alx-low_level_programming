#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	if (size > 0)
	{
		_putchar('#');
		size++;
	}
	else
		_putchar('\n');
}
