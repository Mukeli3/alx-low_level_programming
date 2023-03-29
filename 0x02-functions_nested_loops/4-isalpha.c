#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: unused parameter
 *
 * Return: 1 if character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	char ch;

	scanf("%c", &ch);
	if (isalpha(ch) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
