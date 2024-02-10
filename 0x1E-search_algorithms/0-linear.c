#include "search_algos.h"

/**
 * linear_search - function searches for a value in an
 * array of integers using the linear search algorithm
 * @array: pointer to the frst array element to search in
 * @size: elements number in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (array == NULL)
		return (-1);

	while (j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
