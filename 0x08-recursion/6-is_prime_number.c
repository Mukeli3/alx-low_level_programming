#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: the input integer
 *
 * Return: 1 if the integer is a prime number
 * otherwise 0
 */
int is_prime_number(int n)
{
	if (n > 1 && n % n == 0)
	{
		return (1);
	}
	else if (n % 1 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}