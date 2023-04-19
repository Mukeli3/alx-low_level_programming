#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int i = 0;
	int l;

	while (*s != '0')
	{
		i++;
		s++;
	}
	s--;
	for (l = i; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
