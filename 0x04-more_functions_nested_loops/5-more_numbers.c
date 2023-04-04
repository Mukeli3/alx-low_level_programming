#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: nothing
 */
void more_numbers(void)
{
	char c;
	char h;

	c = 48;
	h = 48;
	for (c = 48; c <= '\016'; ++c)
	{
		_putchar(c);
		for (h = 48; c <= 58; h++)
			_putchar(h);
	}
	_putchar('\n');
}
