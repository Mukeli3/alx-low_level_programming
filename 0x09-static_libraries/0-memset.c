#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled starting from s
 *
 * Return: a ponter to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
		memset(s, b, n);
		return (s);
}
