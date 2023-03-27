#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: an integer 1
 * @b: an integer 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
