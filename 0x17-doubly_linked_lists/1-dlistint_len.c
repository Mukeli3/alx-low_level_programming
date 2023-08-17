#include "lists.h"

/**
 * dlistint_len - function returns linked list elements number
 * @h: head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;

	if (!h)
		return (0);
	while (temp->next)
	{
		temp = temp->next;
		count++;
	}
	if (!temp->next)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
