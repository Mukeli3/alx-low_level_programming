#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack.
 * @haystack:  main string to be examined
 * @needle: substring to be searched in haystack string
 *
 * Return: a pointer to the beginning of the located substring,
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}
	else
	{
		return (result);
	}
}
