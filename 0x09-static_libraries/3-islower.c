#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - checks for lowercase letters
 * @c: reference letter
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	char ch;

	scanf("%c", &ch);
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
