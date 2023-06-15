#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string to be concatenated
 * @n: number of s2 bytes to be concatenated
 *
 * Return:pointer to the newly allocated space
 * in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j, p;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		i = strlen(s1);
	}
	if (s2 == NULL)
	{
		n = 0;
	}
	else if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	c = malloc((i + n + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		c[j] = s1[j];
	}
	for (p = 0; p < n; p++, j++)
	{
		c[j] = s2[p];
	}
	c[j] = '\0';
	return (c);
}
