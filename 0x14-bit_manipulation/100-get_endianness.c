#include "main.h"

/**
 * get_endianness - function checks for the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;

	if (*(char *)&i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
