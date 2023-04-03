#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: an integer
 *
 * Return: Always 0 (On Success)
 */
int _abs(int n)
{
	int a;

	a = abs(n);
	scanf("%d", &n);
	_putchar(a);
	return (0);
}
