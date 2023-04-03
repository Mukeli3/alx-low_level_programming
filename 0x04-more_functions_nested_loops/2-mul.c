#include "main.h"
#include <stdio.h>

/**
 * mul - multiplies two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: 0 on success
 */
int mul(int a, int b)
{
	int mul;

	scanf("%d %d", &a,&b);
	mul = a * b;
	printf("%d", mul);
	return (0);
}
