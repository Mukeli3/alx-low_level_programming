#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: first natural number
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		_putchar(',');
		_putchar(' ');
	}
	for (i = n; i >= 98; i--)
	{
		printf("%d", i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
