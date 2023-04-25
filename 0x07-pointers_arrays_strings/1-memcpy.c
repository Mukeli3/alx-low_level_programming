#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer to dest array where content is
 * to be copied
 * @src: pointer to data source to be copied
 * @n: number of bytes copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
