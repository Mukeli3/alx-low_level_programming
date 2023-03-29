#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase letters
 * @c: reference letter
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	char alphabet;

	alphabet = c;
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
