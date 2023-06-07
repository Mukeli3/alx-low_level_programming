#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number
 * @n: number whose square root is to be determined
 *
 * Return: -1 if n does not have a square root
 */
int _sqrt_recursion(int n)
{
	int i = n;
	int y = (i + (n / i)) / 2;

	if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (y);
	}
	return (0);
}
