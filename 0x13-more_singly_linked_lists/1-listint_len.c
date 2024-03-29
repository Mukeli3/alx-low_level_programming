#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *temp;

	temp = h;
	if (h == NULL)
	{
		return (0);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp->next == NULL)
	{
		count++;
	}
	return (count);
}
