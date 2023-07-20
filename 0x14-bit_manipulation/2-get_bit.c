#include "main.h"

/**
 * get_bit - function returna the value of a bit a given index
 * @n: the number
 * @index: the index starting from 0
 *
 * Return: value of the bit at index
 * -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long digit;

	digit = n >> index;

	if (index > 63)
		return (-1);

	return (digit & 1);
}
