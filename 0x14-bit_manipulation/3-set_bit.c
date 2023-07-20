#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * at a given index
 * @n: the number
 * @index: the index, starting from 0 where to set bit
 *
 * Return: 1 on success, -1 on error
 */
int set_it(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 63)
		return (-1);

	bit = bit << index;
	*n = *n | bit;

	return (1);
}
