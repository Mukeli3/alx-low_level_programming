#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: first pointer to a char string
 * @src: second pointer to a char string
 * @n: an integer
 *
 * Return: a pointer to the reuslting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
