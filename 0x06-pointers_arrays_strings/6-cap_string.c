#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all string words
 * @str: string whose words will be capitalized
 *
 * Return: resulting string, where all words are capitalized
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 'a' + 'A';
		}
		if (str[i] == ' ' || str[i] == '!' || str[i] == '"' || str[i] == '.')
			if (str[i] == '?' || str[i] == ',' || str[i] == '\n' || str[i] == '	')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
		}
	}
	return (str);
}
