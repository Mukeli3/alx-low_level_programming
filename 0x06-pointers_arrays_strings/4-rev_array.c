#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of intergers
 *
 * @a: an array of integers
 * @n: the number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux[n];

	for (i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
		_putchar(a[i]);
	for (i = 0; i < n; i++)
		a[i] = aux[i];
		_putchar(a[i]);
	}
	_putchar('\n');
}
