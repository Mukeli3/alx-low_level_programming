#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @c: string checked for lowercase letters
 *
 * Return: resulting string c, where all letters are uppercase
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 'a' + 'A';
	}
	return (c);
}
