#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int i, l, t;

	l = strlen(s);
	for (i =0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
	_putchar('\n');
}
