#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	int i, j;

	fr = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (fr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		fr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		fr[i] = s2[j];
	}
	fr[i] = '\0';
	return (fr);
}
