#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: reference parameter
 *
 * Return: 1 if character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	char m;

	scanf("%c", &m);
	if (isalpha(m))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
