#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in a linked
 * list_t list
 * @h: a pointer to the first node or to a constant list_t
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *temp;

	temp = h;

	if (h->next == NULL)
	{
		return (0);
	}
	if (temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp->next == NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
