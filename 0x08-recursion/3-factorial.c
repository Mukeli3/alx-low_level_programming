#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial
 * of a given number
 * @n: number whose factoorial is to be determined
 *
 * Return: Always 0 on success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
