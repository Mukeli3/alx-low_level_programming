#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 *
 */
void _puts(char *str)
{
	_putchar(*str++);
	_putchar('\n');
}
