#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: unused character
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	scanf("%d", &i);
	if (isdigit(i))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
