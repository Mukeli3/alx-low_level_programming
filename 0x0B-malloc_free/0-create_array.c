#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char
 * @size: an unsigned int
 * @c: charater
 * Return: NULL if size is 0 or if if fails
 * else a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	p = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
