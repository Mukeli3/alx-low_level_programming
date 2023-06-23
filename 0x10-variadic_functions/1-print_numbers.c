#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers,
 * followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x, i;

	va_list ar;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ar, unsigned int);
		printf("%d%s", x, separator);
	}
	if (separator == NULL)
	{
		printf("%d", x);
	}
	printf("\n");
	va_end(ar);
}
