#include "main.h"
#include <stdlib.h>

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

	p = _strdup(str);
	if (str == NULL)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
