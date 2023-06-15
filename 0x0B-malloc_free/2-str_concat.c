#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - determines the length of a string
 * @c: string whose length is determined
 *
 * Return: an unsigned int
 */
unsigned int _strlen(char *c)
{
	unsigned int i;

	if (c == NULL)
	{
		return (0);
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string,
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *fr;
	unsigned int i, j;
	unsigned int n1, n2;

	n1 = _strlen(s1);
	n2 = _strlen(s2);
	fr = malloc((n1 + n2 + 1) * sizeof(char));
	if (fr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n1; i++)
	{
		fr[i] = s1[i];
	}
	for (j = 0; j < n2; j++, i++)
	{
		fr[i] = s2[j];
	}
	fr[i] = '\0';
	return (fr);
}
