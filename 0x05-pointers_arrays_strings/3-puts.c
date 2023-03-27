#include "main.h"

/**
 * _puts - a function that puts
 * @str: a parameter to _puts function
 *
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
