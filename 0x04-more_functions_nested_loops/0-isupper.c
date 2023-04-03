#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: reference character
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char ch;

	scanf("%c", &ch);

	if (isupper(ch))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
