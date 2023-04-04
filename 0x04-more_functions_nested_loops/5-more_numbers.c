#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	char c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar((d / 10) + '0');
			}
			_putchar((d % 10) + '0');
		}
		_putchar(10);
	}
}
