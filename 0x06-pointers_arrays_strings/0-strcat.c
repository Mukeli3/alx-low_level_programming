#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: first char pointer to a string
 * @src: second char pointer
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
