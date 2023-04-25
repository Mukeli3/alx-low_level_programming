#include "main.h"

/**
 * leet - encodes a string
 * @a - string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *a)
{
	int n;
	int i;
	char c[] = "aAeEoOtTlL";
	char h[] = "4433007711";

	for (n = 0; a[n] != '\0'; n++)
	{
		for (i = 0; i < 10; i++)
		{
			if (a[n] == c[i])
			{
				a[n] = h[i];
			}
		}
	}
	return (a);
}
