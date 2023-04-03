#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int n;

	i = 0;
	n = 0;
	for (i = 0; i <= 14; i++)
	{
		_putchar(i);
		for (n = 0; n <= 10; n++)
			_putchar(n);
	}
	_putchar('\n');
}
