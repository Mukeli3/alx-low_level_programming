#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 *@i: an integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (i < 0)
	{
		_putchar('0' - n);
		return (-(n));
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
