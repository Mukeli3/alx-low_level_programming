#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string whose length is to be determined
 *
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (strlen(s));
	}
	return (0);
}
