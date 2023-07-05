#include "lists.h"

/**
 * pop_listint - function deletes the head node of a list
 * @head: a pointer to a list
 *
 * Return: head node's data, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int j;
	listint_t *tep;

	if(!*head)
		return (0);
	tep = *head;
	j = tep->n;
	*head = (*head)->next;
	free (tep);

	return (j);
}
