#include "main.h"

/**
 * flip_bits - function return number of bits
 * @n: the number
 * @m: flipped number
 *
 * Return: unsigned int of number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int j;

	j = n ^ m;

	while (j)
	{
		i++;
		j &= (j - 1);
	}
	return (i);
}
