#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that puts
 * @str: a string to puts function
 *
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
