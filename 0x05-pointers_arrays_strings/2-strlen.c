#include "main.h"
#include <stdio.h>

/**
 * _strlen - function to give the length of a string
 * @s: string pointer passed to the function
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (strlen(s));
}
