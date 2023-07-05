#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function frees a list
 * @head: a pointer to list_t
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
