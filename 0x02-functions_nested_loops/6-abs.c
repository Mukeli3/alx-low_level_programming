#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: a number
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	scanf("%d", &n);
	_putchar(abs(n));
	_putchar('\n');
	return (0);
}
