#include "main.h"

/**
 * print_triangle - prints a triangle (different output format)
 * @size: triangle size
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i = 0, j = 0, k = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		while (k < i)
		{
			_putchar('#');
			k++;
		}
		i++;
		j = 0;
		k = 0;
		_putchar('\n');
	}
}
