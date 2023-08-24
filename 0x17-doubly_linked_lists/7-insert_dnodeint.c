#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position
 * @h: pointer to a list pointer
 * @idx: list index, where new node should be added
 * @n: new node data
 *
 * Return: new node address, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i = 0;
	dlistint_t *new, *temp;

	if (!h)
		return (NULL);
	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (idx == 1)
	{
		new->prev = NULL;
		new->next = *h;
		new->n = n;
	}
	else
	{
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		new->n = n;
		new->prev = temp;
		new->next = temp->next;
		temp->next = new;
		new->next->prev = new;
	}
	return (new);
}
