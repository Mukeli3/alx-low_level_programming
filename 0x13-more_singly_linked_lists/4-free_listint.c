#include "lists.h"

/**
 * free_listint - function frees a list
 * @head: a pointer to listint_t
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;
	temp = head;
	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
