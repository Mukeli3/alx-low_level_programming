#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a new string
 * which is a duplicate of a string
 * @_strdp - function that returns a pointer to a duplicate
 * of string str
 * @str: s character pointer to be duplicate
 * Return: NULL if str is NULL or if memory was not available
 * else a pointer to the duplcated string
 */
char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = strdup(str);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
