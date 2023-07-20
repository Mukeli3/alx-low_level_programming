#include "main.h"

/**
 * clear_bit - function sets the value of a bit
 * to 0 at a given index
 * @n: the number
 * @index: the index starting from 0
 *
 * Return: 1 on success, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 63)
		return (-1);
	bit = bit << index;
	if ((*n & bit) != 0)
		*n = *n ^ bit;

	return (1);
}
