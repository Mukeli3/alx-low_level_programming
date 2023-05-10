#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to be factorised
 *
 * Return: -1 if n is smaller than 0
 * tp indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 && n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
