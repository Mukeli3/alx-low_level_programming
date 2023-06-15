#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the smallest array value
 * @max: the largest array value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *n;
	int i, p;

	n = malloc(((max - min) + 1) * sizeof(int));
	if (n == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (i = min, p = 0; i <= max; i++, p++)
	{
		n[p] = i;
	}
	return (n);
}
