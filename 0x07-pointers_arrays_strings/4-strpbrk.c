#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept, NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *match = strpbrk(s, accept);

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	else
	{
		return (match);
	}
}
