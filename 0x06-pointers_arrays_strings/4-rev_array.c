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
	int i;

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = n - 1; i >= 0; i--)
		_putchar(a[i]);

	_putchar('\n');
}
