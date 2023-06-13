#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: array rows
 * @height: array columns
 * Return: NULL if width and height is 0 0r negative
 * or on failure else a pointer
 */
int **alloc_grid(int width, int height)
{
	int **n; 
	int i,j;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	n = malloc(height * sizeof(int *));
	if (n ==NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		n[i] = malloc(width * sizeof(int));
		if (n[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(n[j]);
			}
			free(n);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}
	return (n);
}
