#include "search_algos.h"

/**
 * binary_search - function searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: value to search for
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, middle,  l = 0;
	size_t r = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		middle = l + (r - l) / 2;
		printf("Searching in array: ");

		for (i = l; i <= r; i++)
			printf("%d, ", array[i]);

		printf("\n");

		if (array[middle] == value)
			return (middle);

		else if (array[middle] < value)
			l = middle + 1;

		else
			r = middle - 1;
	}
	return (-1);
}
