#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *y;

	va_list fmm;

	va_start(fmm, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			y = va_arg(fmm, char *);
			if (y == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", y);
			}
			if (separator != NULL && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(fmm);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, NULL, "Django");
    return (0);
}
