#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: Always 0 on success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;

	va_list ap;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(ap, unsigned int);
	}
	if (n == 0)
	{
		return (0);
	}
	va_end(ap);
	return (result);
}
