#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...);
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, j = 0;
	char *h, *sep = "";
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'i':
				i = va_arg(args, int);
				printf("%s%d", sep, i);
				break;
			case 'f':
				printf("%s", sep);
				printf("%f", va_arg(args, double));
				break;
			case 'c':
				i = va_arg(args, int);
				printf("%s%c", sep, i);
				break;
			case 's':
				h = va_arg(args, char *);
				if (h == NULL)
				{
					h = "(nil)";
				}
				printf("%s%s", sep, h);
				break;
			default:
				j++;
				continue;
		}
		sep = ", ";
		j++;
	}
	va_end(args);
	printf("\n");
}
