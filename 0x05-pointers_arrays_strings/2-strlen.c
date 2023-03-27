#include "main.h"
#include <srdio.h>

/**
 * _strlen - function to give the length of a string
 * @s: string pointer passed to the function
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
