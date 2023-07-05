#include "lists.h"

/**
 * free_listint2 - function frees a list
 * @head: a pointer to a list pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
	{
		return;
	}
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}

