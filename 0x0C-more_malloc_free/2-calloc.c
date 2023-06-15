#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array,
 * using malloc
 * @nmemb: number of elements in the array
 * @size: size of every element in bytes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void arr[nmemb];

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, (nmemb * size));
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (arr);
}
