#include "main.h"

/**
 * binary_to_uint - function converts a binary number
 * to an unsigned int
 * @b: constant character pointer
 *
 * Return: converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, pow = 1;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	else
	{
		while (b[i] != '\0')
			i++;
		i--;
		while (i >= 0)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);

			dec = dec + ((b[i] - 48) * pow);
			pow = pow * 2;
			i--;
		}
	}
	return (dec);
}
