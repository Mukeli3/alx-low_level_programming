#include "main.h"
#include <stdio.h>

/**
 * mul - multiplies two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: result
 */
int mul(int a, int b)
{
	int mul;

	scanf("%d", &a);
	scanf("%d", &b);
	mul = a * b;
	return (mul);
}
