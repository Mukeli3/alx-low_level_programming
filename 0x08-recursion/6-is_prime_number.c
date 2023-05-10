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
	int i;

	if (n == i)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (1);
	}
	else
	{
		i = i - 1;
		is_prime_number(n);
	}
}
