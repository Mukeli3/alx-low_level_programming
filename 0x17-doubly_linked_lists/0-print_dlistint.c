#include "lists.h"

/**
 * print_dlistint - function all elements of a list
 * @h: head, pointer to first node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;
	if (!h)
		return (0);
	while (temp->next)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	if (!temp->next)
	{
		printf("%d\n", temp->n);
		count++;
	}
	return (count);
}
