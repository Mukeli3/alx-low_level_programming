#include <stdio.h>

/**
 * add - adds two integers and returns the result
 * @i: a first integer
 * @n: a second integer
 *
 * Return: Always 0 (Success)
 */
int add(int i, int n)
{
	int sum;

	sum = i + n;
	printf("%d", sum);
	return (0);
}
