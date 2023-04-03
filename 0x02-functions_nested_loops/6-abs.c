#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: an integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	int a;

	a = abs(n);
	scanf ("%d", &n);
	printf("%d\n", a);
	return (0);
}
