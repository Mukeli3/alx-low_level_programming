#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first pointer to a char string
 * @s2: second pointer to a char string
 *
 * Return: 0 if all the characters in both strings are same
 * > 0 if the first not-matching character in s1 has
 * greater ASCII value than the corresponding character in s2
 * < 0 if the first not-matching character in s1 has
 * lesser ASCII value than the corresponding character in s2
 */
int _strcmp(char *s1, char *s2)
{
	int result = strcmp(s1, s2);

	if (result == 0)
	{
		return (0);
	}
	else
	{
		return (strcmp);
	}
}
