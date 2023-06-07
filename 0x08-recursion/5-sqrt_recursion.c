#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number
 * @n: number whose square root is to be determined
 *
 * Return: -1 if n does not have a square root
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (sqrt(n));
	}
	return (0);
}
