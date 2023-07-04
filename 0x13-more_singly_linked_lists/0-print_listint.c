#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements of
 * a listint_t list
 * @h: pointer to the first head
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *temp;

	temp = h;
	if (h == NULL)
	{
		return (0);
	}
	if (temp->n == NULL)
	{
		return (0);
	}
	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	if (temp->next == NULL)
	{
		printf("%d\n", temp->n);
		count++;
	}
	return (count);
}
