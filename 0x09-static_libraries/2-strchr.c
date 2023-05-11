#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string in which the character is searched
 * @c: character searched in the string
 *
 * Return: pointer to the first occurence of character c
 * NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	return (p);
}
