#include "main.h"
#include <string.h>

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
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
